#include <stdio.h>
#include <string>
#include <vector>
#include <list>
#include <atomic>
#include <functional>
//#include "inc/nvtx_c++.hpp"
// #include "inc/test.hpp"

#include <nvtx3/nvToolsExt.h>

#define NVTX3_INIT_MODE_NOW 1
//on first use
#define NVTX3_INIT_MODE_FIRST 2
 //when the associated with a global constructed domain (from macros) when it is first initialized
#define NVTX3_INIT_MODE_DOMAIN 3

//#define NVTX3_LINKONCE_DEFINE_GLOBAL
//#include "nvtxLinkOnce.h"
namespace danielp1{ //preview 1

class spinlock_t{
  std::atomic_flag flag;
public:
  spinlock_t() : flag(ATOMIC_FLAG_INIT) {}
  //~spinlock_t(){ unlock(); }

  inline bool lock(){
    while( flag.test_and_set(std::memory_order_acquire) );
    return true;
  }

  inline bool try_lock() {
    return !flag.test_and_set(std::memory_order_acquire);
  } 

  inline void unlock(){
    flag.clear(std::memory_order_release);
  }
};

template<typename T>
class late_init_t
{
private:
  using this_t = late_init_t<T>;
  using init_fn_t = std::function<void(T&)>;

  T& (this_t::*_accessor)();
  init_fn_t _init_callback;
  spinlock_t _first;
  T _value;

private:
  T& accessor_get(){
    return _value;
  }

public:
  void force_init(){
    if(_accessor == &this_t::accessor_get) {
      return;
    }

    _first.lock();
    
    if(_accessor != &this_t::accessor_get) {
      _init_callback(_value);
      _accessor=&this_t::accessor_get; 
    }
    _first.unlock();
  }


private:
  T& accessor_init(){
    force_init();
    return _value;
  }


public:
  inline late_init_t(T&& default_value, init_fn_t&& callback, uint32_t init_mode = NVTX3_INIT_MODE_NOW) : 
    _value(default_value),
    _accessor( &this_t::accessor_init ),
    _init_callback(callback), 
    _first() {
      if(init_mode == NVTX3_INIT_MODE_NOW){
        force_init();
      }
  }

  inline late_init_t(T&& value) : 
    _value(value),
    _accessor( &this_t::accessor_get ) {
  }

  bool is_initialized(){ return _accessor == &this_t::accessor_get; }

  inline T& get(){ return (this->*_accessor)(); }


  //force overwrite instead of late init.
  T& put(){ 
    _accessor=&this_t::accessor_get; 
    return _value; 
  }

};

class domain_t
{
  using init_callback_t = std::function<void(nvtxDomainHandle_t&)>;
public:
  std::vector<init_callback_t> on_init;
protected:
  std::string _name;
  late_init_t<nvtxDomainHandle_t> _id;
  
  void init(nvtxDomainHandle_t& handle){
    //printf("In %s  %s\n", __PRETTY_FUNCTION__, _name.c_str());

    handle = nvtxDomainCreateA(_name.c_str());

    for(std::size_t i = 0; i < on_init.size(); ++i)
    {
      init_callback_t& init_fn = on_init[i];
      init_fn(handle);
    }
  }
 
public:

  domain_t(char const * name, uint32_t init_mode = NVTX3_INIT_MODE_FIRST ) :
    _name(name),
    _id((nvtxDomainHandle_t)-1, std::bind(&domain_t::init, this, std::placeholders::_1), init_mode) {
  
  }

  void print(){
    printf("Domain %s = %i\n", name(), id() );
  }

  char const* name() { return _name.c_str(); }
  nvtxDomainHandle_t& id() { return _id.get(); }

  operator nvtxDomainHandle_t& () {
    return _id.get();
  }
};



class registered_string_t
{
  domain_t* _domain;
  std::string _value;
  late_init_t<nvtxStringHandle_t> _id;


  void create(nvtxDomainHandle_t& domainHandle, char const* str, nvtxStringHandle_t& stringHandle){
      //printf("In %s, register %s \n", __PRETTY_FUNCTION__, str );

      stringHandle = nvtxDomainRegisterStringA(
        domainHandle,
        str);
  }

  void on_late_init(nvtxStringHandle_t& stringHandle){
    nvtxDomainHandle_t& domainHandle = _domain->id();
    
    //getting the domain handle itself can initialize everything, so be safe
    if(_id.is_initialized()){
      create( domainHandle, _value.c_str(), stringHandle );
    }
  }

  void on_domain_init(nvtxDomainHandle_t& domainHandle){
    create(domainHandle, _value.c_str(), _id.put());
  }

public:
  registered_string_t(domain_t& domain, char const* value, uint32_t init_mode = NVTX3_INIT_MODE_FIRST) :
    _domain(&domain),
    _value(value),
    _id((nvtxStringHandle_t)-1, std::bind(&registered_string_t::on_late_init, this, std::placeholders::_1), init_mode) {
    
    if(init_mode == NVTX3_INIT_MODE_DOMAIN){
      domain.on_init.push_back( 
        std::bind(&registered_string_t::on_domain_init, this, std::placeholders::_1) 
        );
    }
  }

  registered_string_t(nvtxDomainHandle_t& domainHandle, char const* value) :
    _value(value), _id(0) {
    
    create(domainHandle, value, _id.put());
  }

  void print(){
    printf("String \"%s\" = %i\n", value(), id() );
  }

  char const* value(){ return _value.c_str(); }
  nvtxStringHandle_t& id(){ return _id.get(); }
};




class scoped_range
{
  nvtxDomainHandle_t _domain;

public:
  //macros will make a static helper to improve performance when attributes are static
  class static_helper
  {
    friend scoped_range;
    registered_string_t _message;

    nvtxDomainHandle_t _domain;
    nvtxEventAttributes_t _eventAttribs = {0};
    
  public:
    inline static_helper(
      domain_t& domain,
      char const * message) : 
      _domain(domain.id()),
      _message(domain, message) {
      
        _eventAttribs.version = NVTX_VERSION;
        _eventAttribs.size = NVTX_EVENT_ATTRIB_STRUCT_SIZE;
        _eventAttribs.messageType = NVTX_MESSAGE_TYPE_REGISTERED;
        _eventAttribs.message.registered = _message.id();
    }    
  };

  inline scoped_range(static_helper& helper){ 
    //printf("In %s %s\n", __PRETTY_FUNCTION__, helper._message.value() );

    _domain = helper._domain;
    nvtxDomainRangePushEx(_domain, &helper._eventAttribs); 
  }

  inline scoped_range(domain_t& domain, char const* msg){ 
      //printf("In %s %s\n", __PRETTY_FUNCTION__, msg );

    nvtxEventAttributes_t _eventAttribs = {0};
    _eventAttribs.version = NVTX_VERSION;
    _eventAttribs.size = NVTX_EVENT_ATTRIB_STRUCT_SIZE;
    _eventAttribs.messageType = NVTX_MESSAGE_TYPE_ASCII;
    _eventAttribs.message.ascii = msg;

    _domain = domain.id();
    nvtxDomainRangePushEx(_domain, &_eventAttribs); 
  }

  inline scoped_range(domain_t& domain, registered_string_t& msg){ 
    //printf("In %s %s\n", __PRETTY_FUNCTION__, msg.value() );

    nvtxEventAttributes_t _eventAttribs = {0};
    _eventAttribs.version = NVTX_VERSION;
    _eventAttribs.size = NVTX_EVENT_ATTRIB_STRUCT_SIZE;
    _eventAttribs.messageType = NVTX_MESSAGE_TYPE_REGISTERED;
    _eventAttribs.message.registered = msg.id();

    _domain = domain.id();
    nvtxDomainRangePushEx(_domain, &_eventAttribs); 
  }

 inline  ~scoped_range(){
    //printf("In %s %s\n", __PRETTY_FUNCTION__);
    nvtxDomainRangePop(_domain);     
  }

  scoped_range(scoped_range const&) = delete;
  scoped_range& operator=(scoped_range const&) = delete;
  scoped_range(scoped_range&&) = delete;
  scoped_range& operator=(scoped_range&&) = delete;
};

};//end daniel && p1 namespaces

#ifndef NVTX3_DISABLE_NAMESPACE_RENAME
namespace daniel = danielp1;
#endif


//NOTE: use __LINE__ to make sure we don't have an issue 
//if multiple ranges are made in the same scope
#define NVTX3_STATIC_SCOPED_RANGE(DOMAIN, MESSAGE) \
  static daniel::scoped_range::static_helper daniel_trsh##__LINE__ (DOMAIN, MESSAGE) ; \
  daniel::scoped_range daniel_tr##__LINE__ ( daniel_trsh##__LINE__ );


#define NVTX3_DOMAIN(NAME, ...) NVTX3_DOMAIN2( NAME, #NAME, __VA_ARGS__ )
#define NVTX3_DOMAIN2(DOMAIN_SYM, STR, ...) \
class DOMAIN_SYM##_t : public daniel::domain_t { \
public: \
  using my_domain_t = DOMAIN_SYM##_t; \
  static daniel::domain_t& get(); \
  DOMAIN_SYM##_t(char const* name) : daniel::domain_t(name, NVTX3_INIT_MODE_DOMAIN){} \
   __VA_ARGS__ \
}; \
NVTX_LINKONCE_DEFINE_GLOBAL DOMAIN_SYM##_t DOMAIN_SYM ( STR ); \
daniel::domain_t& DOMAIN_SYM##_t::get(){ return DOMAIN_SYM; }

//NOTE: if we don't want these to be a child of the domain then just add NVTX_LINKONCE_DEFINE_GLOBAL in front and move __VA_ARGS__ in NVTX3_DOMAIN
#define NVTX3_STRING( SYM ) NVTX3_STRING2( SYM, #SYM )
#define NVTX3_STRING2( SYM, VAL) \
  daniel::registered_string_t SYM = { my_domain_t::get(), VAL, NVTX3_INIT_MODE_DOMAIN }; 

