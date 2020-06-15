# 1 "./main.cpp"
# 1 "<built-in>"
# 1 "<command-line>"
# 1 "/usr/include/stdc-predef.h" 1 3 4
# 1 "<command-line>" 2
# 1 "./main.cpp"
# 1 "./nvtx3.hpp" 1
# 16 "./nvtx3.hpp"
       
# 34 "./nvtx3.hpp"
# 1 "/usr/local/cuda/targets/x86_64-linux/include/nvtx3/nvToolsExt.h" 1
# 210 "/usr/local/cuda/targets/x86_64-linux/include/nvtx3/nvToolsExt.h"
# 1 "/usr/local/cuda/targets/x86_64-linux/include/nvtx3/nvtxDetail/nvtxLinkOnce.h" 1
# 211 "/usr/local/cuda/targets/x86_64-linux/include/nvtx3/nvToolsExt.h" 2
# 235 "/usr/local/cuda/targets/x86_64-linux/include/nvtx3/nvToolsExt.h"
# 1 "/usr/lib/gcc/x86_64-linux-gnu/5/include/stdint.h" 1 3 4
# 9 "/usr/lib/gcc/x86_64-linux-gnu/5/include/stdint.h" 3 4
# 1 "/usr/include/stdint.h" 1 3 4
# 25 "/usr/include/stdint.h" 3 4
# 1 "/usr/include/features.h" 1 3 4
# 367 "/usr/include/features.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/sys/cdefs.h" 1 3 4
# 410 "/usr/include/x86_64-linux-gnu/sys/cdefs.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/wordsize.h" 1 3 4
# 411 "/usr/include/x86_64-linux-gnu/sys/cdefs.h" 2 3 4
# 368 "/usr/include/features.h" 2 3 4
# 391 "/usr/include/features.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/gnu/stubs.h" 1 3 4
# 10 "/usr/include/x86_64-linux-gnu/gnu/stubs.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/gnu/stubs-64.h" 1 3 4
# 11 "/usr/include/x86_64-linux-gnu/gnu/stubs.h" 2 3 4
# 392 "/usr/include/features.h" 2 3 4
# 26 "/usr/include/stdint.h" 2 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/wchar.h" 1 3 4
# 27 "/usr/include/stdint.h" 2 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/wordsize.h" 1 3 4
# 28 "/usr/include/stdint.h" 2 3 4
# 36 "/usr/include/stdint.h" 3 4

# 36 "/usr/include/stdint.h" 3 4
typedef signed char int8_t;
typedef short int int16_t;
typedef int int32_t;

typedef long int int64_t;







typedef unsigned char uint8_t;
typedef unsigned short int uint16_t;

typedef unsigned int uint32_t;



typedef unsigned long int uint64_t;
# 65 "/usr/include/stdint.h" 3 4
typedef signed char int_least8_t;
typedef short int int_least16_t;
typedef int int_least32_t;

typedef long int int_least64_t;






typedef unsigned char uint_least8_t;
typedef unsigned short int uint_least16_t;
typedef unsigned int uint_least32_t;

typedef unsigned long int uint_least64_t;
# 90 "/usr/include/stdint.h" 3 4
typedef signed char int_fast8_t;

typedef long int int_fast16_t;
typedef long int int_fast32_t;
typedef long int int_fast64_t;
# 103 "/usr/include/stdint.h" 3 4
typedef unsigned char uint_fast8_t;

typedef unsigned long int uint_fast16_t;
typedef unsigned long int uint_fast32_t;
typedef unsigned long int uint_fast64_t;
# 119 "/usr/include/stdint.h" 3 4
typedef long int intptr_t;


typedef unsigned long int uintptr_t;
# 134 "/usr/include/stdint.h" 3 4
typedef long int intmax_t;
typedef unsigned long int uintmax_t;
# 10 "/usr/lib/gcc/x86_64-linux-gnu/5/include/stdint.h" 2 3 4
# 236 "/usr/local/cuda/targets/x86_64-linux/include/nvtx3/nvToolsExt.h" 2


# 1 "/usr/lib/gcc/x86_64-linux-gnu/5/include/stddef.h" 1 3 4
# 149 "/usr/lib/gcc/x86_64-linux-gnu/5/include/stddef.h" 3 4
typedef long int ptrdiff_t;
# 216 "/usr/lib/gcc/x86_64-linux-gnu/5/include/stddef.h" 3 4
typedef long unsigned int size_t;
# 239 "/usr/local/cuda/targets/x86_64-linux/include/nvtx3/nvToolsExt.h" 2



# 241 "/usr/local/cuda/targets/x86_64-linux/include/nvtx3/nvToolsExt.h"
extern "C" {
# 264 "/usr/local/cuda/targets/x86_64-linux/include/nvtx3/nvToolsExt.h"
typedef uint64_t nvtxRangeId_t;


struct nvtxDomainRegistration_st;
typedef struct nvtxDomainRegistration_st nvtxDomainRegistration;
# 278 "/usr/local/cuda/targets/x86_64-linux/include/nvtx3/nvToolsExt.h"
typedef nvtxDomainRegistration* nvtxDomainHandle_t;


struct nvtxStringRegistration_st;
typedef struct nvtxStringRegistration_st nvtxStringRegistration;
# 292 "/usr/local/cuda/targets/x86_64-linux/include/nvtx3/nvToolsExt.h"
typedef nvtxStringRegistration* nvtxStringHandle_t;
# 302 "/usr/local/cuda/targets/x86_64-linux/include/nvtx3/nvToolsExt.h"
typedef enum nvtxColorType_t
{
    NVTX_COLOR_UNKNOWN = 0,
    NVTX_COLOR_ARGB = 1
} nvtxColorType_t;




typedef enum nvtxMessageType_t
{
    NVTX_MESSAGE_UNKNOWN = 0,
    NVTX_MESSAGE_TYPE_ASCII = 1,
    NVTX_MESSAGE_TYPE_UNICODE = 2,

    NVTX_MESSAGE_TYPE_REGISTERED = 3,


} nvtxMessageType_t;

typedef union nvtxMessageValue_t
{
    const char* ascii;
    const wchar_t* unicode;

    nvtxStringHandle_t registered;
} nvtxMessageValue_t;
# 354 "/usr/local/cuda/targets/x86_64-linux/include/nvtx3/nvToolsExt.h"
inline static void nvtxInitialize(const void* reserved);
# 368 "/usr/local/cuda/targets/x86_64-linux/include/nvtx3/nvToolsExt.h"
typedef enum nvtxPayloadType_t
{
    NVTX_PAYLOAD_UNKNOWN = 0,
    NVTX_PAYLOAD_TYPE_UNSIGNED_INT64 = 1,
    NVTX_PAYLOAD_TYPE_INT64 = 2,
    NVTX_PAYLOAD_TYPE_DOUBLE = 3,

    NVTX_PAYLOAD_TYPE_UNSIGNED_INT32 = 4,
    NVTX_PAYLOAD_TYPE_INT32 = 5,
    NVTX_PAYLOAD_TYPE_FLOAT = 6
} nvtxPayloadType_t;
# 457 "/usr/local/cuda/targets/x86_64-linux/include/nvtx3/nvToolsExt.h"
typedef struct nvtxEventAttributes_v2
{







    uint16_t version;







    uint16_t size;
# 487 "/usr/local/cuda/targets/x86_64-linux/include/nvtx3/nvToolsExt.h"
    uint32_t category;
# 496 "/usr/local/cuda/targets/x86_64-linux/include/nvtx3/nvToolsExt.h"
    int32_t colorType;





    uint32_t color;
# 512 "/usr/local/cuda/targets/x86_64-linux/include/nvtx3/nvToolsExt.h"
    int32_t payloadType;

    int32_t reserved0;







    union payload_t
    {
        uint64_t ullValue;
        int64_t llValue;
        double dValue;

        uint32_t uiValue;
        int32_t iValue;
        float fValue;
    } payload;
# 540 "/usr/local/cuda/targets/x86_64-linux/include/nvtx3/nvToolsExt.h"
    int32_t messageType;





    nvtxMessageValue_t message;

} nvtxEventAttributes_v2;

typedef struct nvtxEventAttributes_v2 nvtxEventAttributes_t;
# 583 "/usr/local/cuda/targets/x86_64-linux/include/nvtx3/nvToolsExt.h"
inline static void nvtxDomainMarkEx(nvtxDomainHandle_t domain, const nvtxEventAttributes_t* eventAttrib);
# 619 "/usr/local/cuda/targets/x86_64-linux/include/nvtx3/nvToolsExt.h"
inline static void nvtxMarkEx(const nvtxEventAttributes_t* eventAttrib);
# 642 "/usr/local/cuda/targets/x86_64-linux/include/nvtx3/nvToolsExt.h"
inline static void nvtxMarkA(const char* message);
inline static void nvtxMarkW(const wchar_t* message);
# 678 "/usr/local/cuda/targets/x86_64-linux/include/nvtx3/nvToolsExt.h"
inline static nvtxRangeId_t nvtxDomainRangeStartEx(nvtxDomainHandle_t domain, const nvtxEventAttributes_t* eventAttrib);
# 712 "/usr/local/cuda/targets/x86_64-linux/include/nvtx3/nvToolsExt.h"
inline static nvtxRangeId_t nvtxRangeStartEx(const nvtxEventAttributes_t* eventAttrib);
# 739 "/usr/local/cuda/targets/x86_64-linux/include/nvtx3/nvToolsExt.h"
inline static nvtxRangeId_t nvtxRangeStartA(const char* message);
inline static nvtxRangeId_t nvtxRangeStartW(const wchar_t* message);
# 770 "/usr/local/cuda/targets/x86_64-linux/include/nvtx3/nvToolsExt.h"
inline static void nvtxDomainRangeEnd(nvtxDomainHandle_t domain, nvtxRangeId_t id);
# 786 "/usr/local/cuda/targets/x86_64-linux/include/nvtx3/nvToolsExt.h"
inline static void nvtxRangeEnd(nvtxRangeId_t id);
# 827 "/usr/local/cuda/targets/x86_64-linux/include/nvtx3/nvToolsExt.h"
inline static int nvtxDomainRangePushEx(nvtxDomainHandle_t domain, const nvtxEventAttributes_t* eventAttrib);
# 865 "/usr/local/cuda/targets/x86_64-linux/include/nvtx3/nvToolsExt.h"
inline static int nvtxRangePushEx(const nvtxEventAttributes_t* eventAttrib);
# 890 "/usr/local/cuda/targets/x86_64-linux/include/nvtx3/nvToolsExt.h"
inline static int nvtxRangePushA(const char* message);
inline static int nvtxRangePushW(const wchar_t* message);
# 917 "/usr/local/cuda/targets/x86_64-linux/include/nvtx3/nvToolsExt.h"
inline static int nvtxDomainRangePop(nvtxDomainHandle_t domain);
# 941 "/usr/local/cuda/targets/x86_64-linux/include/nvtx3/nvToolsExt.h"
inline static int nvtxRangePop(void);
# 978 "/usr/local/cuda/targets/x86_64-linux/include/nvtx3/nvToolsExt.h"
typedef enum nvtxResourceGenericType_t
{
    NVTX_RESOURCE_TYPE_UNKNOWN = 0,
    NVTX_RESOURCE_TYPE_GENERIC_POINTER = ((((uint32_t)(1))<<16)|((uint32_t)(1))),
    NVTX_RESOURCE_TYPE_GENERIC_HANDLE = ((((uint32_t)(1))<<16)|((uint32_t)(2))),
    NVTX_RESOURCE_TYPE_GENERIC_THREAD_NATIVE = ((((uint32_t)(1))<<16)|((uint32_t)(3))),
    NVTX_RESOURCE_TYPE_GENERIC_THREAD_POSIX = ((((uint32_t)(1))<<16)|((uint32_t)(4)))
} nvtxResourceGenericType_t;
# 1064 "/usr/local/cuda/targets/x86_64-linux/include/nvtx3/nvToolsExt.h"
typedef struct nvtxResourceAttributes_v0
{







    uint16_t version;







    uint16_t size;
# 1091 "/usr/local/cuda/targets/x86_64-linux/include/nvtx3/nvToolsExt.h"
    int32_t identifierType;
# 1100 "/usr/local/cuda/targets/x86_64-linux/include/nvtx3/nvToolsExt.h"
    union identifier_t
    {
        const void* pValue;
        uint64_t ullValue;
    } identifier;
# 1113 "/usr/local/cuda/targets/x86_64-linux/include/nvtx3/nvToolsExt.h"
    int32_t messageType;





    nvtxMessageValue_t message;

} nvtxResourceAttributes_v0;

typedef struct nvtxResourceAttributes_v0 nvtxResourceAttributes_t;





typedef struct nvtxResourceHandle* nvtxResourceHandle_t;
# 1164 "/usr/local/cuda/targets/x86_64-linux/include/nvtx3/nvToolsExt.h"
inline static nvtxResourceHandle_t nvtxDomainResourceCreate(nvtxDomainHandle_t domain, nvtxResourceAttributes_t* attribs);
# 1193 "/usr/local/cuda/targets/x86_64-linux/include/nvtx3/nvToolsExt.h"
inline static void nvtxDomainResourceDestroy(nvtxResourceHandle_t resource);
# 1227 "/usr/local/cuda/targets/x86_64-linux/include/nvtx3/nvToolsExt.h"
inline static void nvtxDomainNameCategoryA(nvtxDomainHandle_t domain, uint32_t category, const char* name);
inline static void nvtxDomainNameCategoryW(nvtxDomainHandle_t domain, uint32_t category, const wchar_t* name);
# 1252 "/usr/local/cuda/targets/x86_64-linux/include/nvtx3/nvToolsExt.h"
inline static void nvtxNameCategoryA(uint32_t category, const char* name);
inline static void nvtxNameCategoryW(uint32_t category, const wchar_t* name);
# 1319 "/usr/local/cuda/targets/x86_64-linux/include/nvtx3/nvToolsExt.h"
inline static void nvtxNameOsThreadA(uint32_t threadId, const char* name);
inline static void nvtxNameOsThreadW(uint32_t threadId, const wchar_t* name);
# 1368 "/usr/local/cuda/targets/x86_64-linux/include/nvtx3/nvToolsExt.h"
inline static nvtxStringHandle_t nvtxDomainRegisterStringA(nvtxDomainHandle_t domain, const char* string);
inline static nvtxStringHandle_t nvtxDomainRegisterStringW(nvtxDomainHandle_t domain, const wchar_t* string);
# 1430 "/usr/local/cuda/targets/x86_64-linux/include/nvtx3/nvToolsExt.h"
inline static nvtxDomainHandle_t nvtxDomainCreateA(const char* name);
inline static nvtxDomainHandle_t nvtxDomainCreateW(const wchar_t* name);
# 1453 "/usr/local/cuda/targets/x86_64-linux/include/nvtx3/nvToolsExt.h"
inline static void nvtxDomainDestroy(nvtxDomainHandle_t domain);
# 1486 "/usr/local/cuda/targets/x86_64-linux/include/nvtx3/nvToolsExt.h"
}




# 1 "/usr/local/cuda/targets/x86_64-linux/include/nvtx3/nvtxDetail/nvtxTypes.h" 1
# 54 "/usr/local/cuda/targets/x86_64-linux/include/nvtx3/nvtxDetail/nvtxTypes.h"
typedef int nvtx_CUdevice;
typedef void* nvtx_CUcontext;
typedef void* nvtx_CUstream;
typedef void* nvtx_CUevent;

typedef void* nvtx_cudaStream_t;
typedef void* nvtx_cudaEvent_t;

typedef void* nvtx_cl_platform_id;
typedef void* nvtx_cl_device_id;
typedef void* nvtx_cl_context;
typedef void* nvtx_cl_command_queue;
typedef void* nvtx_cl_mem;
typedef void* nvtx_cl_program;
typedef void* nvtx_cl_kernel;
typedef void* nvtx_cl_event;
typedef void* nvtx_cl_sampler;

typedef struct nvtxSyncUser* nvtxSyncUser_t;
struct nvtxSyncUserAttributes_v0;
typedef struct nvtxSyncUserAttributes_v0 nvtxSyncUserAttributes_t;



typedef void ( * nvtxMarkEx_impl_fntype)(const nvtxEventAttributes_t* eventAttrib);
typedef void ( * nvtxMarkA_impl_fntype)(const char* message);
typedef void ( * nvtxMarkW_impl_fntype)(const wchar_t* message);
typedef nvtxRangeId_t ( * nvtxRangeStartEx_impl_fntype)(const nvtxEventAttributes_t* eventAttrib);
typedef nvtxRangeId_t ( * nvtxRangeStartA_impl_fntype)(const char* message);
typedef nvtxRangeId_t ( * nvtxRangeStartW_impl_fntype)(const wchar_t* message);
typedef void ( * nvtxRangeEnd_impl_fntype)(nvtxRangeId_t id);
typedef int ( * nvtxRangePushEx_impl_fntype)(const nvtxEventAttributes_t* eventAttrib);
typedef int ( * nvtxRangePushA_impl_fntype)(const char* message);
typedef int ( * nvtxRangePushW_impl_fntype)(const wchar_t* message);
typedef int ( * nvtxRangePop_impl_fntype)(void);
typedef void ( * nvtxNameCategoryA_impl_fntype)(uint32_t category, const char* name);
typedef void ( * nvtxNameCategoryW_impl_fntype)(uint32_t category, const wchar_t* name);
typedef void ( * nvtxNameOsThreadA_impl_fntype)(uint32_t threadId, const char* name);
typedef void ( * nvtxNameOsThreadW_impl_fntype)(uint32_t threadId, const wchar_t* name);


typedef void ( * nvtxNameCuDeviceA_fakeimpl_fntype)(nvtx_CUdevice device, const char* name);
typedef void ( * nvtxNameCuDeviceW_fakeimpl_fntype)(nvtx_CUdevice device, const wchar_t* name);
typedef void ( * nvtxNameCuContextA_fakeimpl_fntype)(nvtx_CUcontext context, const char* name);
typedef void ( * nvtxNameCuContextW_fakeimpl_fntype)(nvtx_CUcontext context, const wchar_t* name);
typedef void ( * nvtxNameCuStreamA_fakeimpl_fntype)(nvtx_CUstream stream, const char* name);
typedef void ( * nvtxNameCuStreamW_fakeimpl_fntype)(nvtx_CUstream stream, const wchar_t* name);
typedef void ( * nvtxNameCuEventA_fakeimpl_fntype)(nvtx_CUevent event, const char* name);
typedef void ( * nvtxNameCuEventW_fakeimpl_fntype)(nvtx_CUevent event, const wchar_t* name);


typedef void ( * nvtxNameClDeviceA_fakeimpl_fntype)(nvtx_cl_device_id device, const char* name);
typedef void ( * nvtxNameClDeviceW_fakeimpl_fntype)(nvtx_cl_device_id device, const wchar_t* name);
typedef void ( * nvtxNameClContextA_fakeimpl_fntype)(nvtx_cl_context context, const char* name);
typedef void ( * nvtxNameClContextW_fakeimpl_fntype)(nvtx_cl_context context, const wchar_t* name);
typedef void ( * nvtxNameClCommandQueueA_fakeimpl_fntype)(nvtx_cl_command_queue command_queue, const char* name);
typedef void ( * nvtxNameClCommandQueueW_fakeimpl_fntype)(nvtx_cl_command_queue command_queue, const wchar_t* name);
typedef void ( * nvtxNameClMemObjectA_fakeimpl_fntype)(nvtx_cl_mem memobj, const char* name);
typedef void ( * nvtxNameClMemObjectW_fakeimpl_fntype)(nvtx_cl_mem memobj, const wchar_t* name);
typedef void ( * nvtxNameClSamplerA_fakeimpl_fntype)(nvtx_cl_sampler sampler, const char* name);
typedef void ( * nvtxNameClSamplerW_fakeimpl_fntype)(nvtx_cl_sampler sampler, const wchar_t* name);
typedef void ( * nvtxNameClProgramA_fakeimpl_fntype)(nvtx_cl_program program, const char* name);
typedef void ( * nvtxNameClProgramW_fakeimpl_fntype)(nvtx_cl_program program, const wchar_t* name);
typedef void ( * nvtxNameClEventA_fakeimpl_fntype)(nvtx_cl_event evnt, const char* name);
typedef void ( * nvtxNameClEventW_fakeimpl_fntype)(nvtx_cl_event evnt, const wchar_t* name);


typedef void ( * nvtxNameCudaDeviceA_impl_fntype)(int device, const char* name);
typedef void ( * nvtxNameCudaDeviceW_impl_fntype)(int device, const wchar_t* name);
typedef void ( * nvtxNameCudaStreamA_fakeimpl_fntype)(nvtx_cudaStream_t stream, const char* name);
typedef void ( * nvtxNameCudaStreamW_fakeimpl_fntype)(nvtx_cudaStream_t stream, const wchar_t* name);
typedef void ( * nvtxNameCudaEventA_fakeimpl_fntype)(nvtx_cudaEvent_t event, const char* name);
typedef void ( * nvtxNameCudaEventW_fakeimpl_fntype)(nvtx_cudaEvent_t event, const wchar_t* name);

typedef void ( * nvtxDomainMarkEx_impl_fntype)(nvtxDomainHandle_t domain, const nvtxEventAttributes_t* eventAttrib);
typedef nvtxRangeId_t ( * nvtxDomainRangeStartEx_impl_fntype)(nvtxDomainHandle_t domain, const nvtxEventAttributes_t* eventAttrib);
typedef void ( * nvtxDomainRangeEnd_impl_fntype)(nvtxDomainHandle_t domain, nvtxRangeId_t id);
typedef int ( * nvtxDomainRangePushEx_impl_fntype)(nvtxDomainHandle_t domain, const nvtxEventAttributes_t* eventAttrib);
typedef int ( * nvtxDomainRangePop_impl_fntype)(nvtxDomainHandle_t domain);
typedef nvtxResourceHandle_t ( * nvtxDomainResourceCreate_impl_fntype)(nvtxDomainHandle_t domain, nvtxResourceAttributes_t* attribs);
typedef void ( * nvtxDomainResourceDestroy_impl_fntype)(nvtxResourceHandle_t resource);
typedef void ( * nvtxDomainNameCategoryA_impl_fntype)(nvtxDomainHandle_t domain, uint32_t category, const char* name);
typedef void ( * nvtxDomainNameCategoryW_impl_fntype)(nvtxDomainHandle_t domain, uint32_t category, const wchar_t* name);
typedef nvtxStringHandle_t ( * nvtxDomainRegisterStringA_impl_fntype)(nvtxDomainHandle_t domain, const char* string);
typedef nvtxStringHandle_t ( * nvtxDomainRegisterStringW_impl_fntype)(nvtxDomainHandle_t domain, const wchar_t* string);
typedef nvtxDomainHandle_t ( * nvtxDomainCreateA_impl_fntype)(const char* message);
typedef nvtxDomainHandle_t ( * nvtxDomainCreateW_impl_fntype)(const wchar_t* message);
typedef void ( * nvtxDomainDestroy_impl_fntype)(nvtxDomainHandle_t domain);
typedef void ( * nvtxInitialize_impl_fntype)(const void* reserved);

typedef nvtxSyncUser_t ( * nvtxDomainSyncUserCreate_impl_fntype)(nvtxDomainHandle_t domain, const nvtxSyncUserAttributes_t* attribs);
typedef void ( * nvtxDomainSyncUserDestroy_impl_fntype)(nvtxSyncUser_t handle);
typedef void ( * nvtxDomainSyncUserAcquireStart_impl_fntype)(nvtxSyncUser_t handle);
typedef void ( * nvtxDomainSyncUserAcquireFailed_impl_fntype)(nvtxSyncUser_t handle);
typedef void ( * nvtxDomainSyncUserAcquireSuccess_impl_fntype)(nvtxSyncUser_t handle);
typedef void ( * nvtxDomainSyncUserReleasing_impl_fntype)(nvtxSyncUser_t handle);



typedef const void *( * NvtxGetExportTableFunc_t)(uint32_t exportTableId);
typedef int ( * NvtxInitializeInjectionNvtxFunc_t)(NvtxGetExportTableFunc_t exportTable);

typedef enum NvtxCallbackModule
{
    NVTX_CB_MODULE_INVALID = 0,
    NVTX_CB_MODULE_CORE = 1,
    NVTX_CB_MODULE_CUDA = 2,
    NVTX_CB_MODULE_OPENCL = 3,
    NVTX_CB_MODULE_CUDART = 4,
    NVTX_CB_MODULE_CORE2 = 5,
    NVTX_CB_MODULE_SYNC = 6,

    NVTX_CB_MODULE_SIZE,
    NVTX_CB_MODULE_FORCE_INT = 0x7fffffff
} NvtxCallbackModule;

typedef enum NvtxCallbackIdCore
{
    NVTX_CBID_CORE_INVALID = 0,
    NVTX_CBID_CORE_MarkEx = 1,
    NVTX_CBID_CORE_MarkA = 2,
    NVTX_CBID_CORE_MarkW = 3,
    NVTX_CBID_CORE_RangeStartEx = 4,
    NVTX_CBID_CORE_RangeStartA = 5,
    NVTX_CBID_CORE_RangeStartW = 6,
    NVTX_CBID_CORE_RangeEnd = 7,
    NVTX_CBID_CORE_RangePushEx = 8,
    NVTX_CBID_CORE_RangePushA = 9,
    NVTX_CBID_CORE_RangePushW = 10,
    NVTX_CBID_CORE_RangePop = 11,
    NVTX_CBID_CORE_NameCategoryA = 12,
    NVTX_CBID_CORE_NameCategoryW = 13,
    NVTX_CBID_CORE_NameOsThreadA = 14,
    NVTX_CBID_CORE_NameOsThreadW = 15,

    NVTX_CBID_CORE_SIZE,
    NVTX_CBID_CORE_FORCE_INT = 0x7fffffff
} NvtxCallbackIdCore;

typedef enum NvtxCallbackIdCore2
{
    NVTX_CBID_CORE2_INVALID = 0,
    NVTX_CBID_CORE2_DomainMarkEx = 1,
    NVTX_CBID_CORE2_DomainRangeStartEx = 2,
    NVTX_CBID_CORE2_DomainRangeEnd = 3,
    NVTX_CBID_CORE2_DomainRangePushEx = 4,
    NVTX_CBID_CORE2_DomainRangePop = 5,
    NVTX_CBID_CORE2_DomainResourceCreate = 6,
    NVTX_CBID_CORE2_DomainResourceDestroy = 7,
    NVTX_CBID_CORE2_DomainNameCategoryA = 8,
    NVTX_CBID_CORE2_DomainNameCategoryW = 9,
    NVTX_CBID_CORE2_DomainRegisterStringA = 10,
    NVTX_CBID_CORE2_DomainRegisterStringW = 11,
    NVTX_CBID_CORE2_DomainCreateA = 12,
    NVTX_CBID_CORE2_DomainCreateW = 13,
    NVTX_CBID_CORE2_DomainDestroy = 14,
    NVTX_CBID_CORE2_Initialize = 15,

    NVTX_CBID_CORE2_SIZE,
    NVTX_CBID_CORE2_FORCE_INT = 0x7fffffff
} NvtxCallbackIdCore2;

typedef enum NvtxCallbackIdCuda
{
    NVTX_CBID_CUDA_INVALID = 0,
    NVTX_CBID_CUDA_NameCuDeviceA = 1,
    NVTX_CBID_CUDA_NameCuDeviceW = 2,
    NVTX_CBID_CUDA_NameCuContextA = 3,
    NVTX_CBID_CUDA_NameCuContextW = 4,
    NVTX_CBID_CUDA_NameCuStreamA = 5,
    NVTX_CBID_CUDA_NameCuStreamW = 6,
    NVTX_CBID_CUDA_NameCuEventA = 7,
    NVTX_CBID_CUDA_NameCuEventW = 8,

    NVTX_CBID_CUDA_SIZE,
    NVTX_CBID_CUDA_FORCE_INT = 0x7fffffff
} NvtxCallbackIdCuda;

typedef enum NvtxCallbackIdCudaRt
{
    NVTX_CBID_CUDART_INVALID = 0,
    NVTX_CBID_CUDART_NameCudaDeviceA = 1,
    NVTX_CBID_CUDART_NameCudaDeviceW = 2,
    NVTX_CBID_CUDART_NameCudaStreamA = 3,
    NVTX_CBID_CUDART_NameCudaStreamW = 4,
    NVTX_CBID_CUDART_NameCudaEventA = 5,
    NVTX_CBID_CUDART_NameCudaEventW = 6,

    NVTX_CBID_CUDART_SIZE,
    NVTX_CBID_CUDART_FORCE_INT = 0x7fffffff
} NvtxCallbackIdCudaRt;

typedef enum NvtxCallbackIdOpenCL
{
    NVTX_CBID_OPENCL_INVALID = 0,
    NVTX_CBID_OPENCL_NameClDeviceA = 1,
    NVTX_CBID_OPENCL_NameClDeviceW = 2,
    NVTX_CBID_OPENCL_NameClContextA = 3,
    NVTX_CBID_OPENCL_NameClContextW = 4,
    NVTX_CBID_OPENCL_NameClCommandQueueA = 5,
    NVTX_CBID_OPENCL_NameClCommandQueueW = 6,
    NVTX_CBID_OPENCL_NameClMemObjectA = 7,
    NVTX_CBID_OPENCL_NameClMemObjectW = 8,
    NVTX_CBID_OPENCL_NameClSamplerA = 9,
    NVTX_CBID_OPENCL_NameClSamplerW = 10,
    NVTX_CBID_OPENCL_NameClProgramA = 11,
    NVTX_CBID_OPENCL_NameClProgramW = 12,
    NVTX_CBID_OPENCL_NameClEventA = 13,
    NVTX_CBID_OPENCL_NameClEventW = 14,

    NVTX_CBID_OPENCL_SIZE,
    NVTX_CBID_OPENCL_FORCE_INT = 0x7fffffff
} NvtxCallbackIdOpenCL;

typedef enum NvtxCallbackIdSync
{
    NVTX_CBID_SYNC_INVALID = 0,
    NVTX_CBID_SYNC_DomainSyncUserCreate = 1,
    NVTX_CBID_SYNC_DomainSyncUserDestroy = 2,
    NVTX_CBID_SYNC_DomainSyncUserAcquireStart = 3,
    NVTX_CBID_SYNC_DomainSyncUserAcquireFailed = 4,
    NVTX_CBID_SYNC_DomainSyncUserAcquireSuccess = 5,
    NVTX_CBID_SYNC_DomainSyncUserReleasing = 6,

    NVTX_CBID_SYNC_SIZE,
    NVTX_CBID_SYNC_FORCE_INT = 0x7fffffff
} NvtxCallbackIdSync;


typedef enum NvtxExportTableID
{
    NVTX_ETID_INVALID = 0,
    NVTX_ETID_CALLBACKS = 1,
    NVTX_ETID_RESERVED0 = 2,
    NVTX_ETID_VERSIONINFO = 3,

    NVTX_ETID_SIZE,
    NVTX_ETID_FORCE_INT = 0x7fffffff
} NvtxExportTableID;

typedef void (* NvtxFunctionPointer)(void);
typedef NvtxFunctionPointer** NvtxFunctionTable;

typedef struct NvtxExportTableCallbacks
{
    size_t struct_size;


    int ( *GetModuleFunctionTable)(
        NvtxCallbackModule module,
        NvtxFunctionTable* out_table,
        unsigned int* out_size);
} NvtxExportTableCallbacks;

typedef struct NvtxExportTableVersionInfo
{

    size_t struct_size;



    uint32_t version;


    uint32_t reserved0;





    void ( *SetInjectionNvtxVersion)(
        uint32_t version);
} NvtxExportTableVersionInfo;
# 1492 "/usr/local/cuda/targets/x86_64-linux/include/nvtx3/nvToolsExt.h" 2


# 1 "/usr/local/cuda/targets/x86_64-linux/include/nvtx3/nvtxDetail/nvtxImpl.h" 1
# 51 "/usr/local/cuda/targets/x86_64-linux/include/nvtx3/nvtxDetail/nvtxImpl.h"
# 1 "/usr/include/unistd.h" 1 3 4
# 27 "/usr/include/unistd.h" 3 4

# 27 "/usr/include/unistd.h" 3 4
extern "C" {
# 205 "/usr/include/unistd.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/posix_opt.h" 1 3 4
# 206 "/usr/include/unistd.h" 2 3 4



# 1 "/usr/include/x86_64-linux-gnu/bits/environments.h" 1 3 4
# 22 "/usr/include/x86_64-linux-gnu/bits/environments.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/wordsize.h" 1 3 4
# 23 "/usr/include/x86_64-linux-gnu/bits/environments.h" 2 3 4
# 210 "/usr/include/unistd.h" 2 3 4
# 220 "/usr/include/unistd.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/types.h" 1 3 4
# 27 "/usr/include/x86_64-linux-gnu/bits/types.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/wordsize.h" 1 3 4
# 28 "/usr/include/x86_64-linux-gnu/bits/types.h" 2 3 4


typedef unsigned char __u_char;
typedef unsigned short int __u_short;
typedef unsigned int __u_int;
typedef unsigned long int __u_long;


typedef signed char __int8_t;
typedef unsigned char __uint8_t;
typedef signed short int __int16_t;
typedef unsigned short int __uint16_t;
typedef signed int __int32_t;
typedef unsigned int __uint32_t;

typedef signed long int __int64_t;
typedef unsigned long int __uint64_t;







typedef long int __quad_t;
typedef unsigned long int __u_quad_t;
# 121 "/usr/include/x86_64-linux-gnu/bits/types.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/typesizes.h" 1 3 4
# 122 "/usr/include/x86_64-linux-gnu/bits/types.h" 2 3 4


typedef unsigned long int __dev_t;
typedef unsigned int __uid_t;
typedef unsigned int __gid_t;
typedef unsigned long int __ino_t;
typedef unsigned long int __ino64_t;
typedef unsigned int __mode_t;
typedef unsigned long int __nlink_t;
typedef long int __off_t;
typedef long int __off64_t;
typedef int __pid_t;
typedef struct { int __val[2]; } __fsid_t;
typedef long int __clock_t;
typedef unsigned long int __rlim_t;
typedef unsigned long int __rlim64_t;
typedef unsigned int __id_t;
typedef long int __time_t;
typedef unsigned int __useconds_t;
typedef long int __suseconds_t;

typedef int __daddr_t;
typedef int __key_t;


typedef int __clockid_t;


typedef void * __timer_t;


typedef long int __blksize_t;




typedef long int __blkcnt_t;
typedef long int __blkcnt64_t;


typedef unsigned long int __fsblkcnt_t;
typedef unsigned long int __fsblkcnt64_t;


typedef unsigned long int __fsfilcnt_t;
typedef unsigned long int __fsfilcnt64_t;


typedef long int __fsword_t;

typedef long int __ssize_t;


typedef long int __syscall_slong_t;

typedef unsigned long int __syscall_ulong_t;



typedef __off64_t __loff_t;
typedef __quad_t *__qaddr_t;
typedef char *__caddr_t;


typedef long int __intptr_t;


typedef unsigned int __socklen_t;
# 221 "/usr/include/unistd.h" 2 3 4


typedef __ssize_t ssize_t;





# 1 "/usr/lib/gcc/x86_64-linux-gnu/5/include/stddef.h" 1 3 4
# 230 "/usr/include/unistd.h" 2 3 4





typedef __gid_t gid_t;




typedef __uid_t uid_t;





typedef __off_t off_t;






typedef __off64_t off64_t;




typedef __useconds_t useconds_t;




typedef __pid_t pid_t;
# 277 "/usr/include/unistd.h" 3 4
typedef __socklen_t socklen_t;
# 290 "/usr/include/unistd.h" 3 4
extern int access (const char *__name, int __type) throw () __attribute__ ((__nonnull__ (1)));




extern int euidaccess (const char *__name, int __type)
     throw () __attribute__ ((__nonnull__ (1)));


extern int eaccess (const char *__name, int __type)
     throw () __attribute__ ((__nonnull__ (1)));






extern int faccessat (int __fd, const char *__file, int __type, int __flag)
     throw () __attribute__ ((__nonnull__ (2))) __attribute__ ((__warn_unused_result__));
# 337 "/usr/include/unistd.h" 3 4
extern __off_t lseek (int __fd, __off_t __offset, int __whence) throw ();
# 348 "/usr/include/unistd.h" 3 4
extern __off64_t lseek64 (int __fd, __off64_t __offset, int __whence)
     throw ();






extern int close (int __fd);






extern ssize_t read (int __fd, void *__buf, size_t __nbytes) __attribute__ ((__warn_unused_result__));





extern ssize_t write (int __fd, const void *__buf, size_t __n) __attribute__ ((__warn_unused_result__));
# 379 "/usr/include/unistd.h" 3 4
extern ssize_t pread (int __fd, void *__buf, size_t __nbytes,
        __off_t __offset) __attribute__ ((__warn_unused_result__));






extern ssize_t pwrite (int __fd, const void *__buf, size_t __n,
         __off_t __offset) __attribute__ ((__warn_unused_result__));
# 407 "/usr/include/unistd.h" 3 4
extern ssize_t pread64 (int __fd, void *__buf, size_t __nbytes,
   __off64_t __offset) __attribute__ ((__warn_unused_result__));


extern ssize_t pwrite64 (int __fd, const void *__buf, size_t __n,
    __off64_t __offset) __attribute__ ((__warn_unused_result__));







extern int pipe (int __pipedes[2]) throw () __attribute__ ((__warn_unused_result__));




extern int pipe2 (int __pipedes[2], int __flags) throw () __attribute__ ((__warn_unused_result__));
# 435 "/usr/include/unistd.h" 3 4
extern unsigned int alarm (unsigned int __seconds) throw ();
# 447 "/usr/include/unistd.h" 3 4
extern unsigned int sleep (unsigned int __seconds);







extern __useconds_t ualarm (__useconds_t __value, __useconds_t __interval)
     throw ();






extern int usleep (__useconds_t __useconds);
# 472 "/usr/include/unistd.h" 3 4
extern int pause (void);



extern int chown (const char *__file, __uid_t __owner, __gid_t __group)
     throw () __attribute__ ((__nonnull__ (1))) __attribute__ ((__warn_unused_result__));



extern int fchown (int __fd, __uid_t __owner, __gid_t __group) throw () __attribute__ ((__warn_unused_result__));




extern int lchown (const char *__file, __uid_t __owner, __gid_t __group)
     throw () __attribute__ ((__nonnull__ (1))) __attribute__ ((__warn_unused_result__));






extern int fchownat (int __fd, const char *__file, __uid_t __owner,
       __gid_t __group, int __flag)
     throw () __attribute__ ((__nonnull__ (2))) __attribute__ ((__warn_unused_result__));



extern int chdir (const char *__path) throw () __attribute__ ((__nonnull__ (1))) __attribute__ ((__warn_unused_result__));



extern int fchdir (int __fd) throw () __attribute__ ((__warn_unused_result__));
# 514 "/usr/include/unistd.h" 3 4
extern char *getcwd (char *__buf, size_t __size) throw () __attribute__ ((__warn_unused_result__));





extern char *get_current_dir_name (void) throw ();







extern char *getwd (char *__buf)
     throw () __attribute__ ((__nonnull__ (1))) __attribute__ ((__deprecated__)) __attribute__ ((__warn_unused_result__));




extern int dup (int __fd) throw () __attribute__ ((__warn_unused_result__));


extern int dup2 (int __fd, int __fd2) throw ();




extern int dup3 (int __fd, int __fd2, int __flags) throw ();



extern char **__environ;

extern char **environ;





extern int execve (const char *__path, char *const __argv[],
     char *const __envp[]) throw () __attribute__ ((__nonnull__ (1, 2)));




extern int fexecve (int __fd, char *const __argv[], char *const __envp[])
     throw () __attribute__ ((__nonnull__ (2)));




extern int execv (const char *__path, char *const __argv[])
     throw () __attribute__ ((__nonnull__ (1, 2)));



extern int execle (const char *__path, const char *__arg, ...)
     throw () __attribute__ ((__nonnull__ (1, 2)));



extern int execl (const char *__path, const char *__arg, ...)
     throw () __attribute__ ((__nonnull__ (1, 2)));



extern int execvp (const char *__file, char *const __argv[])
     throw () __attribute__ ((__nonnull__ (1, 2)));




extern int execlp (const char *__file, const char *__arg, ...)
     throw () __attribute__ ((__nonnull__ (1, 2)));




extern int execvpe (const char *__file, char *const __argv[],
      char *const __envp[])
     throw () __attribute__ ((__nonnull__ (1, 2)));





extern int nice (int __inc) throw () __attribute__ ((__warn_unused_result__));




extern void _exit (int __status) __attribute__ ((__noreturn__));





# 1 "/usr/include/x86_64-linux-gnu/bits/confname.h" 1 3 4
# 24 "/usr/include/x86_64-linux-gnu/bits/confname.h" 3 4
enum
  {
    _PC_LINK_MAX,

    _PC_MAX_CANON,

    _PC_MAX_INPUT,

    _PC_NAME_MAX,

    _PC_PATH_MAX,

    _PC_PIPE_BUF,

    _PC_CHOWN_RESTRICTED,

    _PC_NO_TRUNC,

    _PC_VDISABLE,

    _PC_SYNC_IO,

    _PC_ASYNC_IO,

    _PC_PRIO_IO,

    _PC_SOCK_MAXBUF,

    _PC_FILESIZEBITS,

    _PC_REC_INCR_XFER_SIZE,

    _PC_REC_MAX_XFER_SIZE,

    _PC_REC_MIN_XFER_SIZE,

    _PC_REC_XFER_ALIGN,

    _PC_ALLOC_SIZE_MIN,

    _PC_SYMLINK_MAX,

    _PC_2_SYMLINKS

  };


enum
  {
    _SC_ARG_MAX,

    _SC_CHILD_MAX,

    _SC_CLK_TCK,

    _SC_NGROUPS_MAX,

    _SC_OPEN_MAX,

    _SC_STREAM_MAX,

    _SC_TZNAME_MAX,

    _SC_JOB_CONTROL,

    _SC_SAVED_IDS,

    _SC_REALTIME_SIGNALS,

    _SC_PRIORITY_SCHEDULING,

    _SC_TIMERS,

    _SC_ASYNCHRONOUS_IO,

    _SC_PRIORITIZED_IO,

    _SC_SYNCHRONIZED_IO,

    _SC_FSYNC,

    _SC_MAPPED_FILES,

    _SC_MEMLOCK,

    _SC_MEMLOCK_RANGE,

    _SC_MEMORY_PROTECTION,

    _SC_MESSAGE_PASSING,

    _SC_SEMAPHORES,

    _SC_SHARED_MEMORY_OBJECTS,

    _SC_AIO_LISTIO_MAX,

    _SC_AIO_MAX,

    _SC_AIO_PRIO_DELTA_MAX,

    _SC_DELAYTIMER_MAX,

    _SC_MQ_OPEN_MAX,

    _SC_MQ_PRIO_MAX,

    _SC_VERSION,

    _SC_PAGESIZE,


    _SC_RTSIG_MAX,

    _SC_SEM_NSEMS_MAX,

    _SC_SEM_VALUE_MAX,

    _SC_SIGQUEUE_MAX,

    _SC_TIMER_MAX,




    _SC_BC_BASE_MAX,

    _SC_BC_DIM_MAX,

    _SC_BC_SCALE_MAX,

    _SC_BC_STRING_MAX,

    _SC_COLL_WEIGHTS_MAX,

    _SC_EQUIV_CLASS_MAX,

    _SC_EXPR_NEST_MAX,

    _SC_LINE_MAX,

    _SC_RE_DUP_MAX,

    _SC_CHARCLASS_NAME_MAX,


    _SC_2_VERSION,

    _SC_2_C_BIND,

    _SC_2_C_DEV,

    _SC_2_FORT_DEV,

    _SC_2_FORT_RUN,

    _SC_2_SW_DEV,

    _SC_2_LOCALEDEF,


    _SC_PII,

    _SC_PII_XTI,

    _SC_PII_SOCKET,

    _SC_PII_INTERNET,

    _SC_PII_OSI,

    _SC_POLL,

    _SC_SELECT,

    _SC_UIO_MAXIOV,

    _SC_IOV_MAX = _SC_UIO_MAXIOV,

    _SC_PII_INTERNET_STREAM,

    _SC_PII_INTERNET_DGRAM,

    _SC_PII_OSI_COTS,

    _SC_PII_OSI_CLTS,

    _SC_PII_OSI_M,

    _SC_T_IOV_MAX,



    _SC_THREADS,

    _SC_THREAD_SAFE_FUNCTIONS,

    _SC_GETGR_R_SIZE_MAX,

    _SC_GETPW_R_SIZE_MAX,

    _SC_LOGIN_NAME_MAX,

    _SC_TTY_NAME_MAX,

    _SC_THREAD_DESTRUCTOR_ITERATIONS,

    _SC_THREAD_KEYS_MAX,

    _SC_THREAD_STACK_MIN,

    _SC_THREAD_THREADS_MAX,

    _SC_THREAD_ATTR_STACKADDR,

    _SC_THREAD_ATTR_STACKSIZE,

    _SC_THREAD_PRIORITY_SCHEDULING,

    _SC_THREAD_PRIO_INHERIT,

    _SC_THREAD_PRIO_PROTECT,

    _SC_THREAD_PROCESS_SHARED,


    _SC_NPROCESSORS_CONF,

    _SC_NPROCESSORS_ONLN,

    _SC_PHYS_PAGES,

    _SC_AVPHYS_PAGES,

    _SC_ATEXIT_MAX,

    _SC_PASS_MAX,


    _SC_XOPEN_VERSION,

    _SC_XOPEN_XCU_VERSION,

    _SC_XOPEN_UNIX,

    _SC_XOPEN_CRYPT,

    _SC_XOPEN_ENH_I18N,

    _SC_XOPEN_SHM,


    _SC_2_CHAR_TERM,

    _SC_2_C_VERSION,

    _SC_2_UPE,


    _SC_XOPEN_XPG2,

    _SC_XOPEN_XPG3,

    _SC_XOPEN_XPG4,


    _SC_CHAR_BIT,

    _SC_CHAR_MAX,

    _SC_CHAR_MIN,

    _SC_INT_MAX,

    _SC_INT_MIN,

    _SC_LONG_BIT,

    _SC_WORD_BIT,

    _SC_MB_LEN_MAX,

    _SC_NZERO,

    _SC_SSIZE_MAX,

    _SC_SCHAR_MAX,

    _SC_SCHAR_MIN,

    _SC_SHRT_MAX,

    _SC_SHRT_MIN,

    _SC_UCHAR_MAX,

    _SC_UINT_MAX,

    _SC_ULONG_MAX,

    _SC_USHRT_MAX,


    _SC_NL_ARGMAX,

    _SC_NL_LANGMAX,

    _SC_NL_MSGMAX,

    _SC_NL_NMAX,

    _SC_NL_SETMAX,

    _SC_NL_TEXTMAX,


    _SC_XBS5_ILP32_OFF32,

    _SC_XBS5_ILP32_OFFBIG,

    _SC_XBS5_LP64_OFF64,

    _SC_XBS5_LPBIG_OFFBIG,


    _SC_XOPEN_LEGACY,

    _SC_XOPEN_REALTIME,

    _SC_XOPEN_REALTIME_THREADS,


    _SC_ADVISORY_INFO,

    _SC_BARRIERS,

    _SC_BASE,

    _SC_C_LANG_SUPPORT,

    _SC_C_LANG_SUPPORT_R,

    _SC_CLOCK_SELECTION,

    _SC_CPUTIME,

    _SC_THREAD_CPUTIME,

    _SC_DEVICE_IO,

    _SC_DEVICE_SPECIFIC,

    _SC_DEVICE_SPECIFIC_R,

    _SC_FD_MGMT,

    _SC_FIFO,

    _SC_PIPE,

    _SC_FILE_ATTRIBUTES,

    _SC_FILE_LOCKING,

    _SC_FILE_SYSTEM,

    _SC_MONOTONIC_CLOCK,

    _SC_MULTI_PROCESS,

    _SC_SINGLE_PROCESS,

    _SC_NETWORKING,

    _SC_READER_WRITER_LOCKS,

    _SC_SPIN_LOCKS,

    _SC_REGEXP,

    _SC_REGEX_VERSION,

    _SC_SHELL,

    _SC_SIGNALS,

    _SC_SPAWN,

    _SC_SPORADIC_SERVER,

    _SC_THREAD_SPORADIC_SERVER,

    _SC_SYSTEM_DATABASE,

    _SC_SYSTEM_DATABASE_R,

    _SC_TIMEOUTS,

    _SC_TYPED_MEMORY_OBJECTS,

    _SC_USER_GROUPS,

    _SC_USER_GROUPS_R,

    _SC_2_PBS,

    _SC_2_PBS_ACCOUNTING,

    _SC_2_PBS_LOCATE,

    _SC_2_PBS_MESSAGE,

    _SC_2_PBS_TRACK,

    _SC_SYMLOOP_MAX,

    _SC_STREAMS,

    _SC_2_PBS_CHECKPOINT,


    _SC_V6_ILP32_OFF32,

    _SC_V6_ILP32_OFFBIG,

    _SC_V6_LP64_OFF64,

    _SC_V6_LPBIG_OFFBIG,


    _SC_HOST_NAME_MAX,

    _SC_TRACE,

    _SC_TRACE_EVENT_FILTER,

    _SC_TRACE_INHERIT,

    _SC_TRACE_LOG,


    _SC_LEVEL1_ICACHE_SIZE,

    _SC_LEVEL1_ICACHE_ASSOC,

    _SC_LEVEL1_ICACHE_LINESIZE,

    _SC_LEVEL1_DCACHE_SIZE,

    _SC_LEVEL1_DCACHE_ASSOC,

    _SC_LEVEL1_DCACHE_LINESIZE,

    _SC_LEVEL2_CACHE_SIZE,

    _SC_LEVEL2_CACHE_ASSOC,

    _SC_LEVEL2_CACHE_LINESIZE,

    _SC_LEVEL3_CACHE_SIZE,

    _SC_LEVEL3_CACHE_ASSOC,

    _SC_LEVEL3_CACHE_LINESIZE,

    _SC_LEVEL4_CACHE_SIZE,

    _SC_LEVEL4_CACHE_ASSOC,

    _SC_LEVEL4_CACHE_LINESIZE,



    _SC_IPV6 = _SC_LEVEL1_ICACHE_SIZE + 50,

    _SC_RAW_SOCKETS,


    _SC_V7_ILP32_OFF32,

    _SC_V7_ILP32_OFFBIG,

    _SC_V7_LP64_OFF64,

    _SC_V7_LPBIG_OFFBIG,


    _SC_SS_REPL_MAX,


    _SC_TRACE_EVENT_NAME_MAX,

    _SC_TRACE_NAME_MAX,

    _SC_TRACE_SYS_MAX,

    _SC_TRACE_USER_EVENT_MAX,


    _SC_XOPEN_STREAMS,


    _SC_THREAD_ROBUST_PRIO_INHERIT,

    _SC_THREAD_ROBUST_PRIO_PROTECT

  };


enum
  {
    _CS_PATH,


    _CS_V6_WIDTH_RESTRICTED_ENVS,



    _CS_GNU_LIBC_VERSION,

    _CS_GNU_LIBPTHREAD_VERSION,


    _CS_V5_WIDTH_RESTRICTED_ENVS,



    _CS_V7_WIDTH_RESTRICTED_ENVS,



    _CS_LFS_CFLAGS = 1000,

    _CS_LFS_LDFLAGS,

    _CS_LFS_LIBS,

    _CS_LFS_LINTFLAGS,

    _CS_LFS64_CFLAGS,

    _CS_LFS64_LDFLAGS,

    _CS_LFS64_LIBS,

    _CS_LFS64_LINTFLAGS,


    _CS_XBS5_ILP32_OFF32_CFLAGS = 1100,

    _CS_XBS5_ILP32_OFF32_LDFLAGS,

    _CS_XBS5_ILP32_OFF32_LIBS,

    _CS_XBS5_ILP32_OFF32_LINTFLAGS,

    _CS_XBS5_ILP32_OFFBIG_CFLAGS,

    _CS_XBS5_ILP32_OFFBIG_LDFLAGS,

    _CS_XBS5_ILP32_OFFBIG_LIBS,

    _CS_XBS5_ILP32_OFFBIG_LINTFLAGS,

    _CS_XBS5_LP64_OFF64_CFLAGS,

    _CS_XBS5_LP64_OFF64_LDFLAGS,

    _CS_XBS5_LP64_OFF64_LIBS,

    _CS_XBS5_LP64_OFF64_LINTFLAGS,

    _CS_XBS5_LPBIG_OFFBIG_CFLAGS,

    _CS_XBS5_LPBIG_OFFBIG_LDFLAGS,

    _CS_XBS5_LPBIG_OFFBIG_LIBS,

    _CS_XBS5_LPBIG_OFFBIG_LINTFLAGS,


    _CS_POSIX_V6_ILP32_OFF32_CFLAGS,

    _CS_POSIX_V6_ILP32_OFF32_LDFLAGS,

    _CS_POSIX_V6_ILP32_OFF32_LIBS,

    _CS_POSIX_V6_ILP32_OFF32_LINTFLAGS,

    _CS_POSIX_V6_ILP32_OFFBIG_CFLAGS,

    _CS_POSIX_V6_ILP32_OFFBIG_LDFLAGS,

    _CS_POSIX_V6_ILP32_OFFBIG_LIBS,

    _CS_POSIX_V6_ILP32_OFFBIG_LINTFLAGS,

    _CS_POSIX_V6_LP64_OFF64_CFLAGS,

    _CS_POSIX_V6_LP64_OFF64_LDFLAGS,

    _CS_POSIX_V6_LP64_OFF64_LIBS,

    _CS_POSIX_V6_LP64_OFF64_LINTFLAGS,

    _CS_POSIX_V6_LPBIG_OFFBIG_CFLAGS,

    _CS_POSIX_V6_LPBIG_OFFBIG_LDFLAGS,

    _CS_POSIX_V6_LPBIG_OFFBIG_LIBS,

    _CS_POSIX_V6_LPBIG_OFFBIG_LINTFLAGS,


    _CS_POSIX_V7_ILP32_OFF32_CFLAGS,

    _CS_POSIX_V7_ILP32_OFF32_LDFLAGS,

    _CS_POSIX_V7_ILP32_OFF32_LIBS,

    _CS_POSIX_V7_ILP32_OFF32_LINTFLAGS,

    _CS_POSIX_V7_ILP32_OFFBIG_CFLAGS,

    _CS_POSIX_V7_ILP32_OFFBIG_LDFLAGS,

    _CS_POSIX_V7_ILP32_OFFBIG_LIBS,

    _CS_POSIX_V7_ILP32_OFFBIG_LINTFLAGS,

    _CS_POSIX_V7_LP64_OFF64_CFLAGS,

    _CS_POSIX_V7_LP64_OFF64_LDFLAGS,

    _CS_POSIX_V7_LP64_OFF64_LIBS,

    _CS_POSIX_V7_LP64_OFF64_LINTFLAGS,

    _CS_POSIX_V7_LPBIG_OFFBIG_CFLAGS,

    _CS_POSIX_V7_LPBIG_OFFBIG_LDFLAGS,

    _CS_POSIX_V7_LPBIG_OFFBIG_LIBS,

    _CS_POSIX_V7_LPBIG_OFFBIG_LINTFLAGS,


    _CS_V6_ENV,

    _CS_V7_ENV

  };
# 613 "/usr/include/unistd.h" 2 3 4


extern long int pathconf (const char *__path, int __name)
     throw () __attribute__ ((__nonnull__ (1)));


extern long int fpathconf (int __fd, int __name) throw ();


extern long int sysconf (int __name) throw ();



extern size_t confstr (int __name, char *__buf, size_t __len) throw ();




extern __pid_t getpid (void) throw ();


extern __pid_t getppid (void) throw ();


extern __pid_t getpgrp (void) throw ();


extern __pid_t __getpgid (__pid_t __pid) throw ();

extern __pid_t getpgid (__pid_t __pid) throw ();






extern int setpgid (__pid_t __pid, __pid_t __pgid) throw ();
# 663 "/usr/include/unistd.h" 3 4
extern int setpgrp (void) throw ();






extern __pid_t setsid (void) throw ();



extern __pid_t getsid (__pid_t __pid) throw ();



extern __uid_t getuid (void) throw ();


extern __uid_t geteuid (void) throw ();


extern __gid_t getgid (void) throw ();


extern __gid_t getegid (void) throw ();




extern int getgroups (int __size, __gid_t __list[]) throw () __attribute__ ((__warn_unused_result__));



extern int group_member (__gid_t __gid) throw ();






extern int setuid (__uid_t __uid) throw () __attribute__ ((__warn_unused_result__));




extern int setreuid (__uid_t __ruid, __uid_t __euid) throw () __attribute__ ((__warn_unused_result__));




extern int seteuid (__uid_t __uid) throw () __attribute__ ((__warn_unused_result__));






extern int setgid (__gid_t __gid) throw () __attribute__ ((__warn_unused_result__));




extern int setregid (__gid_t __rgid, __gid_t __egid) throw () __attribute__ ((__warn_unused_result__));




extern int setegid (__gid_t __gid) throw () __attribute__ ((__warn_unused_result__));





extern int getresuid (__uid_t *__ruid, __uid_t *__euid, __uid_t *__suid)
     throw ();



extern int getresgid (__gid_t *__rgid, __gid_t *__egid, __gid_t *__sgid)
     throw ();



extern int setresuid (__uid_t __ruid, __uid_t __euid, __uid_t __suid)
     throw () __attribute__ ((__warn_unused_result__));



extern int setresgid (__gid_t __rgid, __gid_t __egid, __gid_t __sgid)
     throw () __attribute__ ((__warn_unused_result__));






extern __pid_t fork (void) throw ();







extern __pid_t vfork (void) throw ();





extern char *ttyname (int __fd) throw ();



extern int ttyname_r (int __fd, char *__buf, size_t __buflen)
     throw () __attribute__ ((__nonnull__ (2))) __attribute__ ((__warn_unused_result__));



extern int isatty (int __fd) throw ();





extern int ttyslot (void) throw ();




extern int link (const char *__from, const char *__to)
     throw () __attribute__ ((__nonnull__ (1, 2))) __attribute__ ((__warn_unused_result__));




extern int linkat (int __fromfd, const char *__from, int __tofd,
     const char *__to, int __flags)
     throw () __attribute__ ((__nonnull__ (2, 4))) __attribute__ ((__warn_unused_result__));




extern int symlink (const char *__from, const char *__to)
     throw () __attribute__ ((__nonnull__ (1, 2))) __attribute__ ((__warn_unused_result__));




extern ssize_t readlink (const char *__restrict __path,
    char *__restrict __buf, size_t __len)
     throw () __attribute__ ((__nonnull__ (1, 2))) __attribute__ ((__warn_unused_result__));




extern int symlinkat (const char *__from, int __tofd,
        const char *__to) throw () __attribute__ ((__nonnull__ (1, 3))) __attribute__ ((__warn_unused_result__));


extern ssize_t readlinkat (int __fd, const char *__restrict __path,
      char *__restrict __buf, size_t __len)
     throw () __attribute__ ((__nonnull__ (2, 3))) __attribute__ ((__warn_unused_result__));



extern int unlink (const char *__name) throw () __attribute__ ((__nonnull__ (1)));



extern int unlinkat (int __fd, const char *__name, int __flag)
     throw () __attribute__ ((__nonnull__ (2)));



extern int rmdir (const char *__path) throw () __attribute__ ((__nonnull__ (1)));



extern __pid_t tcgetpgrp (int __fd) throw ();


extern int tcsetpgrp (int __fd, __pid_t __pgrp_id) throw ();






extern char *getlogin (void);







extern int getlogin_r (char *__name, size_t __name_len) __attribute__ ((__nonnull__ (1)));




extern int setlogin (const char *__name) throw () __attribute__ ((__nonnull__ (1)));
# 874 "/usr/include/unistd.h" 3 4
# 1 "/usr/include/getopt.h" 1 3 4
# 48 "/usr/include/getopt.h" 3 4
extern "C" {
# 57 "/usr/include/getopt.h" 3 4
extern char *optarg;
# 71 "/usr/include/getopt.h" 3 4
extern int optind;




extern int opterr;



extern int optopt;
# 150 "/usr/include/getopt.h" 3 4
extern int getopt (int ___argc, char *const *___argv, const char *__shortopts)
       throw ();
# 185 "/usr/include/getopt.h" 3 4
}
# 875 "/usr/include/unistd.h" 2 3 4







extern int gethostname (char *__name, size_t __len) throw () __attribute__ ((__nonnull__ (1)));






extern int sethostname (const char *__name, size_t __len)
     throw () __attribute__ ((__nonnull__ (1))) __attribute__ ((__warn_unused_result__));



extern int sethostid (long int __id) throw () __attribute__ ((__warn_unused_result__));





extern int getdomainname (char *__name, size_t __len)
     throw () __attribute__ ((__nonnull__ (1))) __attribute__ ((__warn_unused_result__));
extern int setdomainname (const char *__name, size_t __len)
     throw () __attribute__ ((__nonnull__ (1))) __attribute__ ((__warn_unused_result__));





extern int vhangup (void) throw ();


extern int revoke (const char *__file) throw () __attribute__ ((__nonnull__ (1))) __attribute__ ((__warn_unused_result__));







extern int profil (unsigned short int *__sample_buffer, size_t __size,
     size_t __offset, unsigned int __scale)
     throw () __attribute__ ((__nonnull__ (1)));





extern int acct (const char *__name) throw ();



extern char *getusershell (void) throw ();
extern void endusershell (void) throw ();
extern void setusershell (void) throw ();





extern int daemon (int __nochdir, int __noclose) throw () __attribute__ ((__warn_unused_result__));






extern int chroot (const char *__path) throw () __attribute__ ((__nonnull__ (1))) __attribute__ ((__warn_unused_result__));



extern char *getpass (const char *__prompt) __attribute__ ((__nonnull__ (1)));







extern int fsync (int __fd);





extern int syncfs (int __fd) throw ();






extern long int gethostid (void);


extern void sync (void) throw ();





extern int getpagesize (void) throw () __attribute__ ((__const__));




extern int getdtablesize (void) throw ();
# 996 "/usr/include/unistd.h" 3 4
extern int truncate (const char *__file, __off_t __length)
     throw () __attribute__ ((__nonnull__ (1))) __attribute__ ((__warn_unused_result__));
# 1008 "/usr/include/unistd.h" 3 4
extern int truncate64 (const char *__file, __off64_t __length)
     throw () __attribute__ ((__nonnull__ (1))) __attribute__ ((__warn_unused_result__));
# 1019 "/usr/include/unistd.h" 3 4
extern int ftruncate (int __fd, __off_t __length) throw () __attribute__ ((__warn_unused_result__));
# 1029 "/usr/include/unistd.h" 3 4
extern int ftruncate64 (int __fd, __off64_t __length) throw () __attribute__ ((__warn_unused_result__));
# 1040 "/usr/include/unistd.h" 3 4
extern int brk (void *__addr) throw () __attribute__ ((__warn_unused_result__));





extern void *sbrk (intptr_t __delta) throw ();
# 1061 "/usr/include/unistd.h" 3 4
extern long int syscall (long int __sysno, ...) throw ();
# 1084 "/usr/include/unistd.h" 3 4
extern int lockf (int __fd, int __cmd, __off_t __len) __attribute__ ((__warn_unused_result__));
# 1094 "/usr/include/unistd.h" 3 4
extern int lockf64 (int __fd, int __cmd, __off64_t __len) __attribute__ ((__warn_unused_result__));
# 1115 "/usr/include/unistd.h" 3 4
extern int fdatasync (int __fildes);







extern char *crypt (const char *__key, const char *__salt)
     throw () __attribute__ ((__nonnull__ (1, 2)));



extern void encrypt (char *__glibc_block, int __edflag)
     throw () __attribute__ ((__nonnull__ (1)));






extern void swab (const void *__restrict __from, void *__restrict __to,
    ssize_t __n) throw () __attribute__ ((__nonnull__ (1, 2)));
# 1151 "/usr/include/unistd.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/unistd.h" 1 3 4
# 23 "/usr/include/x86_64-linux-gnu/bits/unistd.h" 3 4
extern ssize_t __read_chk (int __fd, void *__buf, size_t __nbytes,
      size_t __buflen) __attribute__ ((__warn_unused_result__));
extern ssize_t __read_alias (int __fd, void *__buf, size_t __nbytes) __asm__ ("" "read")
                               __attribute__ ((__warn_unused_result__));
extern ssize_t __read_chk_warn (int __fd, void *__buf, size_t __nbytes, size_t __buflen) __asm__ ("" "__read_chk")


     __attribute__ ((__warn_unused_result__)) __attribute__((__warning__ ("read called with bigger length than size of " "the destination buffer")))
                                  ;

extern __inline __attribute__ ((__always_inline__)) __attribute__ ((__gnu_inline__)) __attribute__ ((__artificial__)) __attribute__ ((__warn_unused_result__)) ssize_t
read (int __fd, void *__buf, size_t __nbytes)
{
  if (__builtin_object_size (__buf, 0) != (size_t) -1)
    {
      if (!__builtin_constant_p (__nbytes))
 return __read_chk (__fd, __buf, __nbytes, __builtin_object_size (__buf, 0));

      if (__nbytes > __builtin_object_size (__buf, 0))
 return __read_chk_warn (__fd, __buf, __nbytes, __builtin_object_size (__buf, 0));
    }
  return __read_alias (__fd, __buf, __nbytes);
}


extern ssize_t __pread_chk (int __fd, void *__buf, size_t __nbytes,
       __off_t __offset, size_t __bufsize) __attribute__ ((__warn_unused_result__));
extern ssize_t __pread64_chk (int __fd, void *__buf, size_t __nbytes,
         __off64_t __offset, size_t __bufsize) __attribute__ ((__warn_unused_result__));
extern ssize_t __pread_alias (int __fd, void *__buf, size_t __nbytes, __off_t __offset) __asm__ ("" "pread")

                                 __attribute__ ((__warn_unused_result__));
extern ssize_t __pread64_alias (int __fd, void *__buf, size_t __nbytes, __off64_t __offset) __asm__ ("" "pread64")

                                     __attribute__ ((__warn_unused_result__));
extern ssize_t __pread_chk_warn (int __fd, void *__buf, size_t __nbytes, __off_t __offset, size_t __bufsize) __asm__ ("" "__pread_chk")


     __attribute__ ((__warn_unused_result__)) __attribute__((__warning__ ("pread called with bigger length than size of " "the destination buffer")))
                                  ;
extern ssize_t __pread64_chk_warn (int __fd, void *__buf, size_t __nbytes, __off64_t __offset, size_t __bufsize) __asm__ ("" "__pread64_chk")



     __attribute__ ((__warn_unused_result__)) __attribute__((__warning__ ("pread64 called with bigger length than size of " "the destination buffer")))
                                  ;


extern __inline __attribute__ ((__always_inline__)) __attribute__ ((__gnu_inline__)) __attribute__ ((__artificial__)) __attribute__ ((__warn_unused_result__)) ssize_t
pread (int __fd, void *__buf, size_t __nbytes, __off_t __offset)
{
  if (__builtin_object_size (__buf, 0) != (size_t) -1)
    {
      if (!__builtin_constant_p (__nbytes))
 return __pread_chk (__fd, __buf, __nbytes, __offset, __builtin_object_size (__buf, 0));

      if ( __nbytes > __builtin_object_size (__buf, 0))
 return __pread_chk_warn (__fd, __buf, __nbytes, __offset,
     __builtin_object_size (__buf, 0));
    }
  return __pread_alias (__fd, __buf, __nbytes, __offset);
}
# 104 "/usr/include/x86_64-linux-gnu/bits/unistd.h" 3 4
extern __inline __attribute__ ((__always_inline__)) __attribute__ ((__gnu_inline__)) __attribute__ ((__artificial__)) __attribute__ ((__warn_unused_result__)) ssize_t
pread64 (int __fd, void *__buf, size_t __nbytes, __off64_t __offset)
{
  if (__builtin_object_size (__buf, 0) != (size_t) -1)
    {
      if (!__builtin_constant_p (__nbytes))
 return __pread64_chk (__fd, __buf, __nbytes, __offset, __builtin_object_size (__buf, 0));

      if ( __nbytes > __builtin_object_size (__buf, 0))
 return __pread64_chk_warn (__fd, __buf, __nbytes, __offset,
       __builtin_object_size (__buf, 0));
    }

  return __pread64_alias (__fd, __buf, __nbytes, __offset);
}




extern ssize_t __readlink_chk (const char *__restrict __path,
          char *__restrict __buf, size_t __len,
          size_t __buflen)
     throw () __attribute__ ((__nonnull__ (1, 2))) __attribute__ ((__warn_unused_result__));
extern ssize_t __readlink_alias (const char *__restrict __path, char *__restrict __buf, size_t __len) throw () __asm__ ("" "readlink")


     __attribute__ ((__nonnull__ (1, 2))) __attribute__ ((__warn_unused_result__));
extern ssize_t __readlink_chk_warn (const char *__restrict __path, char *__restrict __buf, size_t __len, size_t __buflen) throw () __asm__ ("" "__readlink_chk")



     __attribute__ ((__nonnull__ (1, 2))) __attribute__ ((__warn_unused_result__)) __attribute__((__warning__ ("readlink called with bigger length " "than size of destination buffer")))
                                         ;

extern __inline __attribute__ ((__always_inline__)) __attribute__ ((__gnu_inline__)) __attribute__ ((__artificial__)) __attribute__ ((__nonnull__ (1, 2))) __attribute__ ((__warn_unused_result__)) ssize_t
__attribute__ ((__leaf__)) readlink (const char *__restrict __path, char *__restrict __buf, size_t __len) throw ()

{
  if (__builtin_object_size (__buf, 2 > 1) != (size_t) -1)
    {
      if (!__builtin_constant_p (__len))
 return __readlink_chk (__path, __buf, __len, __builtin_object_size (__buf, 2 > 1));

      if ( __len > __builtin_object_size (__buf, 2 > 1))
 return __readlink_chk_warn (__path, __buf, __len, __builtin_object_size (__buf, 2 > 1));
    }
  return __readlink_alias (__path, __buf, __len);
}



extern ssize_t __readlinkat_chk (int __fd, const char *__restrict __path,
     char *__restrict __buf, size_t __len,
     size_t __buflen)
     throw () __attribute__ ((__nonnull__ (2, 3))) __attribute__ ((__warn_unused_result__));
extern ssize_t __readlinkat_alias (int __fd, const char *__restrict __path, char *__restrict __buf, size_t __len) throw () __asm__ ("" "readlinkat")



     __attribute__ ((__nonnull__ (2, 3))) __attribute__ ((__warn_unused_result__));
extern ssize_t __readlinkat_chk_warn (int __fd, const char *__restrict __path, char *__restrict __buf, size_t __len, size_t __buflen) throw () __asm__ ("" "__readlinkat_chk")



     __attribute__ ((__nonnull__ (2, 3))) __attribute__ ((__warn_unused_result__)) __attribute__((__warning__ ("readlinkat called with bigger " "length than size of destination " "buffer")))

                ;

extern __inline __attribute__ ((__always_inline__)) __attribute__ ((__gnu_inline__)) __attribute__ ((__artificial__)) __attribute__ ((__nonnull__ (2, 3))) __attribute__ ((__warn_unused_result__)) ssize_t
__attribute__ ((__leaf__)) readlinkat (int __fd, const char *__restrict __path, char *__restrict __buf, size_t __len) throw ()

{
  if (__builtin_object_size (__buf, 2 > 1) != (size_t) -1)
    {
      if (!__builtin_constant_p (__len))
 return __readlinkat_chk (__fd, __path, __buf, __len, __builtin_object_size (__buf, 2 > 1));

      if (__len > __builtin_object_size (__buf, 2 > 1))
 return __readlinkat_chk_warn (__fd, __path, __buf, __len,
          __builtin_object_size (__buf, 2 > 1));
    }
  return __readlinkat_alias (__fd, __path, __buf, __len);
}


extern char *__getcwd_chk (char *__buf, size_t __size, size_t __buflen)
     throw () __attribute__ ((__warn_unused_result__));
extern char *__getcwd_alias (char *__buf, size_t __size) throw () __asm__ ("" "getcwd")
                                              __attribute__ ((__warn_unused_result__));
extern char *__getcwd_chk_warn (char *__buf, size_t __size, size_t __buflen) throw () __asm__ ("" "__getcwd_chk")


     __attribute__ ((__warn_unused_result__)) __attribute__((__warning__ ("getcwd caller with bigger length than size of " "destination buffer")))
                              ;

extern __inline __attribute__ ((__always_inline__)) __attribute__ ((__gnu_inline__)) __attribute__ ((__artificial__)) __attribute__ ((__warn_unused_result__)) char *
__attribute__ ((__leaf__)) getcwd (char *__buf, size_t __size) throw ()
{
  if (__builtin_object_size (__buf, 2 > 1) != (size_t) -1)
    {
      if (!__builtin_constant_p (__size))
 return __getcwd_chk (__buf, __size, __builtin_object_size (__buf, 2 > 1));

      if (__size > __builtin_object_size (__buf, 2 > 1))
 return __getcwd_chk_warn (__buf, __size, __builtin_object_size (__buf, 2 > 1));
    }
  return __getcwd_alias (__buf, __size);
}


extern char *__getwd_chk (char *__buf, size_t buflen)
     throw () __attribute__ ((__nonnull__ (1))) __attribute__ ((__warn_unused_result__));
extern char *__getwd_warn (char *__buf) throw () __asm__ ("" "getwd")
     __attribute__ ((__nonnull__ (1))) __attribute__ ((__warn_unused_result__)) __attribute__((__warning__ ("please use getcwd instead, as getwd " "doesn't specify buffer size")))
                                         ;

extern __inline __attribute__ ((__always_inline__)) __attribute__ ((__gnu_inline__)) __attribute__ ((__artificial__)) __attribute__ ((__nonnull__ (1))) __attribute__ ((__deprecated__)) __attribute__ ((__warn_unused_result__)) char *
__attribute__ ((__leaf__)) getwd (char *__buf) throw ()
{
  if (__builtin_object_size (__buf, 2 > 1) != (size_t) -1)
    return __getwd_chk (__buf, __builtin_object_size (__buf, 2 > 1));
  return __getwd_warn (__buf);
}


extern size_t __confstr_chk (int __name, char *__buf, size_t __len,
        size_t __buflen) throw ();
extern size_t __confstr_alias (int __name, char *__buf, size_t __len) throw () __asm__ ("" "confstr")
                             ;
extern size_t __confstr_chk_warn (int __name, char *__buf, size_t __len, size_t __buflen) throw () __asm__ ("" "__confstr_chk")


     __attribute__((__warning__ ("confstr called with bigger length than size of destination " "buffer")))
            ;

extern __inline __attribute__ ((__always_inline__)) __attribute__ ((__gnu_inline__)) __attribute__ ((__artificial__)) size_t
__attribute__ ((__leaf__)) confstr (int __name, char *__buf, size_t __len) throw ()
{
  if (__builtin_object_size (__buf, 2 > 1) != (size_t) -1)
    {
      if (!__builtin_constant_p (__len))
 return __confstr_chk (__name, __buf, __len, __builtin_object_size (__buf, 2 > 1));

      if (__builtin_object_size (__buf, 2 > 1) < __len)
 return __confstr_chk_warn (__name, __buf, __len, __builtin_object_size (__buf, 2 > 1));
    }
  return __confstr_alias (__name, __buf, __len);
}


extern int __getgroups_chk (int __size, __gid_t __list[], size_t __listlen)
     throw () __attribute__ ((__warn_unused_result__));
extern int __getgroups_alias (int __size, __gid_t __list[]) throw () __asm__ ("" "getgroups")
                 __attribute__ ((__warn_unused_result__));
extern int __getgroups_chk_warn (int __size, __gid_t __list[], size_t __listlen) throw () __asm__ ("" "__getgroups_chk")


     __attribute__ ((__warn_unused_result__)) __attribute__((__warning__ ("getgroups called with bigger group count than what " "can fit into destination buffer")))
                                           ;

extern __inline __attribute__ ((__always_inline__)) __attribute__ ((__gnu_inline__)) __attribute__ ((__artificial__)) int
__attribute__ ((__leaf__)) getgroups (int __size, __gid_t __list[]) throw ()
{
  if (__builtin_object_size (__list, 2 > 1) != (size_t) -1)
    {
      if (!__builtin_constant_p (__size) || __size < 0)
 return __getgroups_chk (__size, __list, __builtin_object_size (__list, 2 > 1));

      if (__size * sizeof (__gid_t) > __builtin_object_size (__list, 2 > 1))
 return __getgroups_chk_warn (__size, __list, __builtin_object_size (__list, 2 > 1));
    }
  return __getgroups_alias (__size, __list);
}


extern int __ttyname_r_chk (int __fd, char *__buf, size_t __buflen,
       size_t __nreal) throw () __attribute__ ((__nonnull__ (2)));
extern int __ttyname_r_alias (int __fd, char *__buf, size_t __buflen) throw () __asm__ ("" "ttyname_r")

     __attribute__ ((__nonnull__ (2)));
extern int __ttyname_r_chk_warn (int __fd, char *__buf, size_t __buflen, size_t __nreal) throw () __asm__ ("" "__ttyname_r_chk")


     __attribute__ ((__nonnull__ (2))) __attribute__((__warning__ ("ttyname_r called with bigger buflen than " "size of destination buffer")))
                                  ;

extern __inline __attribute__ ((__always_inline__)) __attribute__ ((__gnu_inline__)) __attribute__ ((__artificial__)) int
__attribute__ ((__leaf__)) ttyname_r (int __fd, char *__buf, size_t __buflen) throw ()
{
  if (__builtin_object_size (__buf, 2 > 1) != (size_t) -1)
    {
      if (!__builtin_constant_p (__buflen))
 return __ttyname_r_chk (__fd, __buf, __buflen, __builtin_object_size (__buf, 2 > 1));

      if (__buflen > __builtin_object_size (__buf, 2 > 1))
 return __ttyname_r_chk_warn (__fd, __buf, __buflen, __builtin_object_size (__buf, 2 > 1));
    }
  return __ttyname_r_alias (__fd, __buf, __buflen);
}



extern int __getlogin_r_chk (char *__buf, size_t __buflen, size_t __nreal)
     __attribute__ ((__nonnull__ (1)));
extern int __getlogin_r_alias (char *__buf, size_t __buflen) __asm__ ("" "getlogin_r")
                     __attribute__ ((__nonnull__ (1)));
extern int __getlogin_r_chk_warn (char *__buf, size_t __buflen, size_t __nreal) __asm__ ("" "__getlogin_r_chk")


     __attribute__ ((__nonnull__ (1))) __attribute__((__warning__ ("getlogin_r called with bigger buflen than " "size of destination buffer")))
                                  ;

extern __inline __attribute__ ((__always_inline__)) __attribute__ ((__gnu_inline__)) __attribute__ ((__artificial__)) int
getlogin_r (char *__buf, size_t __buflen)
{
  if (__builtin_object_size (__buf, 2 > 1) != (size_t) -1)
    {
      if (!__builtin_constant_p (__buflen))
 return __getlogin_r_chk (__buf, __buflen, __builtin_object_size (__buf, 2 > 1));

      if (__buflen > __builtin_object_size (__buf, 2 > 1))
 return __getlogin_r_chk_warn (__buf, __buflen, __builtin_object_size (__buf, 2 > 1));
    }
  return __getlogin_r_alias (__buf, __buflen);
}




extern int __gethostname_chk (char *__buf, size_t __buflen, size_t __nreal)
     throw () __attribute__ ((__nonnull__ (1)));
extern int __gethostname_alias (char *__buf, size_t __buflen) throw () __asm__ ("" "gethostname")
                   __attribute__ ((__nonnull__ (1)));
extern int __gethostname_chk_warn (char *__buf, size_t __buflen, size_t __nreal) throw () __asm__ ("" "__gethostname_chk")


     __attribute__ ((__nonnull__ (1))) __attribute__((__warning__ ("gethostname called with bigger buflen than " "size of destination buffer")))
                                  ;

extern __inline __attribute__ ((__always_inline__)) __attribute__ ((__gnu_inline__)) __attribute__ ((__artificial__)) int
__attribute__ ((__leaf__)) gethostname (char *__buf, size_t __buflen) throw ()
{
  if (__builtin_object_size (__buf, 2 > 1) != (size_t) -1)
    {
      if (!__builtin_constant_p (__buflen))
 return __gethostname_chk (__buf, __buflen, __builtin_object_size (__buf, 2 > 1));

      if (__buflen > __builtin_object_size (__buf, 2 > 1))
 return __gethostname_chk_warn (__buf, __buflen, __builtin_object_size (__buf, 2 > 1));
    }
  return __gethostname_alias (__buf, __buflen);
}




extern int __getdomainname_chk (char *__buf, size_t __buflen, size_t __nreal)
     throw () __attribute__ ((__nonnull__ (1))) __attribute__ ((__warn_unused_result__));
extern int __getdomainname_alias (char *__buf, size_t __buflen) throw () __asm__ ("" "getdomainname")

                     __attribute__ ((__nonnull__ (1))) __attribute__ ((__warn_unused_result__));
extern int __getdomainname_chk_warn (char *__buf, size_t __buflen, size_t __nreal) throw () __asm__ ("" "__getdomainname_chk")


     __attribute__ ((__nonnull__ (1))) __attribute__ ((__warn_unused_result__)) __attribute__((__warning__ ("getdomainname called with bigger " "buflen than size of destination " "buffer")))

                    ;

extern __inline __attribute__ ((__always_inline__)) __attribute__ ((__gnu_inline__)) __attribute__ ((__artificial__)) int
__attribute__ ((__leaf__)) getdomainname (char *__buf, size_t __buflen) throw ()
{
  if (__builtin_object_size (__buf, 2 > 1) != (size_t) -1)
    {
      if (!__builtin_constant_p (__buflen))
 return __getdomainname_chk (__buf, __buflen, __builtin_object_size (__buf, 2 > 1));

      if (__buflen > __builtin_object_size (__buf, 2 > 1))
 return __getdomainname_chk_warn (__buf, __buflen, __builtin_object_size (__buf, 2 > 1));
    }
  return __getdomainname_alias (__buf, __buflen);
}
# 1152 "/usr/include/unistd.h" 2 3 4


}
# 52 "/usr/local/cuda/targets/x86_64-linux/include/nvtx3/nvtxDetail/nvtxImpl.h" 2






# 1 "/usr/include/sched.h" 1 3 4
# 28 "/usr/include/sched.h" 3 4
# 1 "/usr/lib/gcc/x86_64-linux-gnu/5/include/stddef.h" 1 3 4
# 29 "/usr/include/sched.h" 2 3 4





# 1 "/usr/include/time.h" 1 3 4
# 73 "/usr/include/time.h" 3 4


typedef __time_t time_t;



# 120 "/usr/include/time.h" 3 4
struct timespec
  {
    __time_t tv_sec;
    __syscall_slong_t tv_nsec;
  };
# 35 "/usr/include/sched.h" 2 3 4
# 43 "/usr/include/sched.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/sched.h" 1 3 4
# 72 "/usr/include/x86_64-linux-gnu/bits/sched.h" 3 4
struct sched_param
  {
    int __sched_priority;
  };

extern "C" {



extern int clone (int (*__fn) (void *__arg), void *__child_stack,
    int __flags, void *__arg, ...) throw ();


extern int unshare (int __flags) throw ();


extern int sched_getcpu (void) throw ();


extern int setns (int __fd, int __nstype) throw ();



}







struct __sched_param
  {
    int __sched_priority;
  };
# 118 "/usr/include/x86_64-linux-gnu/bits/sched.h" 3 4
typedef unsigned long int __cpu_mask;






typedef struct
{
  __cpu_mask __bits[1024 / (8 * sizeof (__cpu_mask))];
} cpu_set_t;
# 201 "/usr/include/x86_64-linux-gnu/bits/sched.h" 3 4
extern "C" {

extern int __sched_cpucount (size_t __setsize, const cpu_set_t *__setp)
  throw ();
extern cpu_set_t *__sched_cpualloc (size_t __count) throw () __attribute__ ((__warn_unused_result__));
extern void __sched_cpufree (cpu_set_t *__set) throw ();

}
# 44 "/usr/include/sched.h" 2 3 4




extern "C" {


extern int sched_setparam (__pid_t __pid, const struct sched_param *__param)
     throw ();


extern int sched_getparam (__pid_t __pid, struct sched_param *__param) throw ();


extern int sched_setscheduler (__pid_t __pid, int __policy,
          const struct sched_param *__param) throw ();


extern int sched_getscheduler (__pid_t __pid) throw ();


extern int sched_yield (void) throw ();


extern int sched_get_priority_max (int __algorithm) throw ();


extern int sched_get_priority_min (int __algorithm) throw ();


extern int sched_rr_get_interval (__pid_t __pid, struct timespec *__t) throw ();
# 118 "/usr/include/sched.h" 3 4
extern int sched_setaffinity (__pid_t __pid, size_t __cpusetsize,
         const cpu_set_t *__cpuset) throw ();


extern int sched_getaffinity (__pid_t __pid, size_t __cpusetsize,
         cpu_set_t *__cpuset) throw ();


}
# 59 "/usr/local/cuda/targets/x86_64-linux/include/nvtx3/nvtxDetail/nvtxImpl.h" 2


# 1 "/usr/lib/gcc/x86_64-linux-gnu/5/include-fixed/limits.h" 1 3 4
# 34 "/usr/lib/gcc/x86_64-linux-gnu/5/include-fixed/limits.h" 3 4
# 1 "/usr/lib/gcc/x86_64-linux-gnu/5/include-fixed/syslimits.h" 1 3 4






# 1 "/usr/lib/gcc/x86_64-linux-gnu/5/include-fixed/limits.h" 1 3 4
# 168 "/usr/lib/gcc/x86_64-linux-gnu/5/include-fixed/limits.h" 3 4
# 1 "/usr/include/limits.h" 1 3 4
# 143 "/usr/include/limits.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/posix1_lim.h" 1 3 4
# 160 "/usr/include/x86_64-linux-gnu/bits/posix1_lim.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/local_lim.h" 1 3 4
# 38 "/usr/include/x86_64-linux-gnu/bits/local_lim.h" 3 4
# 1 "/usr/include/linux/limits.h" 1 3 4
# 39 "/usr/include/x86_64-linux-gnu/bits/local_lim.h" 2 3 4
# 161 "/usr/include/x86_64-linux-gnu/bits/posix1_lim.h" 2 3 4
# 144 "/usr/include/limits.h" 2 3 4



# 1 "/usr/include/x86_64-linux-gnu/bits/posix2_lim.h" 1 3 4
# 148 "/usr/include/limits.h" 2 3 4



# 1 "/usr/include/x86_64-linux-gnu/bits/xopen_lim.h" 1 3 4
# 33 "/usr/include/x86_64-linux-gnu/bits/xopen_lim.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/stdio_lim.h" 1 3 4
# 34 "/usr/include/x86_64-linux-gnu/bits/xopen_lim.h" 2 3 4
# 152 "/usr/include/limits.h" 2 3 4
# 169 "/usr/lib/gcc/x86_64-linux-gnu/5/include-fixed/limits.h" 2 3 4
# 8 "/usr/lib/gcc/x86_64-linux-gnu/5/include-fixed/syslimits.h" 2 3 4
# 35 "/usr/lib/gcc/x86_64-linux-gnu/5/include-fixed/limits.h" 2 3 4
# 62 "/usr/local/cuda/targets/x86_64-linux/include/nvtx3/nvtxDetail/nvtxImpl.h" 2
# 1 "/usr/include/dlfcn.h" 1 3 4
# 24 "/usr/include/dlfcn.h" 3 4
# 1 "/usr/lib/gcc/x86_64-linux-gnu/5/include/stddef.h" 1 3 4
# 25 "/usr/include/dlfcn.h" 2 3 4


# 1 "/usr/include/x86_64-linux-gnu/bits/dlfcn.h" 1 3 4
# 57 "/usr/include/x86_64-linux-gnu/bits/dlfcn.h" 3 4
extern "C" {


extern void _dl_mcount_wrapper_check (void *__selfpc) throw ();

}
# 28 "/usr/include/dlfcn.h" 2 3 4
# 44 "/usr/include/dlfcn.h" 3 4
typedef long int Lmid_t;







extern "C" {



extern void *dlopen (const char *__file, int __mode) throw ();



extern int dlclose (void *__handle) throw () __attribute__ ((__nonnull__ (1)));



extern void *dlsym (void *__restrict __handle,
      const char *__restrict __name) throw () __attribute__ ((__nonnull__ (2)));



extern void *dlmopen (Lmid_t __nsid, const char *__file, int __mode) throw ();



extern void *dlvsym (void *__restrict __handle,
       const char *__restrict __name,
       const char *__restrict __version)
     throw () __attribute__ ((__nonnull__ (2, 3)));





extern char *dlerror (void) throw ();





typedef struct
{
  const char *dli_fname;
  void *dli_fbase;
  const char *dli_sname;
  void *dli_saddr;
} Dl_info;



extern int dladdr (const void *__address, Dl_info *__info)
     throw () __attribute__ ((__nonnull__ (2)));


extern int dladdr1 (const void *__address, Dl_info *__info,
      void **__extra_info, int __flags) throw () __attribute__ ((__nonnull__ (2)));




enum
  {

    RTLD_DL_SYMENT = 1,


    RTLD_DL_LINKMAP = 2
  };







extern int dlinfo (void *__restrict __handle,
     int __request, void *__restrict __arg)
     throw () __attribute__ ((__nonnull__ (1, 3)));


enum
  {

    RTLD_DI_LMID = 1,



    RTLD_DI_LINKMAP = 2,

    RTLD_DI_CONFIGADDR = 3,






    RTLD_DI_SERINFO = 4,
    RTLD_DI_SERINFOSIZE = 5,



    RTLD_DI_ORIGIN = 6,

    RTLD_DI_PROFILENAME = 7,
    RTLD_DI_PROFILEOUT = 8,




    RTLD_DI_TLS_MODID = 9,





    RTLD_DI_TLS_DATA = 10,

    RTLD_DI_MAX = 10
  };




typedef struct
{
  char *dls_name;
  unsigned int dls_flags;
} Dl_serpath;



typedef struct
{
  size_t dls_size;
  unsigned int dls_cnt;
  Dl_serpath dls_serpath[1];
} Dl_serinfo;



}
# 63 "/usr/local/cuda/targets/x86_64-linux/include/nvtx3/nvtxDetail/nvtxImpl.h" 2
# 1 "/usr/include/fcntl.h" 1 3 4
# 28 "/usr/include/fcntl.h" 3 4
extern "C" {






# 1 "/usr/include/x86_64-linux-gnu/bits/fcntl.h" 1 3 4
# 35 "/usr/include/x86_64-linux-gnu/bits/fcntl.h" 3 4
struct flock
  {
    short int l_type;
    short int l_whence;

    __off_t l_start;
    __off_t l_len;




    __pid_t l_pid;
  };


struct flock64
  {
    short int l_type;
    short int l_whence;
    __off64_t l_start;
    __off64_t l_len;
    __pid_t l_pid;
  };



# 1 "/usr/include/x86_64-linux-gnu/bits/fcntl-linux.h" 1 3 4
# 38 "/usr/include/x86_64-linux-gnu/bits/fcntl-linux.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/uio.h" 1 3 4
# 25 "/usr/include/x86_64-linux-gnu/bits/uio.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/sys/types.h" 1 3 4
# 27 "/usr/include/x86_64-linux-gnu/sys/types.h" 3 4
extern "C" {





typedef __u_char u_char;
typedef __u_short u_short;
typedef __u_int u_int;
typedef __u_long u_long;
typedef __quad_t quad_t;
typedef __u_quad_t u_quad_t;
typedef __fsid_t fsid_t;




typedef __loff_t loff_t;



typedef __ino_t ino_t;






typedef __ino64_t ino64_t;




typedef __dev_t dev_t;
# 70 "/usr/include/x86_64-linux-gnu/sys/types.h" 3 4
typedef __mode_t mode_t;




typedef __nlink_t nlink_t;
# 104 "/usr/include/x86_64-linux-gnu/sys/types.h" 3 4
typedef __id_t id_t;
# 115 "/usr/include/x86_64-linux-gnu/sys/types.h" 3 4
typedef __daddr_t daddr_t;
typedef __caddr_t caddr_t;





typedef __key_t key_t;
# 132 "/usr/include/x86_64-linux-gnu/sys/types.h" 3 4
# 1 "/usr/include/time.h" 1 3 4
# 57 "/usr/include/time.h" 3 4


typedef __clock_t clock_t;



# 91 "/usr/include/time.h" 3 4
typedef __clockid_t clockid_t;
# 103 "/usr/include/time.h" 3 4
typedef __timer_t timer_t;
# 133 "/usr/include/x86_64-linux-gnu/sys/types.h" 2 3 4







typedef __suseconds_t suseconds_t;





# 1 "/usr/lib/gcc/x86_64-linux-gnu/5/include/stddef.h" 1 3 4
# 147 "/usr/include/x86_64-linux-gnu/sys/types.h" 2 3 4



typedef unsigned long int ulong;
typedef unsigned short int ushort;
typedef unsigned int uint;
# 200 "/usr/include/x86_64-linux-gnu/sys/types.h" 3 4
typedef unsigned int u_int8_t __attribute__ ((__mode__ (__QI__)));
typedef unsigned int u_int16_t __attribute__ ((__mode__ (__HI__)));
typedef unsigned int u_int32_t __attribute__ ((__mode__ (__SI__)));
typedef unsigned int u_int64_t __attribute__ ((__mode__ (__DI__)));

typedef int register_t __attribute__ ((__mode__ (__word__)));
# 216 "/usr/include/x86_64-linux-gnu/sys/types.h" 3 4
# 1 "/usr/include/endian.h" 1 3 4
# 36 "/usr/include/endian.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/endian.h" 1 3 4
# 37 "/usr/include/endian.h" 2 3 4
# 60 "/usr/include/endian.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/byteswap.h" 1 3 4
# 28 "/usr/include/x86_64-linux-gnu/bits/byteswap.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/wordsize.h" 1 3 4
# 29 "/usr/include/x86_64-linux-gnu/bits/byteswap.h" 2 3 4






# 1 "/usr/include/x86_64-linux-gnu/bits/byteswap-16.h" 1 3 4
# 36 "/usr/include/x86_64-linux-gnu/bits/byteswap.h" 2 3 4
# 44 "/usr/include/x86_64-linux-gnu/bits/byteswap.h" 3 4
static __inline unsigned int
__bswap_32 (unsigned int __bsx)
{
  return __builtin_bswap32 (__bsx);
}
# 108 "/usr/include/x86_64-linux-gnu/bits/byteswap.h" 3 4
static __inline __uint64_t
__bswap_64 (__uint64_t __bsx)
{
  return __builtin_bswap64 (__bsx);
}
# 61 "/usr/include/endian.h" 2 3 4
# 217 "/usr/include/x86_64-linux-gnu/sys/types.h" 2 3 4


# 1 "/usr/include/x86_64-linux-gnu/sys/select.h" 1 3 4
# 30 "/usr/include/x86_64-linux-gnu/sys/select.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/select.h" 1 3 4
# 22 "/usr/include/x86_64-linux-gnu/bits/select.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/wordsize.h" 1 3 4
# 23 "/usr/include/x86_64-linux-gnu/bits/select.h" 2 3 4
# 31 "/usr/include/x86_64-linux-gnu/sys/select.h" 2 3 4


# 1 "/usr/include/x86_64-linux-gnu/bits/sigset.h" 1 3 4
# 22 "/usr/include/x86_64-linux-gnu/bits/sigset.h" 3 4
typedef int __sig_atomic_t;




typedef struct
  {
    unsigned long int __val[(1024 / (8 * sizeof (unsigned long int)))];
  } __sigset_t;
# 34 "/usr/include/x86_64-linux-gnu/sys/select.h" 2 3 4



typedef __sigset_t sigset_t;





# 1 "/usr/include/time.h" 1 3 4
# 44 "/usr/include/x86_64-linux-gnu/sys/select.h" 2 3 4

# 1 "/usr/include/x86_64-linux-gnu/bits/time.h" 1 3 4
# 30 "/usr/include/x86_64-linux-gnu/bits/time.h" 3 4
struct timeval
  {
    __time_t tv_sec;
    __suseconds_t tv_usec;
  };
# 46 "/usr/include/x86_64-linux-gnu/sys/select.h" 2 3 4
# 54 "/usr/include/x86_64-linux-gnu/sys/select.h" 3 4
typedef long int __fd_mask;
# 64 "/usr/include/x86_64-linux-gnu/sys/select.h" 3 4
typedef struct
  {



    __fd_mask fds_bits[1024 / (8 * (int) sizeof (__fd_mask))];





  } fd_set;






typedef __fd_mask fd_mask;
# 96 "/usr/include/x86_64-linux-gnu/sys/select.h" 3 4
extern "C" {
# 106 "/usr/include/x86_64-linux-gnu/sys/select.h" 3 4
extern int select (int __nfds, fd_set *__restrict __readfds,
     fd_set *__restrict __writefds,
     fd_set *__restrict __exceptfds,
     struct timeval *__restrict __timeout);
# 118 "/usr/include/x86_64-linux-gnu/sys/select.h" 3 4
extern int pselect (int __nfds, fd_set *__restrict __readfds,
      fd_set *__restrict __writefds,
      fd_set *__restrict __exceptfds,
      const struct timespec *__restrict __timeout,
      const __sigset_t *__restrict __sigmask);





# 1 "/usr/include/x86_64-linux-gnu/bits/select2.h" 1 3 4
# 24 "/usr/include/x86_64-linux-gnu/bits/select2.h" 3 4
extern long int __fdelt_chk (long int __d);
extern long int __fdelt_warn (long int __d)
  __attribute__((__warning__ ("bit outside of fd_set selected")));
# 129 "/usr/include/x86_64-linux-gnu/sys/select.h" 2 3 4


}
# 220 "/usr/include/x86_64-linux-gnu/sys/types.h" 2 3 4


# 1 "/usr/include/x86_64-linux-gnu/sys/sysmacros.h" 1 3 4
# 24 "/usr/include/x86_64-linux-gnu/sys/sysmacros.h" 3 4
extern "C" {

__extension__
extern unsigned int gnu_dev_major (unsigned long long int __dev)
     throw () __attribute__ ((__const__));
__extension__
extern unsigned int gnu_dev_minor (unsigned long long int __dev)
     throw () __attribute__ ((__const__));
__extension__
extern unsigned long long int gnu_dev_makedev (unsigned int __major,
            unsigned int __minor)
     throw () __attribute__ ((__const__));


__extension__ extern __inline __attribute__ ((__gnu_inline__)) __attribute__ ((__const__)) unsigned int
__attribute__ ((__leaf__)) gnu_dev_major (unsigned long long int __dev) throw ()
{
  return ((__dev >> 8) & 0xfff) | ((unsigned int) (__dev >> 32) & ~0xfff);
}

__extension__ extern __inline __attribute__ ((__gnu_inline__)) __attribute__ ((__const__)) unsigned int
__attribute__ ((__leaf__)) gnu_dev_minor (unsigned long long int __dev) throw ()
{
  return (__dev & 0xff) | ((unsigned int) (__dev >> 12) & ~0xff);
}

__extension__ extern __inline __attribute__ ((__gnu_inline__)) __attribute__ ((__const__)) unsigned long long int
__attribute__ ((__leaf__)) gnu_dev_makedev (unsigned int __major, unsigned int __minor) throw ()
{
  return ((__minor & 0xff) | ((__major & 0xfff) << 8)
   | (((unsigned long long int) (__minor & ~0xff)) << 12)
   | (((unsigned long long int) (__major & ~0xfff)) << 32));
}

}
# 223 "/usr/include/x86_64-linux-gnu/sys/types.h" 2 3 4





typedef __blksize_t blksize_t;






typedef __blkcnt_t blkcnt_t;



typedef __fsblkcnt_t fsblkcnt_t;



typedef __fsfilcnt_t fsfilcnt_t;
# 262 "/usr/include/x86_64-linux-gnu/sys/types.h" 3 4
typedef __blkcnt64_t blkcnt64_t;
typedef __fsblkcnt64_t fsblkcnt64_t;
typedef __fsfilcnt64_t fsfilcnt64_t;





# 1 "/usr/include/x86_64-linux-gnu/bits/pthreadtypes.h" 1 3 4
# 21 "/usr/include/x86_64-linux-gnu/bits/pthreadtypes.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/wordsize.h" 1 3 4
# 22 "/usr/include/x86_64-linux-gnu/bits/pthreadtypes.h" 2 3 4
# 60 "/usr/include/x86_64-linux-gnu/bits/pthreadtypes.h" 3 4
typedef unsigned long int pthread_t;


union pthread_attr_t
{
  char __size[56];
  long int __align;
};

typedef union pthread_attr_t pthread_attr_t;





typedef struct __pthread_internal_list
{
  struct __pthread_internal_list *__prev;
  struct __pthread_internal_list *__next;
} __pthread_list_t;
# 90 "/usr/include/x86_64-linux-gnu/bits/pthreadtypes.h" 3 4
typedef union
{
  struct __pthread_mutex_s
  {
    int __lock;
    unsigned int __count;
    int __owner;

    unsigned int __nusers;



    int __kind;

    short __spins;
    short __elision;
    __pthread_list_t __list;
# 125 "/usr/include/x86_64-linux-gnu/bits/pthreadtypes.h" 3 4
  } __data;
  char __size[40];
  long int __align;
} pthread_mutex_t;

typedef union
{
  char __size[4];
  int __align;
} pthread_mutexattr_t;




typedef union
{
  struct
  {
    int __lock;
    unsigned int __futex;
    __extension__ unsigned long long int __total_seq;
    __extension__ unsigned long long int __wakeup_seq;
    __extension__ unsigned long long int __woken_seq;
    void *__mutex;
    unsigned int __nwaiters;
    unsigned int __broadcast_seq;
  } __data;
  char __size[48];
  __extension__ long long int __align;
} pthread_cond_t;

typedef union
{
  char __size[4];
  int __align;
} pthread_condattr_t;



typedef unsigned int pthread_key_t;



typedef int pthread_once_t;





typedef union
{

  struct
  {
    int __lock;
    unsigned int __nr_readers;
    unsigned int __readers_wakeup;
    unsigned int __writer_wakeup;
    unsigned int __nr_readers_queued;
    unsigned int __nr_writers_queued;
    int __writer;
    int __shared;
    signed char __rwelision;




    unsigned char __pad1[7];


    unsigned long int __pad2;


    unsigned int __flags;

  } __data;
# 220 "/usr/include/x86_64-linux-gnu/bits/pthreadtypes.h" 3 4
  char __size[56];
  long int __align;
} pthread_rwlock_t;

typedef union
{
  char __size[8];
  long int __align;
} pthread_rwlockattr_t;





typedef volatile int pthread_spinlock_t;




typedef union
{
  char __size[32];
  long int __align;
} pthread_barrier_t;

typedef union
{
  char __size[4];
  int __align;
} pthread_barrierattr_t;
# 271 "/usr/include/x86_64-linux-gnu/sys/types.h" 2 3 4


}
# 26 "/usr/include/x86_64-linux-gnu/bits/uio.h" 2 3 4
# 43 "/usr/include/x86_64-linux-gnu/bits/uio.h" 3 4
struct iovec
  {
    void *iov_base;
    size_t iov_len;
  };
# 39 "/usr/include/x86_64-linux-gnu/bits/fcntl-linux.h" 2 3 4
# 258 "/usr/include/x86_64-linux-gnu/bits/fcntl-linux.h" 3 4
enum __pid_type
  {
    F_OWNER_TID = 0,
    F_OWNER_PID,
    F_OWNER_PGRP,
    F_OWNER_GID = F_OWNER_PGRP
  };


struct f_owner_ex
  {
    enum __pid_type type;
    __pid_t pid;
  };
# 333 "/usr/include/x86_64-linux-gnu/bits/fcntl-linux.h" 3 4
struct file_handle
{
  unsigned int handle_bytes;
  int handle_type;

  unsigned char f_handle[0];
};
# 363 "/usr/include/x86_64-linux-gnu/bits/fcntl-linux.h" 3 4
extern "C" {




extern ssize_t readahead (int __fd, __off64_t __offset, size_t __count)
    throw ();






extern int sync_file_range (int __fd, __off64_t __offset, __off64_t __count,
       unsigned int __flags);






extern ssize_t vmsplice (int __fdout, const struct iovec *__iov,
    size_t __count, unsigned int __flags);





extern ssize_t splice (int __fdin, __off64_t *__offin, int __fdout,
         __off64_t *__offout, size_t __len,
         unsigned int __flags);





extern ssize_t tee (int __fdin, int __fdout, size_t __len,
      unsigned int __flags);






extern int fallocate (int __fd, int __mode, __off_t __offset, __off_t __len);
# 418 "/usr/include/x86_64-linux-gnu/bits/fcntl-linux.h" 3 4
extern int fallocate64 (int __fd, int __mode, __off64_t __offset,
   __off64_t __len);




extern int name_to_handle_at (int __dfd, const char *__name,
         struct file_handle *__handle, int *__mnt_id,
         int __flags) throw ();





extern int open_by_handle_at (int __mountdirfd, struct file_handle *__handle,
         int __flags);



}
# 61 "/usr/include/x86_64-linux-gnu/bits/fcntl.h" 2 3 4
# 36 "/usr/include/fcntl.h" 2 3 4
# 76 "/usr/include/fcntl.h" 3 4
# 1 "/usr/include/time.h" 1 3 4
# 77 "/usr/include/fcntl.h" 2 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/stat.h" 1 3 4
# 46 "/usr/include/x86_64-linux-gnu/bits/stat.h" 3 4
struct stat
  {
    __dev_t st_dev;




    __ino_t st_ino;







    __nlink_t st_nlink;
    __mode_t st_mode;

    __uid_t st_uid;
    __gid_t st_gid;

    int __pad0;

    __dev_t st_rdev;




    __off_t st_size;



    __blksize_t st_blksize;

    __blkcnt_t st_blocks;
# 91 "/usr/include/x86_64-linux-gnu/bits/stat.h" 3 4
    struct timespec st_atim;
    struct timespec st_mtim;
    struct timespec st_ctim;
# 106 "/usr/include/x86_64-linux-gnu/bits/stat.h" 3 4
    __syscall_slong_t __glibc_reserved[3];
# 115 "/usr/include/x86_64-linux-gnu/bits/stat.h" 3 4
  };



struct stat64
  {
    __dev_t st_dev;

    __ino64_t st_ino;
    __nlink_t st_nlink;
    __mode_t st_mode;






    __uid_t st_uid;
    __gid_t st_gid;

    int __pad0;
    __dev_t st_rdev;
    __off_t st_size;





    __blksize_t st_blksize;
    __blkcnt64_t st_blocks;







    struct timespec st_atim;
    struct timespec st_mtim;
    struct timespec st_ctim;
# 164 "/usr/include/x86_64-linux-gnu/bits/stat.h" 3 4
    __syscall_slong_t __glibc_reserved[3];



  };
# 78 "/usr/include/fcntl.h" 2 3 4
# 146 "/usr/include/fcntl.h" 3 4
extern int fcntl (int __fd, int __cmd, ...);
# 156 "/usr/include/fcntl.h" 3 4
extern int open (const char *__file, int __oflag, ...) __attribute__ ((__nonnull__ (1)));
# 166 "/usr/include/fcntl.h" 3 4
extern int open64 (const char *__file, int __oflag, ...) __attribute__ ((__nonnull__ (1)));
# 180 "/usr/include/fcntl.h" 3 4
extern int openat (int __fd, const char *__file, int __oflag, ...)
     __attribute__ ((__nonnull__ (2)));
# 191 "/usr/include/fcntl.h" 3 4
extern int openat64 (int __fd, const char *__file, int __oflag, ...)
     __attribute__ ((__nonnull__ (2)));
# 202 "/usr/include/fcntl.h" 3 4
extern int creat (const char *__file, mode_t __mode) __attribute__ ((__nonnull__ (1)));
# 212 "/usr/include/fcntl.h" 3 4
extern int creat64 (const char *__file, mode_t __mode) __attribute__ ((__nonnull__ (1)));
# 248 "/usr/include/fcntl.h" 3 4
extern int posix_fadvise (int __fd, off_t __offset, off_t __len,
     int __advise) throw ();
# 260 "/usr/include/fcntl.h" 3 4
extern int posix_fadvise64 (int __fd, off64_t __offset, off64_t __len,
       int __advise) throw ();
# 270 "/usr/include/fcntl.h" 3 4
extern int posix_fallocate (int __fd, off_t __offset, off_t __len);
# 281 "/usr/include/fcntl.h" 3 4
extern int posix_fallocate64 (int __fd, off64_t __offset, off64_t __len);







# 1 "/usr/include/x86_64-linux-gnu/bits/fcntl2.h" 1 3 4
# 26 "/usr/include/x86_64-linux-gnu/bits/fcntl2.h" 3 4
extern int __open_2 (const char *__path, int __oflag) __attribute__ ((__nonnull__ (1)));
extern int __open_alias (const char *__path, int __oflag, ...) __asm__ ("" "open")
               __attribute__ ((__nonnull__ (1)));






extern void __open_too_many_args (void) __attribute__((__error__ ("open can be called either with 2 or 3 arguments, not more")))
                                                                  ;
extern void __open_missing_mode (void) __attribute__((__error__ ("open with O_CREAT or O_TMPFILE in second argument needs 3 arguments")))
                                                                            ;

extern __inline __attribute__ ((__always_inline__)) __attribute__ ((__gnu_inline__)) __attribute__ ((__artificial__)) int
open (const char *__path, int __oflag, ...)
{
  if (__builtin_va_arg_pack_len () > 1)
    __open_too_many_args ();

  if (__builtin_constant_p (__oflag))
    {
      if ((((__oflag) & 0100) != 0 || ((__oflag) & (020000000 | 0200000)) == (020000000 | 0200000)) && __builtin_va_arg_pack_len () < 1)
 {
   __open_missing_mode ();
   return __open_2 (__path, __oflag);
 }
      return __open_alias (__path, __oflag, __builtin_va_arg_pack ());
    }

  if (__builtin_va_arg_pack_len () < 1)
    return __open_2 (__path, __oflag);

  return __open_alias (__path, __oflag, __builtin_va_arg_pack ());
}



extern int __open64_2 (const char *__path, int __oflag) __attribute__ ((__nonnull__ (1)));
extern int __open64_alias (const char *__path, int __oflag, ...) __asm__ ("" "open64")
                   __attribute__ ((__nonnull__ (1)));
extern void __open64_too_many_args (void) __attribute__((__error__ ("open64 can be called either with 2 or 3 arguments, not more")))
                                                                    ;
extern void __open64_missing_mode (void) __attribute__((__error__ ("open64 with O_CREAT or O_TMPFILE in second argument needs 3 arguments")))
                                                                              ;

extern __inline __attribute__ ((__always_inline__)) __attribute__ ((__gnu_inline__)) __attribute__ ((__artificial__)) int
open64 (const char *__path, int __oflag, ...)
{
  if (__builtin_va_arg_pack_len () > 1)
    __open64_too_many_args ();

  if (__builtin_constant_p (__oflag))
    {
      if ((((__oflag) & 0100) != 0 || ((__oflag) & (020000000 | 0200000)) == (020000000 | 0200000)) && __builtin_va_arg_pack_len () < 1)
 {
   __open64_missing_mode ();
   return __open64_2 (__path, __oflag);
 }
      return __open64_alias (__path, __oflag, __builtin_va_arg_pack ());
    }

  if (__builtin_va_arg_pack_len () < 1)
    return __open64_2 (__path, __oflag);

  return __open64_alias (__path, __oflag, __builtin_va_arg_pack ());
}





extern int __openat_2 (int __fd, const char *__path, int __oflag)
     __attribute__ ((__nonnull__ (2)));
extern int __openat_alias (int __fd, const char *__path, int __oflag, ...) __asm__ ("" "openat")

     __attribute__ ((__nonnull__ (2)));
# 111 "/usr/include/x86_64-linux-gnu/bits/fcntl2.h" 3 4
extern void __openat_too_many_args (void) __attribute__((__error__ ("openat can be called either with 3 or 4 arguments, not more")))
                                                                    ;
extern void __openat_missing_mode (void) __attribute__((__error__ ("openat with O_CREAT or O_TMPFILE in third argument needs 4 arguments")))
                                                                             ;

extern __inline __attribute__ ((__always_inline__)) __attribute__ ((__gnu_inline__)) __attribute__ ((__artificial__)) int
openat (int __fd, const char *__path, int __oflag, ...)
{
  if (__builtin_va_arg_pack_len () > 1)
    __openat_too_many_args ();

  if (__builtin_constant_p (__oflag))
    {
      if ((((__oflag) & 0100) != 0 || ((__oflag) & (020000000 | 0200000)) == (020000000 | 0200000)) && __builtin_va_arg_pack_len () < 1)
 {
   __openat_missing_mode ();
   return __openat_2 (__fd, __path, __oflag);
 }
      return __openat_alias (__fd, __path, __oflag, __builtin_va_arg_pack ());
    }

  if (__builtin_va_arg_pack_len () < 1)
    return __openat_2 (__fd, __path, __oflag);

  return __openat_alias (__fd, __path, __oflag, __builtin_va_arg_pack ());
}



extern int __openat64_2 (int __fd, const char *__path, int __oflag)
     __attribute__ ((__nonnull__ (2)));
extern int __openat64_alias (int __fd, const char *__path, int __oflag, ...) __asm__ ("" "openat64")

     __attribute__ ((__nonnull__ (2)));
extern void __openat64_too_many_args (void) __attribute__((__error__ ("openat64 can be called either with 3 or 4 arguments, not more")))
                                                                      ;
extern void __openat64_missing_mode (void) __attribute__((__error__ ("openat64 with O_CREAT or O_TMPFILE in third argument needs 4 arguments")))
                                                                               ;

extern __inline __attribute__ ((__always_inline__)) __attribute__ ((__gnu_inline__)) __attribute__ ((__artificial__)) int
openat64 (int __fd, const char *__path, int __oflag, ...)
{
  if (__builtin_va_arg_pack_len () > 1)
    __openat64_too_many_args ();

  if (__builtin_constant_p (__oflag))
    {
      if ((((__oflag) & 0100) != 0 || ((__oflag) & (020000000 | 0200000)) == (020000000 | 0200000)) && __builtin_va_arg_pack_len () < 1)
 {
   __openat64_missing_mode ();
   return __openat64_2 (__fd, __path, __oflag);
 }
      return __openat64_alias (__fd, __path, __oflag, __builtin_va_arg_pack ());
    }

  if (__builtin_va_arg_pack_len () < 1)
    return __openat64_2 (__fd, __path, __oflag);

  return __openat64_alias (__fd, __path, __oflag, __builtin_va_arg_pack ());
}
# 290 "/usr/include/fcntl.h" 2 3 4


}
# 64 "/usr/local/cuda/targets/x86_64-linux/include/nvtx3/nvtxDetail/nvtxImpl.h" 2
# 1 "/usr/include/stdlib.h" 1 3 4
# 32 "/usr/include/stdlib.h" 3 4
# 1 "/usr/lib/gcc/x86_64-linux-gnu/5/include/stddef.h" 1 3 4
# 33 "/usr/include/stdlib.h" 2 3 4

extern "C" {






# 1 "/usr/include/x86_64-linux-gnu/bits/waitflags.h" 1 3 4
# 50 "/usr/include/x86_64-linux-gnu/bits/waitflags.h" 3 4
typedef enum
{
  P_ALL,
  P_PID,
  P_PGID
} idtype_t;
# 42 "/usr/include/stdlib.h" 2 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/waitstatus.h" 1 3 4
# 66 "/usr/include/x86_64-linux-gnu/bits/waitstatus.h" 3 4
union wait
  {
    int w_status;
    struct
      {

 unsigned int __w_termsig:7;
 unsigned int __w_coredump:1;
 unsigned int __w_retcode:8;
 unsigned int:16;







      } __wait_terminated;
    struct
      {

 unsigned int __w_stopval:8;
 unsigned int __w_stopsig:8;
 unsigned int:16;






      } __wait_stopped;
  };
# 43 "/usr/include/stdlib.h" 2 3 4
# 95 "/usr/include/stdlib.h" 3 4


typedef struct
  {
    int quot;
    int rem;
  } div_t;



typedef struct
  {
    long int quot;
    long int rem;
  } ldiv_t;







__extension__ typedef struct
  {
    long long int quot;
    long long int rem;
  } lldiv_t;


# 139 "/usr/include/stdlib.h" 3 4
extern size_t __ctype_get_mb_cur_max (void) throw () __attribute__ ((__warn_unused_result__));




extern double atof (const char *__nptr)
     throw () __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1))) __attribute__ ((__warn_unused_result__));

extern int atoi (const char *__nptr)
     throw () __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1))) __attribute__ ((__warn_unused_result__));

extern long int atol (const char *__nptr)
     throw () __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1))) __attribute__ ((__warn_unused_result__));





__extension__ extern long long int atoll (const char *__nptr)
     throw () __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1))) __attribute__ ((__warn_unused_result__));





extern double strtod (const char *__restrict __nptr,
        char **__restrict __endptr)
     throw () __attribute__ ((__nonnull__ (1)));





extern float strtof (const char *__restrict __nptr,
       char **__restrict __endptr) throw () __attribute__ ((__nonnull__ (1)));

extern long double strtold (const char *__restrict __nptr,
       char **__restrict __endptr)
     throw () __attribute__ ((__nonnull__ (1)));





extern long int strtol (const char *__restrict __nptr,
   char **__restrict __endptr, int __base)
     throw () __attribute__ ((__nonnull__ (1)));

extern unsigned long int strtoul (const char *__restrict __nptr,
      char **__restrict __endptr, int __base)
     throw () __attribute__ ((__nonnull__ (1)));




__extension__
extern long long int strtoq (const char *__restrict __nptr,
        char **__restrict __endptr, int __base)
     throw () __attribute__ ((__nonnull__ (1)));

__extension__
extern unsigned long long int strtouq (const char *__restrict __nptr,
           char **__restrict __endptr, int __base)
     throw () __attribute__ ((__nonnull__ (1)));





__extension__
extern long long int strtoll (const char *__restrict __nptr,
         char **__restrict __endptr, int __base)
     throw () __attribute__ ((__nonnull__ (1)));

__extension__
extern unsigned long long int strtoull (const char *__restrict __nptr,
     char **__restrict __endptr, int __base)
     throw () __attribute__ ((__nonnull__ (1)));

# 235 "/usr/include/stdlib.h" 3 4
# 1 "/usr/include/xlocale.h" 1 3 4
# 27 "/usr/include/xlocale.h" 3 4
typedef struct __locale_struct
{

  struct __locale_data *__locales[13];


  const unsigned short int *__ctype_b;
  const int *__ctype_tolower;
  const int *__ctype_toupper;


  const char *__names[13];
} *__locale_t;


typedef __locale_t locale_t;
# 236 "/usr/include/stdlib.h" 2 3 4



extern long int strtol_l (const char *__restrict __nptr,
     char **__restrict __endptr, int __base,
     __locale_t __loc) throw () __attribute__ ((__nonnull__ (1, 4)));

extern unsigned long int strtoul_l (const char *__restrict __nptr,
        char **__restrict __endptr,
        int __base, __locale_t __loc)
     throw () __attribute__ ((__nonnull__ (1, 4)));

__extension__
extern long long int strtoll_l (const char *__restrict __nptr,
    char **__restrict __endptr, int __base,
    __locale_t __loc)
     throw () __attribute__ ((__nonnull__ (1, 4)));

__extension__
extern unsigned long long int strtoull_l (const char *__restrict __nptr,
       char **__restrict __endptr,
       int __base, __locale_t __loc)
     throw () __attribute__ ((__nonnull__ (1, 4)));

extern double strtod_l (const char *__restrict __nptr,
   char **__restrict __endptr, __locale_t __loc)
     throw () __attribute__ ((__nonnull__ (1, 3)));

extern float strtof_l (const char *__restrict __nptr,
         char **__restrict __endptr, __locale_t __loc)
     throw () __attribute__ ((__nonnull__ (1, 3)));

extern long double strtold_l (const char *__restrict __nptr,
         char **__restrict __endptr,
         __locale_t __loc)
     throw () __attribute__ ((__nonnull__ (1, 3)));





extern __inline __attribute__ ((__gnu_inline__)) int
__attribute__ ((__leaf__)) atoi (const char *__nptr) throw ()
{
  return (int) strtol (__nptr, (char **) __null, 10);
}
extern __inline __attribute__ ((__gnu_inline__)) long int
__attribute__ ((__leaf__)) atol (const char *__nptr) throw ()
{
  return strtol (__nptr, (char **) __null, 10);
}




__extension__ extern __inline __attribute__ ((__gnu_inline__)) long long int
__attribute__ ((__leaf__)) atoll (const char *__nptr) throw ()
{
  return strtoll (__nptr, (char **) __null, 10);
}

# 305 "/usr/include/stdlib.h" 3 4
extern char *l64a (long int __n) throw () __attribute__ ((__warn_unused_result__));


extern long int a64l (const char *__s)
     throw () __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1))) __attribute__ ((__warn_unused_result__));
# 321 "/usr/include/stdlib.h" 3 4
extern long int random (void) throw ();


extern void srandom (unsigned int __seed) throw ();





extern char *initstate (unsigned int __seed, char *__statebuf,
   size_t __statelen) throw () __attribute__ ((__nonnull__ (2)));



extern char *setstate (char *__statebuf) throw () __attribute__ ((__nonnull__ (1)));







struct random_data
  {
    int32_t *fptr;
    int32_t *rptr;
    int32_t *state;
    int rand_type;
    int rand_deg;
    int rand_sep;
    int32_t *end_ptr;
  };

extern int random_r (struct random_data *__restrict __buf,
       int32_t *__restrict __result) throw () __attribute__ ((__nonnull__ (1, 2)));

extern int srandom_r (unsigned int __seed, struct random_data *__buf)
     throw () __attribute__ ((__nonnull__ (2)));

extern int initstate_r (unsigned int __seed, char *__restrict __statebuf,
   size_t __statelen,
   struct random_data *__restrict __buf)
     throw () __attribute__ ((__nonnull__ (2, 4)));

extern int setstate_r (char *__restrict __statebuf,
         struct random_data *__restrict __buf)
     throw () __attribute__ ((__nonnull__ (1, 2)));






extern int rand (void) throw ();

extern void srand (unsigned int __seed) throw ();




extern int rand_r (unsigned int *__seed) throw ();







extern double drand48 (void) throw ();
extern double erand48 (unsigned short int __xsubi[3]) throw () __attribute__ ((__nonnull__ (1)));


extern long int lrand48 (void) throw ();
extern long int nrand48 (unsigned short int __xsubi[3])
     throw () __attribute__ ((__nonnull__ (1)));


extern long int mrand48 (void) throw ();
extern long int jrand48 (unsigned short int __xsubi[3])
     throw () __attribute__ ((__nonnull__ (1)));


extern void srand48 (long int __seedval) throw ();
extern unsigned short int *seed48 (unsigned short int __seed16v[3])
     throw () __attribute__ ((__nonnull__ (1)));
extern void lcong48 (unsigned short int __param[7]) throw () __attribute__ ((__nonnull__ (1)));





struct drand48_data
  {
    unsigned short int __x[3];
    unsigned short int __old_x[3];
    unsigned short int __c;
    unsigned short int __init;
    __extension__ unsigned long long int __a;

  };


extern int drand48_r (struct drand48_data *__restrict __buffer,
        double *__restrict __result) throw () __attribute__ ((__nonnull__ (1, 2)));
extern int erand48_r (unsigned short int __xsubi[3],
        struct drand48_data *__restrict __buffer,
        double *__restrict __result) throw () __attribute__ ((__nonnull__ (1, 2)));


extern int lrand48_r (struct drand48_data *__restrict __buffer,
        long int *__restrict __result)
     throw () __attribute__ ((__nonnull__ (1, 2)));
extern int nrand48_r (unsigned short int __xsubi[3],
        struct drand48_data *__restrict __buffer,
        long int *__restrict __result)
     throw () __attribute__ ((__nonnull__ (1, 2)));


extern int mrand48_r (struct drand48_data *__restrict __buffer,
        long int *__restrict __result)
     throw () __attribute__ ((__nonnull__ (1, 2)));
extern int jrand48_r (unsigned short int __xsubi[3],
        struct drand48_data *__restrict __buffer,
        long int *__restrict __result)
     throw () __attribute__ ((__nonnull__ (1, 2)));


extern int srand48_r (long int __seedval, struct drand48_data *__buffer)
     throw () __attribute__ ((__nonnull__ (2)));

extern int seed48_r (unsigned short int __seed16v[3],
       struct drand48_data *__buffer) throw () __attribute__ ((__nonnull__ (1, 2)));

extern int lcong48_r (unsigned short int __param[7],
        struct drand48_data *__buffer)
     throw () __attribute__ ((__nonnull__ (1, 2)));









extern void *malloc (size_t __size) throw () __attribute__ ((__malloc__)) __attribute__ ((__warn_unused_result__));

extern void *calloc (size_t __nmemb, size_t __size)
     throw () __attribute__ ((__malloc__)) __attribute__ ((__warn_unused_result__));










extern void *realloc (void *__ptr, size_t __size)
     throw () __attribute__ ((__warn_unused_result__));

extern void free (void *__ptr) throw ();




extern void cfree (void *__ptr) throw ();



# 1 "/usr/include/alloca.h" 1 3 4
# 24 "/usr/include/alloca.h" 3 4
# 1 "/usr/lib/gcc/x86_64-linux-gnu/5/include/stddef.h" 1 3 4
# 25 "/usr/include/alloca.h" 2 3 4

extern "C" {





extern void *alloca (size_t __size) throw ();





}
# 493 "/usr/include/stdlib.h" 2 3 4





extern void *valloc (size_t __size) throw () __attribute__ ((__malloc__)) __attribute__ ((__warn_unused_result__));




extern int posix_memalign (void **__memptr, size_t __alignment, size_t __size)
     throw () __attribute__ ((__nonnull__ (1))) __attribute__ ((__warn_unused_result__));




extern void *aligned_alloc (size_t __alignment, size_t __size)
     throw () __attribute__ ((__malloc__)) __attribute__ ((__alloc_size__ (2))) __attribute__ ((__warn_unused_result__));




extern void abort (void) throw () __attribute__ ((__noreturn__));



extern int atexit (void (*__func) (void)) throw () __attribute__ ((__nonnull__ (1)));




extern "C++" int at_quick_exit (void (*__func) (void))
     throw () __asm ("at_quick_exit") __attribute__ ((__nonnull__ (1)));









extern int on_exit (void (*__func) (int __status, void *__arg), void *__arg)
     throw () __attribute__ ((__nonnull__ (1)));






extern void exit (int __status) throw () __attribute__ ((__noreturn__));





extern void quick_exit (int __status) throw () __attribute__ ((__noreturn__));







extern void _Exit (int __status) throw () __attribute__ ((__noreturn__));






extern char *getenv (const char *__name) throw () __attribute__ ((__nonnull__ (1))) __attribute__ ((__warn_unused_result__));





extern char *secure_getenv (const char *__name)
     throw () __attribute__ ((__nonnull__ (1))) __attribute__ ((__warn_unused_result__));






extern int putenv (char *__string) throw () __attribute__ ((__nonnull__ (1)));





extern int setenv (const char *__name, const char *__value, int __replace)
     throw () __attribute__ ((__nonnull__ (2)));


extern int unsetenv (const char *__name) throw () __attribute__ ((__nonnull__ (1)));






extern int clearenv (void) throw ();
# 606 "/usr/include/stdlib.h" 3 4
extern char *mktemp (char *__template) throw () __attribute__ ((__nonnull__ (1)));
# 619 "/usr/include/stdlib.h" 3 4
extern int mkstemp (char *__template) __attribute__ ((__nonnull__ (1))) __attribute__ ((__warn_unused_result__));
# 629 "/usr/include/stdlib.h" 3 4
extern int mkstemp64 (char *__template) __attribute__ ((__nonnull__ (1))) __attribute__ ((__warn_unused_result__));
# 641 "/usr/include/stdlib.h" 3 4
extern int mkstemps (char *__template, int __suffixlen) __attribute__ ((__nonnull__ (1))) __attribute__ ((__warn_unused_result__));
# 651 "/usr/include/stdlib.h" 3 4
extern int mkstemps64 (char *__template, int __suffixlen)
     __attribute__ ((__nonnull__ (1))) __attribute__ ((__warn_unused_result__));
# 662 "/usr/include/stdlib.h" 3 4
extern char *mkdtemp (char *__template) throw () __attribute__ ((__nonnull__ (1))) __attribute__ ((__warn_unused_result__));
# 673 "/usr/include/stdlib.h" 3 4
extern int mkostemp (char *__template, int __flags) __attribute__ ((__nonnull__ (1))) __attribute__ ((__warn_unused_result__));
# 683 "/usr/include/stdlib.h" 3 4
extern int mkostemp64 (char *__template, int __flags) __attribute__ ((__nonnull__ (1))) __attribute__ ((__warn_unused_result__));
# 693 "/usr/include/stdlib.h" 3 4
extern int mkostemps (char *__template, int __suffixlen, int __flags)
     __attribute__ ((__nonnull__ (1))) __attribute__ ((__warn_unused_result__));
# 705 "/usr/include/stdlib.h" 3 4
extern int mkostemps64 (char *__template, int __suffixlen, int __flags)
     __attribute__ ((__nonnull__ (1))) __attribute__ ((__warn_unused_result__));









extern int system (const char *__command) __attribute__ ((__warn_unused_result__));






extern char *canonicalize_file_name (const char *__name)
     throw () __attribute__ ((__nonnull__ (1))) __attribute__ ((__warn_unused_result__));
# 733 "/usr/include/stdlib.h" 3 4
extern char *realpath (const char *__restrict __name,
         char *__restrict __resolved) throw () __attribute__ ((__warn_unused_result__));






typedef int (*__compar_fn_t) (const void *, const void *);


typedef __compar_fn_t comparison_fn_t;



typedef int (*__compar_d_fn_t) (const void *, const void *, void *);





extern void *bsearch (const void *__key, const void *__base,
        size_t __nmemb, size_t __size, __compar_fn_t __compar)
     __attribute__ ((__nonnull__ (1, 2, 5))) __attribute__ ((__warn_unused_result__));


# 1 "/usr/include/x86_64-linux-gnu/bits/stdlib-bsearch.h" 1 3 4
# 19 "/usr/include/x86_64-linux-gnu/bits/stdlib-bsearch.h" 3 4
extern __inline __attribute__ ((__gnu_inline__)) void *
bsearch (const void *__key, const void *__base, size_t __nmemb, size_t __size,
  __compar_fn_t __compar)
{
  size_t __l, __u, __idx;
  const void *__p;
  int __comparison;

  __l = 0;
  __u = __nmemb;
  while (__l < __u)
    {
      __idx = (__l + __u) / 2;
      __p = (void *) (((const char *) __base) + (__idx * __size));
      __comparison = (*__compar) (__key, __p);
      if (__comparison < 0)
 __u = __idx;
      else if (__comparison > 0)
 __l = __idx + 1;
      else
 return (void *) __p;
    }

  return __null;
}
# 760 "/usr/include/stdlib.h" 2 3 4




extern void qsort (void *__base, size_t __nmemb, size_t __size,
     __compar_fn_t __compar) __attribute__ ((__nonnull__ (1, 4)));

extern void qsort_r (void *__base, size_t __nmemb, size_t __size,
       __compar_d_fn_t __compar, void *__arg)
  __attribute__ ((__nonnull__ (1, 4)));




extern int abs (int __x) throw () __attribute__ ((__const__)) __attribute__ ((__warn_unused_result__));
extern long int labs (long int __x) throw () __attribute__ ((__const__)) __attribute__ ((__warn_unused_result__));



__extension__ extern long long int llabs (long long int __x)
     throw () __attribute__ ((__const__)) __attribute__ ((__warn_unused_result__));







extern div_t div (int __numer, int __denom)
     throw () __attribute__ ((__const__)) __attribute__ ((__warn_unused_result__));
extern ldiv_t ldiv (long int __numer, long int __denom)
     throw () __attribute__ ((__const__)) __attribute__ ((__warn_unused_result__));




__extension__ extern lldiv_t lldiv (long long int __numer,
        long long int __denom)
     throw () __attribute__ ((__const__)) __attribute__ ((__warn_unused_result__));

# 811 "/usr/include/stdlib.h" 3 4
extern char *ecvt (double __value, int __ndigit, int *__restrict __decpt,
     int *__restrict __sign) throw () __attribute__ ((__nonnull__ (3, 4))) __attribute__ ((__warn_unused_result__));




extern char *fcvt (double __value, int __ndigit, int *__restrict __decpt,
     int *__restrict __sign) throw () __attribute__ ((__nonnull__ (3, 4))) __attribute__ ((__warn_unused_result__));




extern char *gcvt (double __value, int __ndigit, char *__buf)
     throw () __attribute__ ((__nonnull__ (3))) __attribute__ ((__warn_unused_result__));




extern char *qecvt (long double __value, int __ndigit,
      int *__restrict __decpt, int *__restrict __sign)
     throw () __attribute__ ((__nonnull__ (3, 4))) __attribute__ ((__warn_unused_result__));
extern char *qfcvt (long double __value, int __ndigit,
      int *__restrict __decpt, int *__restrict __sign)
     throw () __attribute__ ((__nonnull__ (3, 4))) __attribute__ ((__warn_unused_result__));
extern char *qgcvt (long double __value, int __ndigit, char *__buf)
     throw () __attribute__ ((__nonnull__ (3))) __attribute__ ((__warn_unused_result__));




extern int ecvt_r (double __value, int __ndigit, int *__restrict __decpt,
     int *__restrict __sign, char *__restrict __buf,
     size_t __len) throw () __attribute__ ((__nonnull__ (3, 4, 5)));
extern int fcvt_r (double __value, int __ndigit, int *__restrict __decpt,
     int *__restrict __sign, char *__restrict __buf,
     size_t __len) throw () __attribute__ ((__nonnull__ (3, 4, 5)));

extern int qecvt_r (long double __value, int __ndigit,
      int *__restrict __decpt, int *__restrict __sign,
      char *__restrict __buf, size_t __len)
     throw () __attribute__ ((__nonnull__ (3, 4, 5)));
extern int qfcvt_r (long double __value, int __ndigit,
      int *__restrict __decpt, int *__restrict __sign,
      char *__restrict __buf, size_t __len)
     throw () __attribute__ ((__nonnull__ (3, 4, 5)));






extern int mblen (const char *__s, size_t __n) throw ();


extern int mbtowc (wchar_t *__restrict __pwc,
     const char *__restrict __s, size_t __n) throw ();


extern int wctomb (char *__s, wchar_t __wchar) throw ();



extern size_t mbstowcs (wchar_t *__restrict __pwcs,
   const char *__restrict __s, size_t __n) throw ();

extern size_t wcstombs (char *__restrict __s,
   const wchar_t *__restrict __pwcs, size_t __n)
     throw ();








extern int rpmatch (const char *__response) throw () __attribute__ ((__nonnull__ (1))) __attribute__ ((__warn_unused_result__));
# 898 "/usr/include/stdlib.h" 3 4
extern int getsubopt (char **__restrict __optionp,
        char *const *__restrict __tokens,
        char **__restrict __valuep)
     throw () __attribute__ ((__nonnull__ (1, 2, 3))) __attribute__ ((__warn_unused_result__));





extern void setkey (const char *__key) throw () __attribute__ ((__nonnull__ (1)));







extern int posix_openpt (int __oflag) __attribute__ ((__warn_unused_result__));







extern int grantpt (int __fd) throw ();



extern int unlockpt (int __fd) throw ();




extern char *ptsname (int __fd) throw () __attribute__ ((__warn_unused_result__));






extern int ptsname_r (int __fd, char *__buf, size_t __buflen)
     throw () __attribute__ ((__nonnull__ (2)));


extern int getpt (void);






extern int getloadavg (double __loadavg[], int __nelem)
     throw () __attribute__ ((__nonnull__ (1)));


# 1 "/usr/include/x86_64-linux-gnu/bits/stdlib-float.h" 1 3 4
# 24 "/usr/include/x86_64-linux-gnu/bits/stdlib-float.h" 3 4

extern __inline __attribute__ ((__gnu_inline__)) double
__attribute__ ((__leaf__)) atof (const char *__nptr) throw ()
{
  return strtod (__nptr, (char **) __null);
}

# 955 "/usr/include/stdlib.h" 2 3 4



# 1 "/usr/include/x86_64-linux-gnu/bits/stdlib.h" 1 3 4
# 23 "/usr/include/x86_64-linux-gnu/bits/stdlib.h" 3 4
extern char *__realpath_chk (const char *__restrict __name,
        char *__restrict __resolved,
        size_t __resolvedlen) throw () __attribute__ ((__warn_unused_result__));
extern char *__realpath_alias (const char *__restrict __name, char *__restrict __resolved) throw () __asm__ ("" "realpath")

                                                 __attribute__ ((__warn_unused_result__));
extern char *__realpath_chk_warn (const char *__restrict __name, char *__restrict __resolved, size_t __resolvedlen) throw () __asm__ ("" "__realpath_chk")


                                                __attribute__ ((__warn_unused_result__))
     __attribute__((__warning__ ("second argument of realpath must be either NULL or at " "least PATH_MAX bytes long buffer")))
                                      ;

extern __inline __attribute__ ((__always_inline__)) __attribute__ ((__gnu_inline__)) __attribute__ ((__artificial__)) __attribute__ ((__warn_unused_result__)) char *
__attribute__ ((__leaf__)) realpath (const char *__restrict __name, char *__restrict __resolved) throw ()
{
  if (__builtin_object_size (__resolved, 2 > 1) != (size_t) -1)
    {

      if (__builtin_object_size (__resolved, 2 > 1) < 4096)
 return __realpath_chk_warn (__name, __resolved, __builtin_object_size (__resolved, 2 > 1));

      return __realpath_chk (__name, __resolved, __builtin_object_size (__resolved, 2 > 1));
    }

  return __realpath_alias (__name, __resolved);
}


extern int __ptsname_r_chk (int __fd, char *__buf, size_t __buflen,
       size_t __nreal) throw () __attribute__ ((__nonnull__ (2)));
extern int __ptsname_r_alias (int __fd, char *__buf, size_t __buflen) throw () __asm__ ("" "ptsname_r")

     __attribute__ ((__nonnull__ (2)));
extern int __ptsname_r_chk_warn (int __fd, char *__buf, size_t __buflen, size_t __nreal) throw () __asm__ ("" "__ptsname_r_chk")


     __attribute__ ((__nonnull__ (2))) __attribute__((__warning__ ("ptsname_r called with buflen bigger than " "size of buf")))
                   ;

extern __inline __attribute__ ((__always_inline__)) __attribute__ ((__gnu_inline__)) __attribute__ ((__artificial__)) int
__attribute__ ((__leaf__)) ptsname_r (int __fd, char *__buf, size_t __buflen) throw ()
{
  if (__builtin_object_size (__buf, 2 > 1) != (size_t) -1)
    {
      if (!__builtin_constant_p (__buflen))
 return __ptsname_r_chk (__fd, __buf, __buflen, __builtin_object_size (__buf, 2 > 1));
      if (__buflen > __builtin_object_size (__buf, 2 > 1))
 return __ptsname_r_chk_warn (__fd, __buf, __buflen, __builtin_object_size (__buf, 2 > 1));
    }
  return __ptsname_r_alias (__fd, __buf, __buflen);
}


extern int __wctomb_chk (char *__s, wchar_t __wchar, size_t __buflen)
  throw () __attribute__ ((__warn_unused_result__));
extern int __wctomb_alias (char *__s, wchar_t __wchar) throw () __asm__ ("" "wctomb")
              __attribute__ ((__warn_unused_result__));

extern __inline __attribute__ ((__always_inline__)) __attribute__ ((__gnu_inline__)) __attribute__ ((__artificial__)) __attribute__ ((__warn_unused_result__)) int
__attribute__ ((__leaf__)) wctomb (char *__s, wchar_t __wchar) throw ()
{







  if (__builtin_object_size (__s, 2 > 1) != (size_t) -1 && 16 > __builtin_object_size (__s, 2 > 1))
    return __wctomb_chk (__s, __wchar, __builtin_object_size (__s, 2 > 1));
  return __wctomb_alias (__s, __wchar);
}


extern size_t __mbstowcs_chk (wchar_t *__restrict __dst,
         const char *__restrict __src,
         size_t __len, size_t __dstlen) throw ();
extern size_t __mbstowcs_alias (wchar_t *__restrict __dst, const char *__restrict __src, size_t __len) throw () __asm__ ("" "mbstowcs")


                                  ;
extern size_t __mbstowcs_chk_warn (wchar_t *__restrict __dst, const char *__restrict __src, size_t __len, size_t __dstlen) throw () __asm__ ("" "__mbstowcs_chk")



     __attribute__((__warning__ ("mbstowcs called with dst buffer smaller than len " "* sizeof (wchar_t)")))
                        ;

extern __inline __attribute__ ((__always_inline__)) __attribute__ ((__gnu_inline__)) __attribute__ ((__artificial__)) size_t
__attribute__ ((__leaf__)) mbstowcs (wchar_t *__restrict __dst, const char *__restrict __src, size_t __len) throw ()

{
  if (__builtin_object_size (__dst, 2 > 1) != (size_t) -1)
    {
      if (!__builtin_constant_p (__len))
 return __mbstowcs_chk (__dst, __src, __len,
          __builtin_object_size (__dst, 2 > 1) / sizeof (wchar_t));

      if (__len > __builtin_object_size (__dst, 2 > 1) / sizeof (wchar_t))
 return __mbstowcs_chk_warn (__dst, __src, __len,
         __builtin_object_size (__dst, 2 > 1) / sizeof (wchar_t));
    }
  return __mbstowcs_alias (__dst, __src, __len);
}


extern size_t __wcstombs_chk (char *__restrict __dst,
         const wchar_t *__restrict __src,
         size_t __len, size_t __dstlen) throw ();
extern size_t __wcstombs_alias (char *__restrict __dst, const wchar_t *__restrict __src, size_t __len) throw () __asm__ ("" "wcstombs")


                                  ;
extern size_t __wcstombs_chk_warn (char *__restrict __dst, const wchar_t *__restrict __src, size_t __len, size_t __dstlen) throw () __asm__ ("" "__wcstombs_chk")



     __attribute__((__warning__ ("wcstombs called with dst buffer smaller than len")));

extern __inline __attribute__ ((__always_inline__)) __attribute__ ((__gnu_inline__)) __attribute__ ((__artificial__)) size_t
__attribute__ ((__leaf__)) wcstombs (char *__restrict __dst, const wchar_t *__restrict __src, size_t __len) throw ()

{
  if (__builtin_object_size (__dst, 2 > 1) != (size_t) -1)
    {
      if (!__builtin_constant_p (__len))
 return __wcstombs_chk (__dst, __src, __len, __builtin_object_size (__dst, 2 > 1));
      if (__len > __builtin_object_size (__dst, 2 > 1))
 return __wcstombs_chk_warn (__dst, __src, __len, __builtin_object_size (__dst, 2 > 1));
    }
  return __wcstombs_alias (__dst, __src, __len);
}
# 959 "/usr/include/stdlib.h" 2 3 4
# 967 "/usr/include/stdlib.h" 3 4
}
# 65 "/usr/local/cuda/targets/x86_64-linux/include/nvtx3/nvtxDetail/nvtxImpl.h" 2
# 1 "/usr/include/stdio.h" 1 3 4
# 29 "/usr/include/stdio.h" 3 4
extern "C" {



# 1 "/usr/lib/gcc/x86_64-linux-gnu/5/include/stddef.h" 1 3 4
# 34 "/usr/include/stdio.h" 2 3 4
# 44 "/usr/include/stdio.h" 3 4
struct _IO_FILE;



typedef struct _IO_FILE FILE;





# 64 "/usr/include/stdio.h" 3 4
typedef struct _IO_FILE __FILE;
# 74 "/usr/include/stdio.h" 3 4
# 1 "/usr/include/libio.h" 1 3 4
# 31 "/usr/include/libio.h" 3 4
# 1 "/usr/include/_G_config.h" 1 3 4
# 15 "/usr/include/_G_config.h" 3 4
# 1 "/usr/lib/gcc/x86_64-linux-gnu/5/include/stddef.h" 1 3 4
# 16 "/usr/include/_G_config.h" 2 3 4




# 1 "/usr/include/wchar.h" 1 3 4
# 82 "/usr/include/wchar.h" 3 4
typedef struct
{
  int __count;
  union
  {

    unsigned int __wch;



    char __wchb[4];
  } __value;
} __mbstate_t;
# 21 "/usr/include/_G_config.h" 2 3 4
typedef struct
{
  __off_t __pos;
  __mbstate_t __state;
} _G_fpos_t;
typedef struct
{
  __off64_t __pos;
  __mbstate_t __state;
} _G_fpos64_t;
# 32 "/usr/include/libio.h" 2 3 4
# 49 "/usr/include/libio.h" 3 4
# 1 "/usr/lib/gcc/x86_64-linux-gnu/5/include/stdarg.h" 1 3 4
# 40 "/usr/lib/gcc/x86_64-linux-gnu/5/include/stdarg.h" 3 4
typedef __builtin_va_list __gnuc_va_list;
# 50 "/usr/include/libio.h" 2 3 4
# 144 "/usr/include/libio.h" 3 4
struct _IO_jump_t; struct _IO_FILE;





typedef void _IO_lock_t;





struct _IO_marker {
  struct _IO_marker *_next;
  struct _IO_FILE *_sbuf;



  int _pos;
# 173 "/usr/include/libio.h" 3 4
};


enum __codecvt_result
{
  __codecvt_ok,
  __codecvt_partial,
  __codecvt_error,
  __codecvt_noconv
};
# 241 "/usr/include/libio.h" 3 4
struct _IO_FILE {
  int _flags;




  char* _IO_read_ptr;
  char* _IO_read_end;
  char* _IO_read_base;
  char* _IO_write_base;
  char* _IO_write_ptr;
  char* _IO_write_end;
  char* _IO_buf_base;
  char* _IO_buf_end;

  char *_IO_save_base;
  char *_IO_backup_base;
  char *_IO_save_end;

  struct _IO_marker *_markers;

  struct _IO_FILE *_chain;

  int _fileno;



  int _flags2;

  __off_t _old_offset;



  unsigned short _cur_column;
  signed char _vtable_offset;
  char _shortbuf[1];



  _IO_lock_t *_lock;
# 289 "/usr/include/libio.h" 3 4
  __off64_t _offset;







  void *__pad1;
  void *__pad2;
  void *__pad3;
  void *__pad4;

  size_t __pad5;
  int _mode;

  char _unused2[15 * sizeof (int) - 4 * sizeof (void *) - sizeof (size_t)];

};





struct _IO_FILE_plus;

extern struct _IO_FILE_plus _IO_2_1_stdin_;
extern struct _IO_FILE_plus _IO_2_1_stdout_;
extern struct _IO_FILE_plus _IO_2_1_stderr_;
# 333 "/usr/include/libio.h" 3 4
typedef __ssize_t __io_read_fn (void *__cookie, char *__buf, size_t __nbytes);







typedef __ssize_t __io_write_fn (void *__cookie, const char *__buf,
     size_t __n);







typedef int __io_seek_fn (void *__cookie, __off64_t *__pos, int __w);


typedef int __io_close_fn (void *__cookie);




typedef __io_read_fn cookie_read_function_t;
typedef __io_write_fn cookie_write_function_t;
typedef __io_seek_fn cookie_seek_function_t;
typedef __io_close_fn cookie_close_function_t;


typedef struct
{
  __io_read_fn *read;
  __io_write_fn *write;
  __io_seek_fn *seek;
  __io_close_fn *close;
} _IO_cookie_io_functions_t;
typedef _IO_cookie_io_functions_t cookie_io_functions_t;

struct _IO_cookie_file;


extern void _IO_cookie_init (struct _IO_cookie_file *__cfile, int __read_write,
        void *__cookie, _IO_cookie_io_functions_t __fns);




extern "C" {


extern int __underflow (_IO_FILE *);
extern int __uflow (_IO_FILE *);
extern int __overflow (_IO_FILE *, int);
# 429 "/usr/include/libio.h" 3 4
extern int _IO_getc (_IO_FILE *__fp);
extern int _IO_putc (int __c, _IO_FILE *__fp);
extern int _IO_feof (_IO_FILE *__fp) throw ();
extern int _IO_ferror (_IO_FILE *__fp) throw ();

extern int _IO_peekc_locked (_IO_FILE *__fp);





extern void _IO_flockfile (_IO_FILE *) throw ();
extern void _IO_funlockfile (_IO_FILE *) throw ();
extern int _IO_ftrylockfile (_IO_FILE *) throw ();
# 459 "/usr/include/libio.h" 3 4
extern int _IO_vfscanf (_IO_FILE * __restrict, const char * __restrict,
   __gnuc_va_list, int *__restrict);
extern int _IO_vfprintf (_IO_FILE *__restrict, const char *__restrict,
    __gnuc_va_list);
extern __ssize_t _IO_padn (_IO_FILE *, int, __ssize_t);
extern size_t _IO_sgetn (_IO_FILE *, void *, size_t);

extern __off64_t _IO_seekoff (_IO_FILE *, __off64_t, int, int);
extern __off64_t _IO_seekpos (_IO_FILE *, __off64_t, int);

extern void _IO_free_backup_area (_IO_FILE *) throw ();
# 521 "/usr/include/libio.h" 3 4
}
# 75 "/usr/include/stdio.h" 2 3 4




typedef __gnuc_va_list va_list;
# 108 "/usr/include/stdio.h" 3 4


typedef _G_fpos_t fpos_t;





typedef _G_fpos64_t fpos64_t;
# 164 "/usr/include/stdio.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/stdio_lim.h" 1 3 4
# 165 "/usr/include/stdio.h" 2 3 4



extern struct _IO_FILE *stdin;
extern struct _IO_FILE *stdout;
extern struct _IO_FILE *stderr;







extern int remove (const char *__filename) throw ();

extern int rename (const char *__old, const char *__new) throw ();




extern int renameat (int __oldfd, const char *__old, int __newfd,
       const char *__new) throw ();








extern FILE *tmpfile (void) __attribute__ ((__warn_unused_result__));
# 205 "/usr/include/stdio.h" 3 4
extern FILE *tmpfile64 (void) __attribute__ ((__warn_unused_result__));



extern char *tmpnam (char *__s) throw () __attribute__ ((__warn_unused_result__));





extern char *tmpnam_r (char *__s) throw () __attribute__ ((__warn_unused_result__));
# 227 "/usr/include/stdio.h" 3 4
extern char *tempnam (const char *__dir, const char *__pfx)
     throw () __attribute__ ((__malloc__)) __attribute__ ((__warn_unused_result__));








extern int fclose (FILE *__stream);




extern int fflush (FILE *__stream);

# 252 "/usr/include/stdio.h" 3 4
extern int fflush_unlocked (FILE *__stream);
# 262 "/usr/include/stdio.h" 3 4
extern int fcloseall (void);









extern FILE *fopen (const char *__restrict __filename,
      const char *__restrict __modes) __attribute__ ((__warn_unused_result__));




extern FILE *freopen (const char *__restrict __filename,
        const char *__restrict __modes,
        FILE *__restrict __stream) __attribute__ ((__warn_unused_result__));
# 295 "/usr/include/stdio.h" 3 4


extern FILE *fopen64 (const char *__restrict __filename,
        const char *__restrict __modes) __attribute__ ((__warn_unused_result__));
extern FILE *freopen64 (const char *__restrict __filename,
   const char *__restrict __modes,
   FILE *__restrict __stream) __attribute__ ((__warn_unused_result__));




extern FILE *fdopen (int __fd, const char *__modes) throw () __attribute__ ((__warn_unused_result__));





extern FILE *fopencookie (void *__restrict __magic_cookie,
     const char *__restrict __modes,
     _IO_cookie_io_functions_t __io_funcs) throw () __attribute__ ((__warn_unused_result__));




extern FILE *fmemopen (void *__s, size_t __len, const char *__modes)
  throw () __attribute__ ((__warn_unused_result__));




extern FILE *open_memstream (char **__bufloc, size_t *__sizeloc) throw () __attribute__ ((__warn_unused_result__));






extern void setbuf (FILE *__restrict __stream, char *__restrict __buf) throw ();



extern int setvbuf (FILE *__restrict __stream, char *__restrict __buf,
      int __modes, size_t __n) throw ();





extern void setbuffer (FILE *__restrict __stream, char *__restrict __buf,
         size_t __size) throw ();


extern void setlinebuf (FILE *__stream) throw ();








extern int fprintf (FILE *__restrict __stream,
      const char *__restrict __format, ...);




extern int printf (const char *__restrict __format, ...);

extern int sprintf (char *__restrict __s,
      const char *__restrict __format, ...) throw ();





extern int vfprintf (FILE *__restrict __s, const char *__restrict __format,
       __gnuc_va_list __arg);




extern int vprintf (const char *__restrict __format, __gnuc_va_list __arg);

extern int vsprintf (char *__restrict __s, const char *__restrict __format,
       __gnuc_va_list __arg) throw ();





extern int snprintf (char *__restrict __s, size_t __maxlen,
       const char *__restrict __format, ...)
     throw () __attribute__ ((__format__ (__printf__, 3, 4)));

extern int vsnprintf (char *__restrict __s, size_t __maxlen,
        const char *__restrict __format, __gnuc_va_list __arg)
     throw () __attribute__ ((__format__ (__printf__, 3, 0)));






extern int vasprintf (char **__restrict __ptr, const char *__restrict __f,
        __gnuc_va_list __arg)
     throw () __attribute__ ((__format__ (__printf__, 2, 0))) __attribute__ ((__warn_unused_result__));
extern int __asprintf (char **__restrict __ptr,
         const char *__restrict __fmt, ...)
     throw () __attribute__ ((__format__ (__printf__, 2, 3))) __attribute__ ((__warn_unused_result__));
extern int asprintf (char **__restrict __ptr,
       const char *__restrict __fmt, ...)
     throw () __attribute__ ((__format__ (__printf__, 2, 3))) __attribute__ ((__warn_unused_result__));




extern int vdprintf (int __fd, const char *__restrict __fmt,
       __gnuc_va_list __arg)
     __attribute__ ((__format__ (__printf__, 2, 0)));
extern int dprintf (int __fd, const char *__restrict __fmt, ...)
     __attribute__ ((__format__ (__printf__, 2, 3)));








extern int fscanf (FILE *__restrict __stream,
     const char *__restrict __format, ...) __attribute__ ((__warn_unused_result__));




extern int scanf (const char *__restrict __format, ...) __attribute__ ((__warn_unused_result__));

extern int sscanf (const char *__restrict __s,
     const char *__restrict __format, ...) throw ();
# 463 "/usr/include/stdio.h" 3 4








extern int vfscanf (FILE *__restrict __s, const char *__restrict __format,
      __gnuc_va_list __arg)
     __attribute__ ((__format__ (__scanf__, 2, 0))) __attribute__ ((__warn_unused_result__));





extern int vscanf (const char *__restrict __format, __gnuc_va_list __arg)
     __attribute__ ((__format__ (__scanf__, 1, 0))) __attribute__ ((__warn_unused_result__));


extern int vsscanf (const char *__restrict __s,
      const char *__restrict __format, __gnuc_va_list __arg)
     throw () __attribute__ ((__format__ (__scanf__, 2, 0)));
# 522 "/usr/include/stdio.h" 3 4









extern int fgetc (FILE *__stream);
extern int getc (FILE *__stream);





extern int getchar (void);

# 550 "/usr/include/stdio.h" 3 4
extern int getc_unlocked (FILE *__stream);
extern int getchar_unlocked (void);
# 561 "/usr/include/stdio.h" 3 4
extern int fgetc_unlocked (FILE *__stream);











extern int fputc (int __c, FILE *__stream);
extern int putc (int __c, FILE *__stream);





extern int putchar (int __c);

# 594 "/usr/include/stdio.h" 3 4
extern int fputc_unlocked (int __c, FILE *__stream);







extern int putc_unlocked (int __c, FILE *__stream);
extern int putchar_unlocked (int __c);






extern int getw (FILE *__stream);


extern int putw (int __w, FILE *__stream);








extern char *fgets (char *__restrict __s, int __n, FILE *__restrict __stream)
     __attribute__ ((__warn_unused_result__));
# 638 "/usr/include/stdio.h" 3 4
extern char *gets (char *__s) __attribute__ ((__warn_unused_result__)) __attribute__ ((__deprecated__));


# 649 "/usr/include/stdio.h" 3 4
extern char *fgets_unlocked (char *__restrict __s, int __n,
        FILE *__restrict __stream) __attribute__ ((__warn_unused_result__));
# 665 "/usr/include/stdio.h" 3 4
extern __ssize_t __getdelim (char **__restrict __lineptr,
          size_t *__restrict __n, int __delimiter,
          FILE *__restrict __stream) __attribute__ ((__warn_unused_result__));
extern __ssize_t getdelim (char **__restrict __lineptr,
        size_t *__restrict __n, int __delimiter,
        FILE *__restrict __stream) __attribute__ ((__warn_unused_result__));







extern __ssize_t getline (char **__restrict __lineptr,
       size_t *__restrict __n,
       FILE *__restrict __stream) __attribute__ ((__warn_unused_result__));








extern int fputs (const char *__restrict __s, FILE *__restrict __stream);





extern int puts (const char *__s);






extern int ungetc (int __c, FILE *__stream);






extern size_t fread (void *__restrict __ptr, size_t __size,
       size_t __n, FILE *__restrict __stream) __attribute__ ((__warn_unused_result__));




extern size_t fwrite (const void *__restrict __ptr, size_t __size,
        size_t __n, FILE *__restrict __s);

# 726 "/usr/include/stdio.h" 3 4
extern int fputs_unlocked (const char *__restrict __s,
      FILE *__restrict __stream);
# 737 "/usr/include/stdio.h" 3 4
extern size_t fread_unlocked (void *__restrict __ptr, size_t __size,
         size_t __n, FILE *__restrict __stream) __attribute__ ((__warn_unused_result__));
extern size_t fwrite_unlocked (const void *__restrict __ptr, size_t __size,
          size_t __n, FILE *__restrict __stream);








extern int fseek (FILE *__stream, long int __off, int __whence);




extern long int ftell (FILE *__stream) __attribute__ ((__warn_unused_result__));




extern void rewind (FILE *__stream);

# 773 "/usr/include/stdio.h" 3 4
extern int fseeko (FILE *__stream, __off_t __off, int __whence);




extern __off_t ftello (FILE *__stream) __attribute__ ((__warn_unused_result__));
# 792 "/usr/include/stdio.h" 3 4






extern int fgetpos (FILE *__restrict __stream, fpos_t *__restrict __pos);




extern int fsetpos (FILE *__stream, const fpos_t *__pos);
# 815 "/usr/include/stdio.h" 3 4



extern int fseeko64 (FILE *__stream, __off64_t __off, int __whence);
extern __off64_t ftello64 (FILE *__stream) __attribute__ ((__warn_unused_result__));
extern int fgetpos64 (FILE *__restrict __stream, fpos64_t *__restrict __pos);
extern int fsetpos64 (FILE *__stream, const fpos64_t *__pos);




extern void clearerr (FILE *__stream) throw ();

extern int feof (FILE *__stream) throw () __attribute__ ((__warn_unused_result__));

extern int ferror (FILE *__stream) throw () __attribute__ ((__warn_unused_result__));




extern void clearerr_unlocked (FILE *__stream) throw ();
extern int feof_unlocked (FILE *__stream) throw () __attribute__ ((__warn_unused_result__));
extern int ferror_unlocked (FILE *__stream) throw () __attribute__ ((__warn_unused_result__));








extern void perror (const char *__s);






# 1 "/usr/include/x86_64-linux-gnu/bits/sys_errlist.h" 1 3 4
# 26 "/usr/include/x86_64-linux-gnu/bits/sys_errlist.h" 3 4
extern int sys_nerr;
extern const char *const sys_errlist[];


extern int _sys_nerr;
extern const char *const _sys_errlist[];
# 854 "/usr/include/stdio.h" 2 3 4




extern int fileno (FILE *__stream) throw () __attribute__ ((__warn_unused_result__));




extern int fileno_unlocked (FILE *__stream) throw () __attribute__ ((__warn_unused_result__));
# 872 "/usr/include/stdio.h" 3 4
extern FILE *popen (const char *__command, const char *__modes) __attribute__ ((__warn_unused_result__));





extern int pclose (FILE *__stream);





extern char *ctermid (char *__s) throw ();





extern char *cuserid (char *__s);




struct obstack;


extern int obstack_printf (struct obstack *__restrict __obstack,
      const char *__restrict __format, ...)
     throw () __attribute__ ((__format__ (__printf__, 2, 3)));
extern int obstack_vprintf (struct obstack *__restrict __obstack,
       const char *__restrict __format,
       __gnuc_va_list __args)
     throw () __attribute__ ((__format__ (__printf__, 2, 0)));







extern void flockfile (FILE *__stream) throw ();



extern int ftrylockfile (FILE *__stream) throw () __attribute__ ((__warn_unused_result__));


extern void funlockfile (FILE *__stream) throw ();
# 933 "/usr/include/stdio.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/stdio.h" 1 3 4
# 43 "/usr/include/x86_64-linux-gnu/bits/stdio.h" 3 4
extern __inline __attribute__ ((__gnu_inline__)) int
getchar (void)
{
  return _IO_getc (stdin);
}




extern __inline __attribute__ ((__gnu_inline__)) int
fgetc_unlocked (FILE *__fp)
{
  return (__builtin_expect (((__fp)->_IO_read_ptr >= (__fp)->_IO_read_end), 0) ? __uflow (__fp) : *(unsigned char *) (__fp)->_IO_read_ptr++);
}





extern __inline __attribute__ ((__gnu_inline__)) int
getc_unlocked (FILE *__fp)
{
  return (__builtin_expect (((__fp)->_IO_read_ptr >= (__fp)->_IO_read_end), 0) ? __uflow (__fp) : *(unsigned char *) (__fp)->_IO_read_ptr++);
}


extern __inline __attribute__ ((__gnu_inline__)) int
getchar_unlocked (void)
{
  return (__builtin_expect (((stdin)->_IO_read_ptr >= (stdin)->_IO_read_end), 0) ? __uflow (stdin) : *(unsigned char *) (stdin)->_IO_read_ptr++);
}




extern __inline __attribute__ ((__gnu_inline__)) int
putchar (int __c)
{
  return _IO_putc (__c, stdout);
}




extern __inline __attribute__ ((__gnu_inline__)) int
fputc_unlocked (int __c, FILE *__stream)
{
  return (__builtin_expect (((__stream)->_IO_write_ptr >= (__stream)->_IO_write_end), 0) ? __overflow (__stream, (unsigned char) (__c)) : (unsigned char) (*(__stream)->_IO_write_ptr++ = (__c)));
}





extern __inline __attribute__ ((__gnu_inline__)) int
putc_unlocked (int __c, FILE *__stream)
{
  return (__builtin_expect (((__stream)->_IO_write_ptr >= (__stream)->_IO_write_end), 0) ? __overflow (__stream, (unsigned char) (__c)) : (unsigned char) (*(__stream)->_IO_write_ptr++ = (__c)));
}


extern __inline __attribute__ ((__gnu_inline__)) int
putchar_unlocked (int __c)
{
  return (__builtin_expect (((stdout)->_IO_write_ptr >= (stdout)->_IO_write_end), 0) ? __overflow (stdout, (unsigned char) (__c)) : (unsigned char) (*(stdout)->_IO_write_ptr++ = (__c)));
}





extern __inline __attribute__ ((__gnu_inline__)) __ssize_t
getline (char **__lineptr, size_t *__n, FILE *__stream)
{
  return __getdelim (__lineptr, __n, '\n', __stream);
}





extern __inline __attribute__ ((__gnu_inline__)) int
__attribute__ ((__leaf__)) feof_unlocked (FILE *__stream) throw ()
{
  return (((__stream)->_flags & 0x10) != 0);
}


extern __inline __attribute__ ((__gnu_inline__)) int
__attribute__ ((__leaf__)) ferror_unlocked (FILE *__stream) throw ()
{
  return (((__stream)->_flags & 0x20) != 0);
}
# 934 "/usr/include/stdio.h" 2 3 4


# 1 "/usr/include/x86_64-linux-gnu/bits/stdio2.h" 1 3 4
# 23 "/usr/include/x86_64-linux-gnu/bits/stdio2.h" 3 4
extern int __sprintf_chk (char *__restrict __s, int __flag, size_t __slen,
     const char *__restrict __format, ...) throw ();
extern int __vsprintf_chk (char *__restrict __s, int __flag, size_t __slen,
      const char *__restrict __format,
      __gnuc_va_list __ap) throw ();


extern __inline __attribute__ ((__always_inline__)) __attribute__ ((__gnu_inline__)) __attribute__ ((__artificial__)) int
__attribute__ ((__leaf__)) sprintf (char *__restrict __s, const char *__restrict __fmt, ...) throw ()
{
  return __builtin___sprintf_chk (__s, 2 - 1,
      __builtin_object_size (__s, 2 > 1), __fmt, __builtin_va_arg_pack ());
}






extern __inline __attribute__ ((__always_inline__)) __attribute__ ((__gnu_inline__)) __attribute__ ((__artificial__)) int
__attribute__ ((__leaf__)) vsprintf (char *__restrict __s, const char *__restrict __fmt, __gnuc_va_list __ap) throw ()

{
  return __builtin___vsprintf_chk (__s, 2 - 1,
       __builtin_object_size (__s, 2 > 1), __fmt, __ap);
}



extern int __snprintf_chk (char *__restrict __s, size_t __n, int __flag,
      size_t __slen, const char *__restrict __format,
      ...) throw ();
extern int __vsnprintf_chk (char *__restrict __s, size_t __n, int __flag,
       size_t __slen, const char *__restrict __format,
       __gnuc_va_list __ap) throw ();


extern __inline __attribute__ ((__always_inline__)) __attribute__ ((__gnu_inline__)) __attribute__ ((__artificial__)) int
__attribute__ ((__leaf__)) snprintf (char *__restrict __s, size_t __n, const char *__restrict __fmt, ...) throw ()

{
  return __builtin___snprintf_chk (__s, __n, 2 - 1,
       __builtin_object_size (__s, 2 > 1), __fmt, __builtin_va_arg_pack ());
}






extern __inline __attribute__ ((__always_inline__)) __attribute__ ((__gnu_inline__)) __attribute__ ((__artificial__)) int
__attribute__ ((__leaf__)) vsnprintf (char *__restrict __s, size_t __n, const char *__restrict __fmt, __gnuc_va_list __ap) throw ()

{
  return __builtin___vsnprintf_chk (__s, __n, 2 - 1,
        __builtin_object_size (__s, 2 > 1), __fmt, __ap);
}





extern int __fprintf_chk (FILE *__restrict __stream, int __flag,
     const char *__restrict __format, ...);
extern int __printf_chk (int __flag, const char *__restrict __format, ...);
extern int __vfprintf_chk (FILE *__restrict __stream, int __flag,
      const char *__restrict __format, __gnuc_va_list __ap);
extern int __vprintf_chk (int __flag, const char *__restrict __format,
     __gnuc_va_list __ap);


extern __inline __attribute__ ((__always_inline__)) __attribute__ ((__gnu_inline__)) __attribute__ ((__artificial__)) int
fprintf (FILE *__restrict __stream, const char *__restrict __fmt, ...)
{
  return __fprintf_chk (__stream, 2 - 1, __fmt,
   __builtin_va_arg_pack ());
}

extern __inline __attribute__ ((__always_inline__)) __attribute__ ((__gnu_inline__)) __attribute__ ((__artificial__)) int
printf (const char *__restrict __fmt, ...)
{
  return __printf_chk (2 - 1, __fmt, __builtin_va_arg_pack ());
}







extern __inline __attribute__ ((__always_inline__)) __attribute__ ((__gnu_inline__)) __attribute__ ((__artificial__)) int
vprintf (const char *__restrict __fmt, __gnuc_va_list __ap)
{

  return __vfprintf_chk (stdout, 2 - 1, __fmt, __ap);



}

extern __inline __attribute__ ((__always_inline__)) __attribute__ ((__gnu_inline__)) __attribute__ ((__artificial__)) int
vfprintf (FILE *__restrict __stream,
   const char *__restrict __fmt, __gnuc_va_list __ap)
{
  return __vfprintf_chk (__stream, 2 - 1, __fmt, __ap);
}


extern int __dprintf_chk (int __fd, int __flag, const char *__restrict __fmt,
     ...) __attribute__ ((__format__ (__printf__, 3, 4)));
extern int __vdprintf_chk (int __fd, int __flag,
      const char *__restrict __fmt, __gnuc_va_list __arg)
     __attribute__ ((__format__ (__printf__, 3, 0)));


extern __inline __attribute__ ((__always_inline__)) __attribute__ ((__gnu_inline__)) __attribute__ ((__artificial__)) int
dprintf (int __fd, const char *__restrict __fmt, ...)
{
  return __dprintf_chk (__fd, 2 - 1, __fmt,
   __builtin_va_arg_pack ());
}





extern __inline __attribute__ ((__always_inline__)) __attribute__ ((__gnu_inline__)) __attribute__ ((__artificial__)) int
vdprintf (int __fd, const char *__restrict __fmt, __gnuc_va_list __ap)
{
  return __vdprintf_chk (__fd, 2 - 1, __fmt, __ap);
}




extern int __asprintf_chk (char **__restrict __ptr, int __flag,
      const char *__restrict __fmt, ...)
     throw () __attribute__ ((__format__ (__printf__, 3, 4))) __attribute__ ((__warn_unused_result__));
extern int __vasprintf_chk (char **__restrict __ptr, int __flag,
       const char *__restrict __fmt, __gnuc_va_list __arg)
     throw () __attribute__ ((__format__ (__printf__, 3, 0))) __attribute__ ((__warn_unused_result__));
extern int __obstack_printf_chk (struct obstack *__restrict __obstack,
     int __flag, const char *__restrict __format,
     ...)
     throw () __attribute__ ((__format__ (__printf__, 3, 4)));
extern int __obstack_vprintf_chk (struct obstack *__restrict __obstack,
      int __flag,
      const char *__restrict __format,
      __gnuc_va_list __args)
     throw () __attribute__ ((__format__ (__printf__, 3, 0)));


extern __inline __attribute__ ((__always_inline__)) __attribute__ ((__gnu_inline__)) __attribute__ ((__artificial__)) int
__attribute__ ((__leaf__)) asprintf (char **__restrict __ptr, const char *__restrict __fmt, ...) throw ()
{
  return __asprintf_chk (__ptr, 2 - 1, __fmt,
    __builtin_va_arg_pack ());
}

extern __inline __attribute__ ((__always_inline__)) __attribute__ ((__gnu_inline__)) __attribute__ ((__artificial__)) int
__attribute__ ((__leaf__)) __asprintf (char **__restrict __ptr, const char *__restrict __fmt, ...) throw ()

{
  return __asprintf_chk (__ptr, 2 - 1, __fmt,
    __builtin_va_arg_pack ());
}

extern __inline __attribute__ ((__always_inline__)) __attribute__ ((__gnu_inline__)) __attribute__ ((__artificial__)) int
__attribute__ ((__leaf__)) obstack_printf (struct obstack *__restrict __obstack, const char *__restrict __fmt, ...) throw ()

{
  return __obstack_printf_chk (__obstack, 2 - 1, __fmt,
          __builtin_va_arg_pack ());
}
# 206 "/usr/include/x86_64-linux-gnu/bits/stdio2.h" 3 4
extern __inline __attribute__ ((__always_inline__)) __attribute__ ((__gnu_inline__)) __attribute__ ((__artificial__)) int
__attribute__ ((__leaf__)) vasprintf (char **__restrict __ptr, const char *__restrict __fmt, __gnuc_va_list __ap) throw ()

{
  return __vasprintf_chk (__ptr, 2 - 1, __fmt, __ap);
}

extern __inline __attribute__ ((__always_inline__)) __attribute__ ((__gnu_inline__)) __attribute__ ((__artificial__)) int
__attribute__ ((__leaf__)) obstack_vprintf (struct obstack *__restrict __obstack, const char *__restrict __fmt, __gnuc_va_list __ap) throw ()

{
  return __obstack_vprintf_chk (__obstack, 2 - 1, __fmt,
    __ap);
}
# 241 "/usr/include/x86_64-linux-gnu/bits/stdio2.h" 3 4
extern char *__fgets_chk (char *__restrict __s, size_t __size, int __n,
     FILE *__restrict __stream) __attribute__ ((__warn_unused_result__));
extern char *__fgets_alias (char *__restrict __s, int __n, FILE *__restrict __stream) __asm__ ("" "fgets")

                                        __attribute__ ((__warn_unused_result__));
extern char *__fgets_chk_warn (char *__restrict __s, size_t __size, int __n, FILE *__restrict __stream) __asm__ ("" "__fgets_chk")


     __attribute__ ((__warn_unused_result__)) __attribute__((__warning__ ("fgets called with bigger size than length " "of destination buffer")))
                                 ;

extern __inline __attribute__ ((__always_inline__)) __attribute__ ((__gnu_inline__)) __attribute__ ((__artificial__)) __attribute__ ((__warn_unused_result__)) char *
fgets (char *__restrict __s, int __n, FILE *__restrict __stream)
{
  if (__builtin_object_size (__s, 2 > 1) != (size_t) -1)
    {
      if (!__builtin_constant_p (__n) || __n <= 0)
 return __fgets_chk (__s, __builtin_object_size (__s, 2 > 1), __n, __stream);

      if ((size_t) __n > __builtin_object_size (__s, 2 > 1))
 return __fgets_chk_warn (__s, __builtin_object_size (__s, 2 > 1), __n, __stream);
    }
  return __fgets_alias (__s, __n, __stream);
}

extern size_t __fread_chk (void *__restrict __ptr, size_t __ptrlen,
      size_t __size, size_t __n,
      FILE *__restrict __stream) __attribute__ ((__warn_unused_result__));
extern size_t __fread_alias (void *__restrict __ptr, size_t __size, size_t __n, FILE *__restrict __stream) __asm__ ("" "fread")


            __attribute__ ((__warn_unused_result__));
extern size_t __fread_chk_warn (void *__restrict __ptr, size_t __ptrlen, size_t __size, size_t __n, FILE *__restrict __stream) __asm__ ("" "__fread_chk")




     __attribute__ ((__warn_unused_result__)) __attribute__((__warning__ ("fread called with bigger size * nmemb than length " "of destination buffer")))
                                 ;

extern __inline __attribute__ ((__always_inline__)) __attribute__ ((__gnu_inline__)) __attribute__ ((__artificial__)) __attribute__ ((__warn_unused_result__)) size_t
fread (void *__restrict __ptr, size_t __size, size_t __n,
       FILE *__restrict __stream)
{
  if (__builtin_object_size (__ptr, 0) != (size_t) -1)
    {
      if (!__builtin_constant_p (__size)
   || !__builtin_constant_p (__n)
   || (__size | __n) >= (((size_t) 1) << (8 * sizeof (size_t) / 2)))
 return __fread_chk (__ptr, __builtin_object_size (__ptr, 0), __size, __n, __stream);

      if (__size * __n > __builtin_object_size (__ptr, 0))
 return __fread_chk_warn (__ptr, __builtin_object_size (__ptr, 0), __size, __n, __stream);
    }
  return __fread_alias (__ptr, __size, __n, __stream);
}


extern char *__fgets_unlocked_chk (char *__restrict __s, size_t __size,
       int __n, FILE *__restrict __stream) __attribute__ ((__warn_unused_result__));
extern char *__fgets_unlocked_alias (char *__restrict __s, int __n, FILE *__restrict __stream) __asm__ ("" "fgets_unlocked")

                                                 __attribute__ ((__warn_unused_result__));
extern char *__fgets_unlocked_chk_warn (char *__restrict __s, size_t __size, int __n, FILE *__restrict __stream) __asm__ ("" "__fgets_unlocked_chk")


     __attribute__ ((__warn_unused_result__)) __attribute__((__warning__ ("fgets_unlocked called with bigger size than length " "of destination buffer")))
                                 ;

extern __inline __attribute__ ((__always_inline__)) __attribute__ ((__gnu_inline__)) __attribute__ ((__artificial__)) __attribute__ ((__warn_unused_result__)) char *
fgets_unlocked (char *__restrict __s, int __n, FILE *__restrict __stream)
{
  if (__builtin_object_size (__s, 2 > 1) != (size_t) -1)
    {
      if (!__builtin_constant_p (__n) || __n <= 0)
 return __fgets_unlocked_chk (__s, __builtin_object_size (__s, 2 > 1), __n, __stream);

      if ((size_t) __n > __builtin_object_size (__s, 2 > 1))
 return __fgets_unlocked_chk_warn (__s, __builtin_object_size (__s, 2 > 1), __n, __stream);
    }
  return __fgets_unlocked_alias (__s, __n, __stream);
}




extern size_t __fread_unlocked_chk (void *__restrict __ptr, size_t __ptrlen,
        size_t __size, size_t __n,
        FILE *__restrict __stream) __attribute__ ((__warn_unused_result__));
extern size_t __fread_unlocked_alias (void *__restrict __ptr, size_t __size, size_t __n, FILE *__restrict __stream) __asm__ ("" "fread_unlocked")


                     __attribute__ ((__warn_unused_result__));
extern size_t __fread_unlocked_chk_warn (void *__restrict __ptr, size_t __ptrlen, size_t __size, size_t __n, FILE *__restrict __stream) __asm__ ("" "__fread_unlocked_chk")




     __attribute__ ((__warn_unused_result__)) __attribute__((__warning__ ("fread_unlocked called with bigger size * nmemb than " "length of destination buffer")))
                                        ;

extern __inline __attribute__ ((__always_inline__)) __attribute__ ((__gnu_inline__)) __attribute__ ((__artificial__)) __attribute__ ((__warn_unused_result__)) size_t
fread_unlocked (void *__restrict __ptr, size_t __size, size_t __n,
  FILE *__restrict __stream)
{
  if (__builtin_object_size (__ptr, 0) != (size_t) -1)
    {
      if (!__builtin_constant_p (__size)
   || !__builtin_constant_p (__n)
   || (__size | __n) >= (((size_t) 1) << (8 * sizeof (size_t) / 2)))
 return __fread_unlocked_chk (__ptr, __builtin_object_size (__ptr, 0), __size, __n,
         __stream);

      if (__size * __n > __builtin_object_size (__ptr, 0))
 return __fread_unlocked_chk_warn (__ptr, __builtin_object_size (__ptr, 0), __size, __n,
       __stream);
    }


  if (__builtin_constant_p (__size)
      && __builtin_constant_p (__n)
      && (__size | __n) < (((size_t) 1) << (8 * sizeof (size_t) / 2))
      && __size * __n <= 8)
    {
      size_t __cnt = __size * __n;
      char *__cptr = (char *) __ptr;
      if (__cnt == 0)
 return 0;

      for (; __cnt > 0; --__cnt)
 {
   int __c = (__builtin_expect (((__stream)->_IO_read_ptr >= (__stream)->_IO_read_end), 0) ? __uflow (__stream) : *(unsigned char *) (__stream)->_IO_read_ptr++);
   if (__c == (-1))
     break;
   *__cptr++ = __c;
 }
      return (__cptr - (char *) __ptr) / __size;
    }

  return __fread_unlocked_alias (__ptr, __size, __n, __stream);
}
# 937 "/usr/include/stdio.h" 2 3 4





}
# 66 "/usr/local/cuda/targets/x86_64-linux/include/nvtx3/nvtxDetail/nvtxImpl.h" 2


# 1 "/usr/include/errno.h" 1 3 4
# 31 "/usr/include/errno.h" 3 4
extern "C" {



# 1 "/usr/include/x86_64-linux-gnu/bits/errno.h" 1 3 4
# 24 "/usr/include/x86_64-linux-gnu/bits/errno.h" 3 4
# 1 "/usr/include/linux/errno.h" 1 3 4
# 1 "/usr/include/x86_64-linux-gnu/asm/errno.h" 1 3 4
# 1 "/usr/include/asm-generic/errno.h" 1 3 4



# 1 "/usr/include/asm-generic/errno-base.h" 1 3 4
# 5 "/usr/include/asm-generic/errno.h" 2 3 4
# 1 "/usr/include/x86_64-linux-gnu/asm/errno.h" 2 3 4
# 1 "/usr/include/linux/errno.h" 2 3 4
# 25 "/usr/include/x86_64-linux-gnu/bits/errno.h" 2 3 4
# 50 "/usr/include/x86_64-linux-gnu/bits/errno.h" 3 4
extern int *__errno_location (void) throw () __attribute__ ((__const__));
# 36 "/usr/include/errno.h" 2 3 4
# 54 "/usr/include/errno.h" 3 4
extern char *program_invocation_name, *program_invocation_short_name;



}
# 68 "/usr/include/errno.h" 3 4
typedef int error_t;
# 69 "/usr/local/cuda/targets/x86_64-linux/include/nvtx3/nvtxDetail/nvtxImpl.h" 2

# 1 "/usr/include/string.h" 1 3 4
# 27 "/usr/include/string.h" 3 4
extern "C" {




# 1 "/usr/lib/gcc/x86_64-linux-gnu/5/include/stddef.h" 1 3 4
# 33 "/usr/include/string.h" 2 3 4









extern void *memcpy (void *__restrict __dest, const void *__restrict __src,
       size_t __n) throw () __attribute__ ((__nonnull__ (1, 2)));


extern void *memmove (void *__dest, const void *__src, size_t __n)
     throw () __attribute__ ((__nonnull__ (1, 2)));






extern void *memccpy (void *__restrict __dest, const void *__restrict __src,
        int __c, size_t __n)
     throw () __attribute__ ((__nonnull__ (1, 2)));





extern void *memset (void *__s, int __c, size_t __n) throw () __attribute__ ((__nonnull__ (1)));


extern int memcmp (const void *__s1, const void *__s2, size_t __n)
     throw () __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2)));



extern "C++"
{
extern void *memchr (void *__s, int __c, size_t __n)
      throw () __asm ("memchr") __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1)));
extern const void *memchr (const void *__s, int __c, size_t __n)
      throw () __asm ("memchr") __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1)));


extern __inline __attribute__ ((__always_inline__)) __attribute__ ((__gnu_inline__)) void *
memchr (void *__s, int __c, size_t __n) throw ()
{
  return __builtin_memchr (__s, __c, __n);
}

extern __inline __attribute__ ((__always_inline__)) __attribute__ ((__gnu_inline__)) const void *
memchr (const void *__s, int __c, size_t __n) throw ()
{
  return __builtin_memchr (__s, __c, __n);
}

}










extern "C++" void *rawmemchr (void *__s, int __c)
     throw () __asm ("rawmemchr") __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1)));
extern "C++" const void *rawmemchr (const void *__s, int __c)
     throw () __asm ("rawmemchr") __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1)));







extern "C++" void *memrchr (void *__s, int __c, size_t __n)
      throw () __asm ("memrchr") __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1)));
extern "C++" const void *memrchr (const void *__s, int __c, size_t __n)
      throw () __asm ("memrchr") __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1)));









extern char *strcpy (char *__restrict __dest, const char *__restrict __src)
     throw () __attribute__ ((__nonnull__ (1, 2)));

extern char *strncpy (char *__restrict __dest,
        const char *__restrict __src, size_t __n)
     throw () __attribute__ ((__nonnull__ (1, 2)));


extern char *strcat (char *__restrict __dest, const char *__restrict __src)
     throw () __attribute__ ((__nonnull__ (1, 2)));

extern char *strncat (char *__restrict __dest, const char *__restrict __src,
        size_t __n) throw () __attribute__ ((__nonnull__ (1, 2)));


extern int strcmp (const char *__s1, const char *__s2)
     throw () __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2)));

extern int strncmp (const char *__s1, const char *__s2, size_t __n)
     throw () __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2)));


extern int strcoll (const char *__s1, const char *__s2)
     throw () __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2)));

extern size_t strxfrm (char *__restrict __dest,
         const char *__restrict __src, size_t __n)
     throw () __attribute__ ((__nonnull__ (2)));

# 162 "/usr/include/string.h" 3 4
extern int strcoll_l (const char *__s1, const char *__s2, __locale_t __l)
     throw () __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2, 3)));

extern size_t strxfrm_l (char *__dest, const char *__src, size_t __n,
    __locale_t __l) throw () __attribute__ ((__nonnull__ (2, 4)));




extern char *strdup (const char *__s)
     throw () __attribute__ ((__malloc__)) __attribute__ ((__nonnull__ (1)));






extern char *strndup (const char *__string, size_t __n)
     throw () __attribute__ ((__malloc__)) __attribute__ ((__nonnull__ (1)));
# 206 "/usr/include/string.h" 3 4



extern "C++"
{
extern char *strchr (char *__s, int __c)
     throw () __asm ("strchr") __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1)));
extern const char *strchr (const char *__s, int __c)
     throw () __asm ("strchr") __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1)));


extern __inline __attribute__ ((__always_inline__)) __attribute__ ((__gnu_inline__)) char *
strchr (char *__s, int __c) throw ()
{
  return __builtin_strchr (__s, __c);
}

extern __inline __attribute__ ((__always_inline__)) __attribute__ ((__gnu_inline__)) const char *
strchr (const char *__s, int __c) throw ()
{
  return __builtin_strchr (__s, __c);
}

}






extern "C++"
{
extern char *strrchr (char *__s, int __c)
     throw () __asm ("strrchr") __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1)));
extern const char *strrchr (const char *__s, int __c)
     throw () __asm ("strrchr") __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1)));


extern __inline __attribute__ ((__always_inline__)) __attribute__ ((__gnu_inline__)) char *
strrchr (char *__s, int __c) throw ()
{
  return __builtin_strrchr (__s, __c);
}

extern __inline __attribute__ ((__always_inline__)) __attribute__ ((__gnu_inline__)) const char *
strrchr (const char *__s, int __c) throw ()
{
  return __builtin_strrchr (__s, __c);
}

}










extern "C++" char *strchrnul (char *__s, int __c)
     throw () __asm ("strchrnul") __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1)));
extern "C++" const char *strchrnul (const char *__s, int __c)
     throw () __asm ("strchrnul") __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1)));









extern size_t strcspn (const char *__s, const char *__reject)
     throw () __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2)));


extern size_t strspn (const char *__s, const char *__accept)
     throw () __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2)));


extern "C++"
{
extern char *strpbrk (char *__s, const char *__accept)
     throw () __asm ("strpbrk") __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2)));
extern const char *strpbrk (const char *__s, const char *__accept)
     throw () __asm ("strpbrk") __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2)));


extern __inline __attribute__ ((__always_inline__)) __attribute__ ((__gnu_inline__)) char *
strpbrk (char *__s, const char *__accept) throw ()
{
  return __builtin_strpbrk (__s, __accept);
}

extern __inline __attribute__ ((__always_inline__)) __attribute__ ((__gnu_inline__)) const char *
strpbrk (const char *__s, const char *__accept) throw ()
{
  return __builtin_strpbrk (__s, __accept);
}

}






extern "C++"
{
extern char *strstr (char *__haystack, const char *__needle)
     throw () __asm ("strstr") __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2)));
extern const char *strstr (const char *__haystack, const char *__needle)
     throw () __asm ("strstr") __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2)));


extern __inline __attribute__ ((__always_inline__)) __attribute__ ((__gnu_inline__)) char *
strstr (char *__haystack, const char *__needle) throw ()
{
  return __builtin_strstr (__haystack, __needle);
}

extern __inline __attribute__ ((__always_inline__)) __attribute__ ((__gnu_inline__)) const char *
strstr (const char *__haystack, const char *__needle) throw ()
{
  return __builtin_strstr (__haystack, __needle);
}

}







extern char *strtok (char *__restrict __s, const char *__restrict __delim)
     throw () __attribute__ ((__nonnull__ (2)));




extern char *__strtok_r (char *__restrict __s,
    const char *__restrict __delim,
    char **__restrict __save_ptr)
     throw () __attribute__ ((__nonnull__ (2, 3)));

extern char *strtok_r (char *__restrict __s, const char *__restrict __delim,
         char **__restrict __save_ptr)
     throw () __attribute__ ((__nonnull__ (2, 3)));





extern "C++" char *strcasestr (char *__haystack, const char *__needle)
     throw () __asm ("strcasestr") __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2)));
extern "C++" const char *strcasestr (const char *__haystack,
         const char *__needle)
     throw () __asm ("strcasestr") __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2)));
# 377 "/usr/include/string.h" 3 4
extern void *memmem (const void *__haystack, size_t __haystacklen,
       const void *__needle, size_t __needlelen)
     throw () __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 3)));



extern void *__mempcpy (void *__restrict __dest,
   const void *__restrict __src, size_t __n)
     throw () __attribute__ ((__nonnull__ (1, 2)));
extern void *mempcpy (void *__restrict __dest,
        const void *__restrict __src, size_t __n)
     throw () __attribute__ ((__nonnull__ (1, 2)));





extern size_t strlen (const char *__s)
     throw () __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1)));





extern size_t strnlen (const char *__string, size_t __maxlen)
     throw () __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1)));





extern char *strerror (int __errnum) throw ();

# 433 "/usr/include/string.h" 3 4
extern char *strerror_r (int __errnum, char *__buf, size_t __buflen)
     throw () __attribute__ ((__nonnull__ (2))) __attribute__ ((__warn_unused_result__));





extern char *strerror_l (int __errnum, __locale_t __l) throw ();





extern void __bzero (void *__s, size_t __n) throw () __attribute__ ((__nonnull__ (1)));



extern void bcopy (const void *__src, void *__dest, size_t __n)
     throw () __attribute__ ((__nonnull__ (1, 2)));


extern void bzero (void *__s, size_t __n) throw () __attribute__ ((__nonnull__ (1)));


extern int bcmp (const void *__s1, const void *__s2, size_t __n)
     throw () __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2)));



extern "C++"
{
extern char *index (char *__s, int __c)
     throw () __asm ("index") __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1)));
extern const char *index (const char *__s, int __c)
     throw () __asm ("index") __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1)));


extern __inline __attribute__ ((__always_inline__)) __attribute__ ((__gnu_inline__)) char *
index (char *__s, int __c) throw ()
{
  return __builtin_index (__s, __c);
}

extern __inline __attribute__ ((__always_inline__)) __attribute__ ((__gnu_inline__)) const char *
index (const char *__s, int __c) throw ()
{
  return __builtin_index (__s, __c);
}

}







extern "C++"
{
extern char *rindex (char *__s, int __c)
     throw () __asm ("rindex") __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1)));
extern const char *rindex (const char *__s, int __c)
     throw () __asm ("rindex") __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1)));


extern __inline __attribute__ ((__always_inline__)) __attribute__ ((__gnu_inline__)) char *
rindex (char *__s, int __c) throw ()
{
  return __builtin_rindex (__s, __c);
}

extern __inline __attribute__ ((__always_inline__)) __attribute__ ((__gnu_inline__)) const char *
rindex (const char *__s, int __c) throw ()
{
  return __builtin_rindex (__s, __c);
}

}







extern int ffs (int __i) throw () __attribute__ ((__const__));




extern int ffsl (long int __l) throw () __attribute__ ((__const__));
__extension__ extern int ffsll (long long int __ll)
     throw () __attribute__ ((__const__));



extern int strcasecmp (const char *__s1, const char *__s2)
     throw () __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2)));


extern int strncasecmp (const char *__s1, const char *__s2, size_t __n)
     throw () __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2)));





extern int strcasecmp_l (const char *__s1, const char *__s2,
    __locale_t __loc)
     throw () __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2, 3)));

extern int strncasecmp_l (const char *__s1, const char *__s2,
     size_t __n, __locale_t __loc)
     throw () __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2, 4)));





extern char *strsep (char **__restrict __stringp,
       const char *__restrict __delim)
     throw () __attribute__ ((__nonnull__ (1, 2)));




extern char *strsignal (int __sig) throw ();


extern char *__stpcpy (char *__restrict __dest, const char *__restrict __src)
     throw () __attribute__ ((__nonnull__ (1, 2)));
extern char *stpcpy (char *__restrict __dest, const char *__restrict __src)
     throw () __attribute__ ((__nonnull__ (1, 2)));



extern char *__stpncpy (char *__restrict __dest,
   const char *__restrict __src, size_t __n)
     throw () __attribute__ ((__nonnull__ (1, 2)));
extern char *stpncpy (char *__restrict __dest,
        const char *__restrict __src, size_t __n)
     throw () __attribute__ ((__nonnull__ (1, 2)));




extern int strverscmp (const char *__s1, const char *__s2)
     throw () __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2)));


extern char *strfry (char *__string) throw () __attribute__ ((__nonnull__ (1)));


extern void *memfrob (void *__s, size_t __n) throw () __attribute__ ((__nonnull__ (1)));







extern "C++" char *basename (char *__filename)
     throw () __asm ("basename") __attribute__ ((__nonnull__ (1)));
extern "C++" const char *basename (const char *__filename)
     throw () __asm ("basename") __attribute__ ((__nonnull__ (1)));
# 635 "/usr/include/string.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/string3.h" 1 3 4
# 49 "/usr/include/x86_64-linux-gnu/bits/string3.h" 3 4
extern __inline __attribute__ ((__always_inline__)) __attribute__ ((__gnu_inline__)) __attribute__ ((__artificial__)) void *
__attribute__ ((__leaf__)) memcpy (void *__restrict __dest, const void *__restrict __src, size_t __len) throw ()

{
  return __builtin___memcpy_chk (__dest, __src, __len, __builtin_object_size (__dest, 0));
}

extern __inline __attribute__ ((__always_inline__)) __attribute__ ((__gnu_inline__)) __attribute__ ((__artificial__)) void *
__attribute__ ((__leaf__)) memmove (void *__dest, const void *__src, size_t __len) throw ()
{
  return __builtin___memmove_chk (__dest, __src, __len, __builtin_object_size (__dest, 0));
}


extern __inline __attribute__ ((__always_inline__)) __attribute__ ((__gnu_inline__)) __attribute__ ((__artificial__)) void *
__attribute__ ((__leaf__)) mempcpy (void *__restrict __dest, const void *__restrict __src, size_t __len) throw ()

{
  return __builtin___mempcpy_chk (__dest, __src, __len, __builtin_object_size (__dest, 0));
}
# 77 "/usr/include/x86_64-linux-gnu/bits/string3.h" 3 4
extern __inline __attribute__ ((__always_inline__)) __attribute__ ((__gnu_inline__)) __attribute__ ((__artificial__)) void *
__attribute__ ((__leaf__)) memset (void *__dest, int __ch, size_t __len) throw ()
{
# 90 "/usr/include/x86_64-linux-gnu/bits/string3.h" 3 4
  return __builtin___memset_chk (__dest, __ch, __len, __builtin_object_size (__dest, 0));
}


extern __inline __attribute__ ((__always_inline__)) __attribute__ ((__gnu_inline__)) __attribute__ ((__artificial__)) void
__attribute__ ((__leaf__)) bcopy (const void *__src, void *__dest, size_t __len) throw ()
{
  (void) __builtin___memmove_chk (__dest, __src, __len, __builtin_object_size (__dest, 0));
}

extern __inline __attribute__ ((__always_inline__)) __attribute__ ((__gnu_inline__)) __attribute__ ((__artificial__)) void
__attribute__ ((__leaf__)) bzero (void *__dest, size_t __len) throw ()
{
  (void) __builtin___memset_chk (__dest, '\0', __len, __builtin_object_size (__dest, 0));
}


extern __inline __attribute__ ((__always_inline__)) __attribute__ ((__gnu_inline__)) __attribute__ ((__artificial__)) char *
__attribute__ ((__leaf__)) strcpy (char *__restrict __dest, const char *__restrict __src) throw ()
{
  return __builtin___strcpy_chk (__dest, __src, __builtin_object_size (__dest, 2 > 1));
}


extern __inline __attribute__ ((__always_inline__)) __attribute__ ((__gnu_inline__)) __attribute__ ((__artificial__)) char *
__attribute__ ((__leaf__)) stpcpy (char *__restrict __dest, const char *__restrict __src) throw ()
{
  return __builtin___stpcpy_chk (__dest, __src, __builtin_object_size (__dest, 2 > 1));
}



extern __inline __attribute__ ((__always_inline__)) __attribute__ ((__gnu_inline__)) __attribute__ ((__artificial__)) char *
__attribute__ ((__leaf__)) strncpy (char *__restrict __dest, const char *__restrict __src, size_t __len) throw ()

{
  return __builtin___strncpy_chk (__dest, __src, __len, __builtin_object_size (__dest, 2 > 1));
}


extern char *__stpncpy_chk (char *__dest, const char *__src, size_t __n,
       size_t __destlen) throw ();
extern char *__stpncpy_alias (char *__dest, const char *__src, size_t __n) throw () __asm__ ("" "stpncpy")
                                 ;

extern __inline __attribute__ ((__always_inline__)) __attribute__ ((__gnu_inline__)) __attribute__ ((__artificial__)) char *
__attribute__ ((__leaf__)) stpncpy (char *__dest, const char *__src, size_t __n) throw ()
{
  if (__builtin_object_size (__dest, 2 > 1) != (size_t) -1
      && (!__builtin_constant_p (__n) || __n > __builtin_object_size (__dest, 2 > 1)))
    return __stpncpy_chk (__dest, __src, __n, __builtin_object_size (__dest, 2 > 1));
  return __stpncpy_alias (__dest, __src, __n);
}


extern __inline __attribute__ ((__always_inline__)) __attribute__ ((__gnu_inline__)) __attribute__ ((__artificial__)) char *
__attribute__ ((__leaf__)) strcat (char *__restrict __dest, const char *__restrict __src) throw ()
{
  return __builtin___strcat_chk (__dest, __src, __builtin_object_size (__dest, 2 > 1));
}


extern __inline __attribute__ ((__always_inline__)) __attribute__ ((__gnu_inline__)) __attribute__ ((__artificial__)) char *
__attribute__ ((__leaf__)) strncat (char *__restrict __dest, const char *__restrict __src, size_t __len) throw ()

{
  return __builtin___strncat_chk (__dest, __src, __len, __builtin_object_size (__dest, 2 > 1));
}
# 636 "/usr/include/string.h" 2 3 4
# 648 "/usr/include/string.h" 3 4
extern __inline __attribute__ ((__always_inline__)) __attribute__ ((__gnu_inline__)) void *
__mempcpy_inline (void *__restrict __dest,
    const void *__restrict __src, size_t __n)
{
  return (char *) memcpy (__dest, __src, __n) + __n;
}




}
# 71 "/usr/local/cuda/targets/x86_64-linux/include/nvtx3/nvtxDetail/nvtxImpl.h" 2

# 1 "/usr/include/pthread.h" 1 3 4
# 24 "/usr/include/pthread.h" 3 4
# 1 "/usr/include/time.h" 1 3 4
# 29 "/usr/include/time.h" 3 4
extern "C" {







# 1 "/usr/lib/gcc/x86_64-linux-gnu/5/include/stddef.h" 1 3 4
# 38 "/usr/include/time.h" 2 3 4



# 1 "/usr/include/x86_64-linux-gnu/bits/time.h" 1 3 4
# 88 "/usr/include/x86_64-linux-gnu/bits/time.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/timex.h" 1 3 4
# 25 "/usr/include/x86_64-linux-gnu/bits/timex.h" 3 4
struct timex
{
  unsigned int modes;
  __syscall_slong_t offset;
  __syscall_slong_t freq;
  __syscall_slong_t maxerror;
  __syscall_slong_t esterror;
  int status;
  __syscall_slong_t constant;
  __syscall_slong_t precision;
  __syscall_slong_t tolerance;
  struct timeval time;
  __syscall_slong_t tick;
  __syscall_slong_t ppsfreq;
  __syscall_slong_t jitter;
  int shift;
  __syscall_slong_t stabil;
  __syscall_slong_t jitcnt;
  __syscall_slong_t calcnt;
  __syscall_slong_t errcnt;
  __syscall_slong_t stbcnt;

  int tai;


  int :32; int :32; int :32; int :32;
  int :32; int :32; int :32; int :32;
  int :32; int :32; int :32;
};
# 89 "/usr/include/x86_64-linux-gnu/bits/time.h" 2 3 4

extern "C" {


extern int clock_adjtime (__clockid_t __clock_id, struct timex *__utx) throw ();

}
# 42 "/usr/include/time.h" 2 3 4
# 131 "/usr/include/time.h" 3 4


struct tm
{
  int tm_sec;
  int tm_min;
  int tm_hour;
  int tm_mday;
  int tm_mon;
  int tm_year;
  int tm_wday;
  int tm_yday;
  int tm_isdst;


  long int tm_gmtoff;
  const char *tm_zone;




};








struct itimerspec
  {
    struct timespec it_interval;
    struct timespec it_value;
  };


struct sigevent;
# 186 "/usr/include/time.h" 3 4



extern clock_t clock (void) throw ();


extern time_t time (time_t *__timer) throw ();


extern double difftime (time_t __time1, time_t __time0)
     throw () __attribute__ ((__const__));


extern time_t mktime (struct tm *__tp) throw ();





extern size_t strftime (char *__restrict __s, size_t __maxsize,
   const char *__restrict __format,
   const struct tm *__restrict __tp) throw ();





extern char *strptime (const char *__restrict __s,
         const char *__restrict __fmt, struct tm *__tp)
     throw ();







extern size_t strftime_l (char *__restrict __s, size_t __maxsize,
     const char *__restrict __format,
     const struct tm *__restrict __tp,
     __locale_t __loc) throw ();



extern char *strptime_l (const char *__restrict __s,
    const char *__restrict __fmt, struct tm *__tp,
    __locale_t __loc) throw ();






extern struct tm *gmtime (const time_t *__timer) throw ();



extern struct tm *localtime (const time_t *__timer) throw ();





extern struct tm *gmtime_r (const time_t *__restrict __timer,
       struct tm *__restrict __tp) throw ();



extern struct tm *localtime_r (const time_t *__restrict __timer,
          struct tm *__restrict __tp) throw ();





extern char *asctime (const struct tm *__tp) throw ();


extern char *ctime (const time_t *__timer) throw ();







extern char *asctime_r (const struct tm *__restrict __tp,
   char *__restrict __buf) throw ();


extern char *ctime_r (const time_t *__restrict __timer,
        char *__restrict __buf) throw ();




extern char *__tzname[2];
extern int __daylight;
extern long int __timezone;




extern char *tzname[2];



extern void tzset (void) throw ();



extern int daylight;
extern long int timezone;





extern int stime (const time_t *__when) throw ();
# 319 "/usr/include/time.h" 3 4
extern time_t timegm (struct tm *__tp) throw ();


extern time_t timelocal (struct tm *__tp) throw ();


extern int dysize (int __year) throw () __attribute__ ((__const__));
# 334 "/usr/include/time.h" 3 4
extern int nanosleep (const struct timespec *__requested_time,
        struct timespec *__remaining);



extern int clock_getres (clockid_t __clock_id, struct timespec *__res) throw ();


extern int clock_gettime (clockid_t __clock_id, struct timespec *__tp) throw ();


extern int clock_settime (clockid_t __clock_id, const struct timespec *__tp)
     throw ();






extern int clock_nanosleep (clockid_t __clock_id, int __flags,
       const struct timespec *__req,
       struct timespec *__rem);


extern int clock_getcpuclockid (pid_t __pid, clockid_t *__clock_id) throw ();




extern int timer_create (clockid_t __clock_id,
    struct sigevent *__restrict __evp,
    timer_t *__restrict __timerid) throw ();


extern int timer_delete (timer_t __timerid) throw ();


extern int timer_settime (timer_t __timerid, int __flags,
     const struct itimerspec *__restrict __value,
     struct itimerspec *__restrict __ovalue) throw ();


extern int timer_gettime (timer_t __timerid, struct itimerspec *__value)
     throw ();


extern int timer_getoverrun (timer_t __timerid) throw ();





extern int timespec_get (struct timespec *__ts, int __base)
     throw () __attribute__ ((__nonnull__ (1)));
# 403 "/usr/include/time.h" 3 4
extern int getdate_err;
# 412 "/usr/include/time.h" 3 4
extern struct tm *getdate (const char *__string);
# 426 "/usr/include/time.h" 3 4
extern int getdate_r (const char *__restrict __string,
        struct tm *__restrict __resbufp);


}
# 25 "/usr/include/pthread.h" 2 3 4


# 1 "/usr/include/x86_64-linux-gnu/bits/setjmp.h" 1 3 4
# 26 "/usr/include/x86_64-linux-gnu/bits/setjmp.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/wordsize.h" 1 3 4
# 27 "/usr/include/x86_64-linux-gnu/bits/setjmp.h" 2 3 4




typedef long int __jmp_buf[8];
# 28 "/usr/include/pthread.h" 2 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/wordsize.h" 1 3 4
# 29 "/usr/include/pthread.h" 2 3 4



enum
{
  PTHREAD_CREATE_JOINABLE,

  PTHREAD_CREATE_DETACHED

};



enum
{
  PTHREAD_MUTEX_TIMED_NP,
  PTHREAD_MUTEX_RECURSIVE_NP,
  PTHREAD_MUTEX_ERRORCHECK_NP,
  PTHREAD_MUTEX_ADAPTIVE_NP

  ,
  PTHREAD_MUTEX_NORMAL = PTHREAD_MUTEX_TIMED_NP,
  PTHREAD_MUTEX_RECURSIVE = PTHREAD_MUTEX_RECURSIVE_NP,
  PTHREAD_MUTEX_ERRORCHECK = PTHREAD_MUTEX_ERRORCHECK_NP,
  PTHREAD_MUTEX_DEFAULT = PTHREAD_MUTEX_NORMAL



  , PTHREAD_MUTEX_FAST_NP = PTHREAD_MUTEX_TIMED_NP

};




enum
{
  PTHREAD_MUTEX_STALLED,
  PTHREAD_MUTEX_STALLED_NP = PTHREAD_MUTEX_STALLED,
  PTHREAD_MUTEX_ROBUST,
  PTHREAD_MUTEX_ROBUST_NP = PTHREAD_MUTEX_ROBUST
};





enum
{
  PTHREAD_PRIO_NONE,
  PTHREAD_PRIO_INHERIT,
  PTHREAD_PRIO_PROTECT
};
# 114 "/usr/include/pthread.h" 3 4
enum
{
  PTHREAD_RWLOCK_PREFER_READER_NP,
  PTHREAD_RWLOCK_PREFER_WRITER_NP,
  PTHREAD_RWLOCK_PREFER_WRITER_NONRECURSIVE_NP,
  PTHREAD_RWLOCK_DEFAULT_NP = PTHREAD_RWLOCK_PREFER_READER_NP
};
# 155 "/usr/include/pthread.h" 3 4
enum
{
  PTHREAD_INHERIT_SCHED,

  PTHREAD_EXPLICIT_SCHED

};



enum
{
  PTHREAD_SCOPE_SYSTEM,

  PTHREAD_SCOPE_PROCESS

};



enum
{
  PTHREAD_PROCESS_PRIVATE,

  PTHREAD_PROCESS_SHARED

};
# 190 "/usr/include/pthread.h" 3 4
struct _pthread_cleanup_buffer
{
  void (*__routine) (void *);
  void *__arg;
  int __canceltype;
  struct _pthread_cleanup_buffer *__prev;
};


enum
{
  PTHREAD_CANCEL_ENABLE,

  PTHREAD_CANCEL_DISABLE

};
enum
{
  PTHREAD_CANCEL_DEFERRED,

  PTHREAD_CANCEL_ASYNCHRONOUS

};
# 228 "/usr/include/pthread.h" 3 4
extern "C" {




extern int pthread_create (pthread_t *__restrict __newthread,
      const pthread_attr_t *__restrict __attr,
      void *(*__start_routine) (void *),
      void *__restrict __arg) throw () __attribute__ ((__nonnull__ (1, 3)));





extern void pthread_exit (void *__retval) __attribute__ ((__noreturn__));







extern int pthread_join (pthread_t __th, void **__thread_return);




extern int pthread_tryjoin_np (pthread_t __th, void **__thread_return) throw ();







extern int pthread_timedjoin_np (pthread_t __th, void **__thread_return,
     const struct timespec *__abstime);






extern int pthread_detach (pthread_t __th) throw ();



extern pthread_t pthread_self (void) throw () __attribute__ ((__const__));


extern int pthread_equal (pthread_t __thread1, pthread_t __thread2)
  throw () __attribute__ ((__const__));







extern int pthread_attr_init (pthread_attr_t *__attr) throw () __attribute__ ((__nonnull__ (1)));


extern int pthread_attr_destroy (pthread_attr_t *__attr)
     throw () __attribute__ ((__nonnull__ (1)));


extern int pthread_attr_getdetachstate (const pthread_attr_t *__attr,
     int *__detachstate)
     throw () __attribute__ ((__nonnull__ (1, 2)));


extern int pthread_attr_setdetachstate (pthread_attr_t *__attr,
     int __detachstate)
     throw () __attribute__ ((__nonnull__ (1)));



extern int pthread_attr_getguardsize (const pthread_attr_t *__attr,
          size_t *__guardsize)
     throw () __attribute__ ((__nonnull__ (1, 2)));


extern int pthread_attr_setguardsize (pthread_attr_t *__attr,
          size_t __guardsize)
     throw () __attribute__ ((__nonnull__ (1)));



extern int pthread_attr_getschedparam (const pthread_attr_t *__restrict __attr,
           struct sched_param *__restrict __param)
     throw () __attribute__ ((__nonnull__ (1, 2)));


extern int pthread_attr_setschedparam (pthread_attr_t *__restrict __attr,
           const struct sched_param *__restrict
           __param) throw () __attribute__ ((__nonnull__ (1, 2)));


extern int pthread_attr_getschedpolicy (const pthread_attr_t *__restrict
     __attr, int *__restrict __policy)
     throw () __attribute__ ((__nonnull__ (1, 2)));


extern int pthread_attr_setschedpolicy (pthread_attr_t *__attr, int __policy)
     throw () __attribute__ ((__nonnull__ (1)));


extern int pthread_attr_getinheritsched (const pthread_attr_t *__restrict
      __attr, int *__restrict __inherit)
     throw () __attribute__ ((__nonnull__ (1, 2)));


extern int pthread_attr_setinheritsched (pthread_attr_t *__attr,
      int __inherit)
     throw () __attribute__ ((__nonnull__ (1)));



extern int pthread_attr_getscope (const pthread_attr_t *__restrict __attr,
      int *__restrict __scope)
     throw () __attribute__ ((__nonnull__ (1, 2)));


extern int pthread_attr_setscope (pthread_attr_t *__attr, int __scope)
     throw () __attribute__ ((__nonnull__ (1)));


extern int pthread_attr_getstackaddr (const pthread_attr_t *__restrict
          __attr, void **__restrict __stackaddr)
     throw () __attribute__ ((__nonnull__ (1, 2))) __attribute__ ((__deprecated__));





extern int pthread_attr_setstackaddr (pthread_attr_t *__attr,
          void *__stackaddr)
     throw () __attribute__ ((__nonnull__ (1))) __attribute__ ((__deprecated__));


extern int pthread_attr_getstacksize (const pthread_attr_t *__restrict
          __attr, size_t *__restrict __stacksize)
     throw () __attribute__ ((__nonnull__ (1, 2)));




extern int pthread_attr_setstacksize (pthread_attr_t *__attr,
          size_t __stacksize)
     throw () __attribute__ ((__nonnull__ (1)));



extern int pthread_attr_getstack (const pthread_attr_t *__restrict __attr,
      void **__restrict __stackaddr,
      size_t *__restrict __stacksize)
     throw () __attribute__ ((__nonnull__ (1, 2, 3)));




extern int pthread_attr_setstack (pthread_attr_t *__attr, void *__stackaddr,
      size_t __stacksize) throw () __attribute__ ((__nonnull__ (1)));





extern int pthread_attr_setaffinity_np (pthread_attr_t *__attr,
     size_t __cpusetsize,
     const cpu_set_t *__cpuset)
     throw () __attribute__ ((__nonnull__ (1, 3)));



extern int pthread_attr_getaffinity_np (const pthread_attr_t *__attr,
     size_t __cpusetsize,
     cpu_set_t *__cpuset)
     throw () __attribute__ ((__nonnull__ (1, 3)));


extern int pthread_getattr_default_np (pthread_attr_t *__attr)
     throw () __attribute__ ((__nonnull__ (1)));



extern int pthread_setattr_default_np (const pthread_attr_t *__attr)
     throw () __attribute__ ((__nonnull__ (1)));




extern int pthread_getattr_np (pthread_t __th, pthread_attr_t *__attr)
     throw () __attribute__ ((__nonnull__ (2)));







extern int pthread_setschedparam (pthread_t __target_thread, int __policy,
      const struct sched_param *__param)
     throw () __attribute__ ((__nonnull__ (3)));


extern int pthread_getschedparam (pthread_t __target_thread,
      int *__restrict __policy,
      struct sched_param *__restrict __param)
     throw () __attribute__ ((__nonnull__ (2, 3)));


extern int pthread_setschedprio (pthread_t __target_thread, int __prio)
     throw ();




extern int pthread_getname_np (pthread_t __target_thread, char *__buf,
          size_t __buflen)
     throw () __attribute__ ((__nonnull__ (2)));


extern int pthread_setname_np (pthread_t __target_thread, const char *__name)
     throw () __attribute__ ((__nonnull__ (2)));





extern int pthread_getconcurrency (void) throw ();


extern int pthread_setconcurrency (int __level) throw ();







extern int pthread_yield (void) throw ();




extern int pthread_setaffinity_np (pthread_t __th, size_t __cpusetsize,
       const cpu_set_t *__cpuset)
     throw () __attribute__ ((__nonnull__ (3)));


extern int pthread_getaffinity_np (pthread_t __th, size_t __cpusetsize,
       cpu_set_t *__cpuset)
     throw () __attribute__ ((__nonnull__ (3)));
# 494 "/usr/include/pthread.h" 3 4
extern int pthread_once (pthread_once_t *__once_control,
    void (*__init_routine) (void)) __attribute__ ((__nonnull__ (1, 2)));
# 506 "/usr/include/pthread.h" 3 4
extern int pthread_setcancelstate (int __state, int *__oldstate);



extern int pthread_setcanceltype (int __type, int *__oldtype);


extern int pthread_cancel (pthread_t __th);




extern void pthread_testcancel (void);




typedef struct
{
  struct
  {
    __jmp_buf __cancel_jmp_buf;
    int __mask_was_saved;
  } __cancel_jmp_buf[1];
  void *__pad[4];
} __pthread_unwind_buf_t __attribute__ ((__aligned__));
# 540 "/usr/include/pthread.h" 3 4
struct __pthread_cleanup_frame
{
  void (*__cancel_routine) (void *);
  void *__cancel_arg;
  int __do_it;
  int __cancel_type;
};




class __pthread_cleanup_class
{
  void (*__cancel_routine) (void *);
  void *__cancel_arg;
  int __do_it;
  int __cancel_type;

 public:
  __pthread_cleanup_class (void (*__fct) (void *), void *__arg)
    : __cancel_routine (__fct), __cancel_arg (__arg), __do_it (1) { }
  ~__pthread_cleanup_class () { if (__do_it) __cancel_routine (__cancel_arg); }
  void __setdoit (int __newval) { __do_it = __newval; }
  void __defer () { pthread_setcanceltype (PTHREAD_CANCEL_DEFERRED,
        &__cancel_type); }
  void __restore () const { pthread_setcanceltype (__cancel_type, 0); }
};
# 742 "/usr/include/pthread.h" 3 4
struct __jmp_buf_tag;
extern int __sigsetjmp (struct __jmp_buf_tag *__env, int __savemask) throw ();





extern int pthread_mutex_init (pthread_mutex_t *__mutex,
          const pthread_mutexattr_t *__mutexattr)
     throw () __attribute__ ((__nonnull__ (1)));


extern int pthread_mutex_destroy (pthread_mutex_t *__mutex)
     throw () __attribute__ ((__nonnull__ (1)));


extern int pthread_mutex_trylock (pthread_mutex_t *__mutex)
     throw () __attribute__ ((__nonnull__ (1)));


extern int pthread_mutex_lock (pthread_mutex_t *__mutex)
     throw () __attribute__ ((__nonnull__ (1)));



extern int pthread_mutex_timedlock (pthread_mutex_t *__restrict __mutex,
        const struct timespec *__restrict
        __abstime) throw () __attribute__ ((__nonnull__ (1, 2)));



extern int pthread_mutex_unlock (pthread_mutex_t *__mutex)
     throw () __attribute__ ((__nonnull__ (1)));



extern int pthread_mutex_getprioceiling (const pthread_mutex_t *
      __restrict __mutex,
      int *__restrict __prioceiling)
     throw () __attribute__ ((__nonnull__ (1, 2)));



extern int pthread_mutex_setprioceiling (pthread_mutex_t *__restrict __mutex,
      int __prioceiling,
      int *__restrict __old_ceiling)
     throw () __attribute__ ((__nonnull__ (1, 3)));




extern int pthread_mutex_consistent (pthread_mutex_t *__mutex)
     throw () __attribute__ ((__nonnull__ (1)));

extern int pthread_mutex_consistent_np (pthread_mutex_t *__mutex)
     throw () __attribute__ ((__nonnull__ (1)));
# 806 "/usr/include/pthread.h" 3 4
extern int pthread_mutexattr_init (pthread_mutexattr_t *__attr)
     throw () __attribute__ ((__nonnull__ (1)));


extern int pthread_mutexattr_destroy (pthread_mutexattr_t *__attr)
     throw () __attribute__ ((__nonnull__ (1)));


extern int pthread_mutexattr_getpshared (const pthread_mutexattr_t *
      __restrict __attr,
      int *__restrict __pshared)
     throw () __attribute__ ((__nonnull__ (1, 2)));


extern int pthread_mutexattr_setpshared (pthread_mutexattr_t *__attr,
      int __pshared)
     throw () __attribute__ ((__nonnull__ (1)));



extern int pthread_mutexattr_gettype (const pthread_mutexattr_t *__restrict
          __attr, int *__restrict __kind)
     throw () __attribute__ ((__nonnull__ (1, 2)));




extern int pthread_mutexattr_settype (pthread_mutexattr_t *__attr, int __kind)
     throw () __attribute__ ((__nonnull__ (1)));



extern int pthread_mutexattr_getprotocol (const pthread_mutexattr_t *
       __restrict __attr,
       int *__restrict __protocol)
     throw () __attribute__ ((__nonnull__ (1, 2)));



extern int pthread_mutexattr_setprotocol (pthread_mutexattr_t *__attr,
       int __protocol)
     throw () __attribute__ ((__nonnull__ (1)));


extern int pthread_mutexattr_getprioceiling (const pthread_mutexattr_t *
          __restrict __attr,
          int *__restrict __prioceiling)
     throw () __attribute__ ((__nonnull__ (1, 2)));


extern int pthread_mutexattr_setprioceiling (pthread_mutexattr_t *__attr,
          int __prioceiling)
     throw () __attribute__ ((__nonnull__ (1)));



extern int pthread_mutexattr_getrobust (const pthread_mutexattr_t *__attr,
     int *__robustness)
     throw () __attribute__ ((__nonnull__ (1, 2)));

extern int pthread_mutexattr_getrobust_np (const pthread_mutexattr_t *__attr,
        int *__robustness)
     throw () __attribute__ ((__nonnull__ (1, 2)));



extern int pthread_mutexattr_setrobust (pthread_mutexattr_t *__attr,
     int __robustness)
     throw () __attribute__ ((__nonnull__ (1)));

extern int pthread_mutexattr_setrobust_np (pthread_mutexattr_t *__attr,
        int __robustness)
     throw () __attribute__ ((__nonnull__ (1)));
# 888 "/usr/include/pthread.h" 3 4
extern int pthread_rwlock_init (pthread_rwlock_t *__restrict __rwlock,
    const pthread_rwlockattr_t *__restrict
    __attr) throw () __attribute__ ((__nonnull__ (1)));


extern int pthread_rwlock_destroy (pthread_rwlock_t *__rwlock)
     throw () __attribute__ ((__nonnull__ (1)));


extern int pthread_rwlock_rdlock (pthread_rwlock_t *__rwlock)
     throw () __attribute__ ((__nonnull__ (1)));


extern int pthread_rwlock_tryrdlock (pthread_rwlock_t *__rwlock)
  throw () __attribute__ ((__nonnull__ (1)));



extern int pthread_rwlock_timedrdlock (pthread_rwlock_t *__restrict __rwlock,
           const struct timespec *__restrict
           __abstime) throw () __attribute__ ((__nonnull__ (1, 2)));



extern int pthread_rwlock_wrlock (pthread_rwlock_t *__rwlock)
     throw () __attribute__ ((__nonnull__ (1)));


extern int pthread_rwlock_trywrlock (pthread_rwlock_t *__rwlock)
     throw () __attribute__ ((__nonnull__ (1)));



extern int pthread_rwlock_timedwrlock (pthread_rwlock_t *__restrict __rwlock,
           const struct timespec *__restrict
           __abstime) throw () __attribute__ ((__nonnull__ (1, 2)));



extern int pthread_rwlock_unlock (pthread_rwlock_t *__rwlock)
     throw () __attribute__ ((__nonnull__ (1)));





extern int pthread_rwlockattr_init (pthread_rwlockattr_t *__attr)
     throw () __attribute__ ((__nonnull__ (1)));


extern int pthread_rwlockattr_destroy (pthread_rwlockattr_t *__attr)
     throw () __attribute__ ((__nonnull__ (1)));


extern int pthread_rwlockattr_getpshared (const pthread_rwlockattr_t *
       __restrict __attr,
       int *__restrict __pshared)
     throw () __attribute__ ((__nonnull__ (1, 2)));


extern int pthread_rwlockattr_setpshared (pthread_rwlockattr_t *__attr,
       int __pshared)
     throw () __attribute__ ((__nonnull__ (1)));


extern int pthread_rwlockattr_getkind_np (const pthread_rwlockattr_t *
       __restrict __attr,
       int *__restrict __pref)
     throw () __attribute__ ((__nonnull__ (1, 2)));


extern int pthread_rwlockattr_setkind_np (pthread_rwlockattr_t *__attr,
       int __pref) throw () __attribute__ ((__nonnull__ (1)));







extern int pthread_cond_init (pthread_cond_t *__restrict __cond,
         const pthread_condattr_t *__restrict __cond_attr)
     throw () __attribute__ ((__nonnull__ (1)));


extern int pthread_cond_destroy (pthread_cond_t *__cond)
     throw () __attribute__ ((__nonnull__ (1)));


extern int pthread_cond_signal (pthread_cond_t *__cond)
     throw () __attribute__ ((__nonnull__ (1)));


extern int pthread_cond_broadcast (pthread_cond_t *__cond)
     throw () __attribute__ ((__nonnull__ (1)));






extern int pthread_cond_wait (pthread_cond_t *__restrict __cond,
         pthread_mutex_t *__restrict __mutex)
     __attribute__ ((__nonnull__ (1, 2)));
# 1000 "/usr/include/pthread.h" 3 4
extern int pthread_cond_timedwait (pthread_cond_t *__restrict __cond,
       pthread_mutex_t *__restrict __mutex,
       const struct timespec *__restrict __abstime)
     __attribute__ ((__nonnull__ (1, 2, 3)));




extern int pthread_condattr_init (pthread_condattr_t *__attr)
     throw () __attribute__ ((__nonnull__ (1)));


extern int pthread_condattr_destroy (pthread_condattr_t *__attr)
     throw () __attribute__ ((__nonnull__ (1)));


extern int pthread_condattr_getpshared (const pthread_condattr_t *
     __restrict __attr,
     int *__restrict __pshared)
     throw () __attribute__ ((__nonnull__ (1, 2)));


extern int pthread_condattr_setpshared (pthread_condattr_t *__attr,
     int __pshared) throw () __attribute__ ((__nonnull__ (1)));



extern int pthread_condattr_getclock (const pthread_condattr_t *
          __restrict __attr,
          __clockid_t *__restrict __clock_id)
     throw () __attribute__ ((__nonnull__ (1, 2)));


extern int pthread_condattr_setclock (pthread_condattr_t *__attr,
          __clockid_t __clock_id)
     throw () __attribute__ ((__nonnull__ (1)));
# 1044 "/usr/include/pthread.h" 3 4
extern int pthread_spin_init (pthread_spinlock_t *__lock, int __pshared)
     throw () __attribute__ ((__nonnull__ (1)));


extern int pthread_spin_destroy (pthread_spinlock_t *__lock)
     throw () __attribute__ ((__nonnull__ (1)));


extern int pthread_spin_lock (pthread_spinlock_t *__lock)
     throw () __attribute__ ((__nonnull__ (1)));


extern int pthread_spin_trylock (pthread_spinlock_t *__lock)
     throw () __attribute__ ((__nonnull__ (1)));


extern int pthread_spin_unlock (pthread_spinlock_t *__lock)
     throw () __attribute__ ((__nonnull__ (1)));






extern int pthread_barrier_init (pthread_barrier_t *__restrict __barrier,
     const pthread_barrierattr_t *__restrict
     __attr, unsigned int __count)
     throw () __attribute__ ((__nonnull__ (1)));


extern int pthread_barrier_destroy (pthread_barrier_t *__barrier)
     throw () __attribute__ ((__nonnull__ (1)));


extern int pthread_barrier_wait (pthread_barrier_t *__barrier)
     throw () __attribute__ ((__nonnull__ (1)));



extern int pthread_barrierattr_init (pthread_barrierattr_t *__attr)
     throw () __attribute__ ((__nonnull__ (1)));


extern int pthread_barrierattr_destroy (pthread_barrierattr_t *__attr)
     throw () __attribute__ ((__nonnull__ (1)));


extern int pthread_barrierattr_getpshared (const pthread_barrierattr_t *
        __restrict __attr,
        int *__restrict __pshared)
     throw () __attribute__ ((__nonnull__ (1, 2)));


extern int pthread_barrierattr_setpshared (pthread_barrierattr_t *__attr,
        int __pshared)
     throw () __attribute__ ((__nonnull__ (1)));
# 1111 "/usr/include/pthread.h" 3 4
extern int pthread_key_create (pthread_key_t *__key,
          void (*__destr_function) (void *))
     throw () __attribute__ ((__nonnull__ (1)));


extern int pthread_key_delete (pthread_key_t __key) throw ();


extern void *pthread_getspecific (pthread_key_t __key) throw ();


extern int pthread_setspecific (pthread_key_t __key,
    const void *__pointer) throw () ;




extern int pthread_getcpuclockid (pthread_t __thread_id,
      __clockid_t *__clock_id)
     throw () __attribute__ ((__nonnull__ (2)));
# 1145 "/usr/include/pthread.h" 3 4
extern int pthread_atfork (void (*__prepare) (void),
      void (*__parent) (void),
      void (*__child) (void)) throw ();




extern __inline __attribute__ ((__gnu_inline__)) int
__attribute__ ((__leaf__)) pthread_equal (pthread_t __thread1, pthread_t __thread2) throw ()
{
  return __thread1 == __thread2;
}


}
# 73 "/usr/local/cuda/targets/x86_64-linux/include/nvtx3/nvtxDetail/nvtxImpl.h" 2

# 1 "/usr/include/wchar.h" 1 3 4
# 39 "/usr/include/wchar.h" 3 4
# 1 "/usr/lib/gcc/x86_64-linux-gnu/5/include/stdarg.h" 1 3 4
# 40 "/usr/include/wchar.h" 2 3 4
# 51 "/usr/include/wchar.h" 3 4
# 1 "/usr/lib/gcc/x86_64-linux-gnu/5/include/stddef.h" 1 3 4
# 357 "/usr/lib/gcc/x86_64-linux-gnu/5/include/stddef.h" 3 4
typedef unsigned int wint_t;
# 52 "/usr/include/wchar.h" 2 3 4
# 104 "/usr/include/wchar.h" 3 4


typedef __mbstate_t mbstate_t;






# 132 "/usr/include/wchar.h" 3 4
extern "C" {




struct tm;









extern wchar_t *wcscpy (wchar_t *__restrict __dest,
   const wchar_t *__restrict __src)
     throw () __attribute__ ((__nonnull__ (1, 2)));


extern wchar_t *wcsncpy (wchar_t *__restrict __dest,
    const wchar_t *__restrict __src, size_t __n)
     throw () __attribute__ ((__nonnull__ (1, 2)));


extern wchar_t *wcscat (wchar_t *__restrict __dest,
   const wchar_t *__restrict __src)
     throw () __attribute__ ((__nonnull__ (1, 2)));

extern wchar_t *wcsncat (wchar_t *__restrict __dest,
    const wchar_t *__restrict __src, size_t __n)
     throw () __attribute__ ((__nonnull__ (1, 2)));


extern int wcscmp (const wchar_t *__s1, const wchar_t *__s2)
     throw () __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2)));

extern int wcsncmp (const wchar_t *__s1, const wchar_t *__s2, size_t __n)
     throw () __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2)));




extern int wcscasecmp (const wchar_t *__s1, const wchar_t *__s2) throw ();


extern int wcsncasecmp (const wchar_t *__s1, const wchar_t *__s2,
   size_t __n) throw ();





extern int wcscasecmp_l (const wchar_t *__s1, const wchar_t *__s2,
    __locale_t __loc) throw ();

extern int wcsncasecmp_l (const wchar_t *__s1, const wchar_t *__s2,
     size_t __n, __locale_t __loc) throw ();





extern int wcscoll (const wchar_t *__s1, const wchar_t *__s2) throw ();



extern size_t wcsxfrm (wchar_t *__restrict __s1,
         const wchar_t *__restrict __s2, size_t __n) throw ();








extern int wcscoll_l (const wchar_t *__s1, const wchar_t *__s2,
        __locale_t __loc) throw ();




extern size_t wcsxfrm_l (wchar_t *__s1, const wchar_t *__s2,
    size_t __n, __locale_t __loc) throw ();


extern wchar_t *wcsdup (const wchar_t *__s) throw () __attribute__ ((__malloc__));





extern "C++" wchar_t *wcschr (wchar_t *__wcs, wchar_t __wc)
     throw () __asm ("wcschr") __attribute__ ((__pure__));
extern "C++" const wchar_t *wcschr (const wchar_t *__wcs, wchar_t __wc)
     throw () __asm ("wcschr") __attribute__ ((__pure__));






extern "C++" wchar_t *wcsrchr (wchar_t *__wcs, wchar_t __wc)
     throw () __asm ("wcsrchr") __attribute__ ((__pure__));
extern "C++" const wchar_t *wcsrchr (const wchar_t *__wcs, wchar_t __wc)
     throw () __asm ("wcsrchr") __attribute__ ((__pure__));









extern wchar_t *wcschrnul (const wchar_t *__s, wchar_t __wc)
     throw () __attribute__ ((__pure__));





extern size_t wcscspn (const wchar_t *__wcs, const wchar_t *__reject)
     throw () __attribute__ ((__pure__));


extern size_t wcsspn (const wchar_t *__wcs, const wchar_t *__accept)
     throw () __attribute__ ((__pure__));


extern "C++" wchar_t *wcspbrk (wchar_t *__wcs, const wchar_t *__accept)
     throw () __asm ("wcspbrk") __attribute__ ((__pure__));
extern "C++" const wchar_t *wcspbrk (const wchar_t *__wcs,
         const wchar_t *__accept)
     throw () __asm ("wcspbrk") __attribute__ ((__pure__));






extern "C++" wchar_t *wcsstr (wchar_t *__haystack, const wchar_t *__needle)
     throw () __asm ("wcsstr") __attribute__ ((__pure__));
extern "C++" const wchar_t *wcsstr (const wchar_t *__haystack,
        const wchar_t *__needle)
     throw () __asm ("wcsstr") __attribute__ ((__pure__));






extern wchar_t *wcstok (wchar_t *__restrict __s,
   const wchar_t *__restrict __delim,
   wchar_t **__restrict __ptr) throw ();


extern size_t wcslen (const wchar_t *__s) throw () __attribute__ ((__pure__));





extern "C++" wchar_t *wcswcs (wchar_t *__haystack, const wchar_t *__needle)
     throw () __asm ("wcswcs") __attribute__ ((__pure__));
extern "C++" const wchar_t *wcswcs (const wchar_t *__haystack,
        const wchar_t *__needle)
     throw () __asm ("wcswcs") __attribute__ ((__pure__));
# 309 "/usr/include/wchar.h" 3 4
extern size_t wcsnlen (const wchar_t *__s, size_t __maxlen)
     throw () __attribute__ ((__pure__));






extern "C++" wchar_t *wmemchr (wchar_t *__s, wchar_t __c, size_t __n)
     throw () __asm ("wmemchr") __attribute__ ((__pure__));
extern "C++" const wchar_t *wmemchr (const wchar_t *__s, wchar_t __c,
         size_t __n)
     throw () __asm ("wmemchr") __attribute__ ((__pure__));






extern int wmemcmp (const wchar_t *__s1, const wchar_t *__s2, size_t __n)
     throw () __attribute__ ((__pure__));


extern wchar_t *wmemcpy (wchar_t *__restrict __s1,
    const wchar_t *__restrict __s2, size_t __n) throw ();



extern wchar_t *wmemmove (wchar_t *__s1, const wchar_t *__s2, size_t __n)
     throw ();


extern wchar_t *wmemset (wchar_t *__s, wchar_t __c, size_t __n) throw ();





extern wchar_t *wmempcpy (wchar_t *__restrict __s1,
     const wchar_t *__restrict __s2, size_t __n)
     throw ();






extern wint_t btowc (int __c) throw ();



extern int wctob (wint_t __c) throw ();



extern int mbsinit (const mbstate_t *__ps) throw () __attribute__ ((__pure__));



extern size_t mbrtowc (wchar_t *__restrict __pwc,
         const char *__restrict __s, size_t __n,
         mbstate_t *__restrict __p) throw ();


extern size_t wcrtomb (char *__restrict __s, wchar_t __wc,
         mbstate_t *__restrict __ps) throw ();


extern size_t __mbrlen (const char *__restrict __s, size_t __n,
   mbstate_t *__restrict __ps) throw ();
extern size_t mbrlen (const char *__restrict __s, size_t __n,
        mbstate_t *__restrict __ps) throw ();








extern wint_t __btowc_alias (int __c) __asm ("btowc");
extern __inline __attribute__ ((__gnu_inline__)) wint_t
__attribute__ ((__leaf__)) btowc (int __c) throw ()
{ return (__builtin_constant_p (__c) && __c >= '\0' && __c <= '\x7f'
   ? (wint_t) __c : __btowc_alias (__c)); }

extern int __wctob_alias (wint_t __c) __asm ("wctob");
extern __inline __attribute__ ((__gnu_inline__)) int
__attribute__ ((__leaf__)) wctob (wint_t __wc) throw ()
{ return (__builtin_constant_p (__wc) && __wc >= L'\0' && __wc <= L'\x7f'
   ? (int) __wc : __wctob_alias (__wc)); }

extern __inline __attribute__ ((__gnu_inline__)) size_t
__attribute__ ((__leaf__)) mbrlen (const char *__restrict __s, size_t __n, mbstate_t *__restrict __ps) throw ()

{ return (__ps != __null
   ? mbrtowc (__null, __s, __n, __ps) : __mbrlen (__s, __n, __null)); }





extern size_t mbsrtowcs (wchar_t *__restrict __dst,
    const char **__restrict __src, size_t __len,
    mbstate_t *__restrict __ps) throw ();



extern size_t wcsrtombs (char *__restrict __dst,
    const wchar_t **__restrict __src, size_t __len,
    mbstate_t *__restrict __ps) throw ();






extern size_t mbsnrtowcs (wchar_t *__restrict __dst,
     const char **__restrict __src, size_t __nmc,
     size_t __len, mbstate_t *__restrict __ps) throw ();



extern size_t wcsnrtombs (char *__restrict __dst,
     const wchar_t **__restrict __src,
     size_t __nwc, size_t __len,
     mbstate_t *__restrict __ps) throw ();






extern int wcwidth (wchar_t __c) throw ();



extern int wcswidth (const wchar_t *__s, size_t __n) throw ();






extern double wcstod (const wchar_t *__restrict __nptr,
        wchar_t **__restrict __endptr) throw ();





extern float wcstof (const wchar_t *__restrict __nptr,
       wchar_t **__restrict __endptr) throw ();
extern long double wcstold (const wchar_t *__restrict __nptr,
       wchar_t **__restrict __endptr) throw ();







extern long int wcstol (const wchar_t *__restrict __nptr,
   wchar_t **__restrict __endptr, int __base) throw ();



extern unsigned long int wcstoul (const wchar_t *__restrict __nptr,
      wchar_t **__restrict __endptr, int __base)
     throw ();






__extension__
extern long long int wcstoll (const wchar_t *__restrict __nptr,
         wchar_t **__restrict __endptr, int __base)
     throw ();



__extension__
extern unsigned long long int wcstoull (const wchar_t *__restrict __nptr,
     wchar_t **__restrict __endptr,
     int __base) throw ();






__extension__
extern long long int wcstoq (const wchar_t *__restrict __nptr,
        wchar_t **__restrict __endptr, int __base)
     throw ();



__extension__
extern unsigned long long int wcstouq (const wchar_t *__restrict __nptr,
           wchar_t **__restrict __endptr,
           int __base) throw ();
# 533 "/usr/include/wchar.h" 3 4
extern long int wcstol_l (const wchar_t *__restrict __nptr,
     wchar_t **__restrict __endptr, int __base,
     __locale_t __loc) throw ();

extern unsigned long int wcstoul_l (const wchar_t *__restrict __nptr,
        wchar_t **__restrict __endptr,
        int __base, __locale_t __loc) throw ();

__extension__
extern long long int wcstoll_l (const wchar_t *__restrict __nptr,
    wchar_t **__restrict __endptr,
    int __base, __locale_t __loc) throw ();

__extension__
extern unsigned long long int wcstoull_l (const wchar_t *__restrict __nptr,
       wchar_t **__restrict __endptr,
       int __base, __locale_t __loc)
     throw ();

extern double wcstod_l (const wchar_t *__restrict __nptr,
   wchar_t **__restrict __endptr, __locale_t __loc)
     throw ();

extern float wcstof_l (const wchar_t *__restrict __nptr,
         wchar_t **__restrict __endptr, __locale_t __loc)
     throw ();

extern long double wcstold_l (const wchar_t *__restrict __nptr,
         wchar_t **__restrict __endptr,
         __locale_t __loc) throw ();






extern wchar_t *wcpcpy (wchar_t *__restrict __dest,
   const wchar_t *__restrict __src) throw ();



extern wchar_t *wcpncpy (wchar_t *__restrict __dest,
    const wchar_t *__restrict __src, size_t __n)
     throw ();






extern __FILE *open_wmemstream (wchar_t **__bufloc, size_t *__sizeloc) throw ();






extern int fwide (__FILE *__fp, int __mode) throw ();






extern int fwprintf (__FILE *__restrict __stream,
       const wchar_t *__restrict __format, ...)
                                                           ;




extern int wprintf (const wchar_t *__restrict __format, ...)
                                                           ;

extern int swprintf (wchar_t *__restrict __s, size_t __n,
       const wchar_t *__restrict __format, ...)
     throw () ;





extern int vfwprintf (__FILE *__restrict __s,
        const wchar_t *__restrict __format,
        __gnuc_va_list __arg)
                                                           ;




extern int vwprintf (const wchar_t *__restrict __format,
       __gnuc_va_list __arg)
                                                           ;


extern int vswprintf (wchar_t *__restrict __s, size_t __n,
        const wchar_t *__restrict __format,
        __gnuc_va_list __arg)
     throw () ;






extern int fwscanf (__FILE *__restrict __stream,
      const wchar_t *__restrict __format, ...)
                                                          ;




extern int wscanf (const wchar_t *__restrict __format, ...)
                                                          ;

extern int swscanf (const wchar_t *__restrict __s,
      const wchar_t *__restrict __format, ...)
     throw () ;
# 683 "/usr/include/wchar.h" 3 4









extern int vfwscanf (__FILE *__restrict __s,
       const wchar_t *__restrict __format,
       __gnuc_va_list __arg)
                                                          ;




extern int vwscanf (const wchar_t *__restrict __format,
      __gnuc_va_list __arg)
                                                          ;

extern int vswscanf (const wchar_t *__restrict __s,
       const wchar_t *__restrict __format,
       __gnuc_va_list __arg)
     throw () ;
# 739 "/usr/include/wchar.h" 3 4









extern wint_t fgetwc (__FILE *__stream);
extern wint_t getwc (__FILE *__stream);





extern wint_t getwchar (void);






extern wint_t fputwc (wchar_t __wc, __FILE *__stream);
extern wint_t putwc (wchar_t __wc, __FILE *__stream);





extern wint_t putwchar (wchar_t __wc);







extern wchar_t *fgetws (wchar_t *__restrict __ws, int __n,
   __FILE *__restrict __stream);





extern int fputws (const wchar_t *__restrict __ws,
     __FILE *__restrict __stream);






extern wint_t ungetwc (wint_t __wc, __FILE *__stream);

# 804 "/usr/include/wchar.h" 3 4
extern wint_t getwc_unlocked (__FILE *__stream);
extern wint_t getwchar_unlocked (void);







extern wint_t fgetwc_unlocked (__FILE *__stream);







extern wint_t fputwc_unlocked (wchar_t __wc, __FILE *__stream);
# 830 "/usr/include/wchar.h" 3 4
extern wint_t putwc_unlocked (wchar_t __wc, __FILE *__stream);
extern wint_t putwchar_unlocked (wchar_t __wc);
# 840 "/usr/include/wchar.h" 3 4
extern wchar_t *fgetws_unlocked (wchar_t *__restrict __ws, int __n,
     __FILE *__restrict __stream);







extern int fputws_unlocked (const wchar_t *__restrict __ws,
       __FILE *__restrict __stream);







extern size_t wcsftime (wchar_t *__restrict __s, size_t __maxsize,
   const wchar_t *__restrict __format,
   const struct tm *__restrict __tp) throw ();







extern size_t wcsftime_l (wchar_t *__restrict __s, size_t __maxsize,
     const wchar_t *__restrict __format,
     const struct tm *__restrict __tp,
     __locale_t __loc) throw ();
# 887 "/usr/include/wchar.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/wchar2.h" 1 3 4
# 24 "/usr/include/x86_64-linux-gnu/bits/wchar2.h" 3 4
extern wchar_t *__wmemcpy_chk (wchar_t *__restrict __s1,
          const wchar_t *__restrict __s2, size_t __n,
          size_t __ns1) throw ();
extern wchar_t *__wmemcpy_alias (wchar_t *__restrict __s1, const wchar_t *__restrict __s2, size_t __n) throw () __asm__ ("" "wmemcpy")


            ;
extern wchar_t *__wmemcpy_chk_warn (wchar_t *__restrict __s1, const wchar_t *__restrict __s2, size_t __n, size_t __ns1) throw () __asm__ ("" "__wmemcpy_chk")



     __attribute__((__warning__ ("wmemcpy called with length bigger than size of destination " "buffer")))
            ;

extern __inline __attribute__ ((__always_inline__)) __attribute__ ((__gnu_inline__)) __attribute__ ((__artificial__)) wchar_t *
__attribute__ ((__leaf__)) wmemcpy (wchar_t *__restrict __s1, const wchar_t *__restrict __s2, size_t __n) throw ()

{
  if (__builtin_object_size (__s1, 0) != (size_t) -1)
    {
      if (!__builtin_constant_p (__n))
 return __wmemcpy_chk (__s1, __s2, __n,
         __builtin_object_size (__s1, 0) / sizeof (wchar_t));

      if (__n > __builtin_object_size (__s1, 0) / sizeof (wchar_t))
 return __wmemcpy_chk_warn (__s1, __s2, __n,
       __builtin_object_size (__s1, 0) / sizeof (wchar_t));
    }
  return __wmemcpy_alias (__s1, __s2, __n);
}


extern wchar_t *__wmemmove_chk (wchar_t *__s1, const wchar_t *__s2,
    size_t __n, size_t __ns1) throw ();
extern wchar_t *__wmemmove_alias (wchar_t *__s1, const wchar_t *__s2, size_t __n) throw () __asm__ ("" "wmemmove")

                               ;
extern wchar_t *__wmemmove_chk_warn (wchar_t *__s1, const wchar_t *__s2, size_t __n, size_t __ns1) throw () __asm__ ("" "__wmemmove_chk")


     __attribute__((__warning__ ("wmemmove called with length bigger than size of destination " "buffer")))
            ;

extern __inline __attribute__ ((__always_inline__)) __attribute__ ((__gnu_inline__)) __attribute__ ((__artificial__)) wchar_t *
__attribute__ ((__leaf__)) wmemmove (wchar_t *__s1, const wchar_t *__s2, size_t __n) throw ()
{
  if (__builtin_object_size (__s1, 0) != (size_t) -1)
    {
      if (!__builtin_constant_p (__n))
 return __wmemmove_chk (__s1, __s2, __n,
          __builtin_object_size (__s1, 0) / sizeof (wchar_t));

      if (__n > __builtin_object_size (__s1, 0) / sizeof (wchar_t))
 return __wmemmove_chk_warn (__s1, __s2, __n,
        __builtin_object_size (__s1, 0) / sizeof (wchar_t));
    }
  return __wmemmove_alias (__s1, __s2, __n);
}



extern wchar_t *__wmempcpy_chk (wchar_t *__restrict __s1,
    const wchar_t *__restrict __s2, size_t __n,
    size_t __ns1) throw ();
extern wchar_t *__wmempcpy_alias (wchar_t *__restrict __s1, const wchar_t *__restrict __s2, size_t __n) throw () __asm__ ("" "wmempcpy")


                           ;
extern wchar_t *__wmempcpy_chk_warn (wchar_t *__restrict __s1, const wchar_t *__restrict __s2, size_t __n, size_t __ns1) throw () __asm__ ("" "__wmempcpy_chk")



     __attribute__((__warning__ ("wmempcpy called with length bigger than size of destination " "buffer")))
            ;

extern __inline __attribute__ ((__always_inline__)) __attribute__ ((__gnu_inline__)) __attribute__ ((__artificial__)) wchar_t *
__attribute__ ((__leaf__)) wmempcpy (wchar_t *__restrict __s1, const wchar_t *__restrict __s2, size_t __n) throw ()

{
  if (__builtin_object_size (__s1, 0) != (size_t) -1)
    {
      if (!__builtin_constant_p (__n))
 return __wmempcpy_chk (__s1, __s2, __n,
          __builtin_object_size (__s1, 0) / sizeof (wchar_t));

      if (__n > __builtin_object_size (__s1, 0) / sizeof (wchar_t))
 return __wmempcpy_chk_warn (__s1, __s2, __n,
        __builtin_object_size (__s1, 0) / sizeof (wchar_t));
    }
  return __wmempcpy_alias (__s1, __s2, __n);
}



extern wchar_t *__wmemset_chk (wchar_t *__s, wchar_t __c, size_t __n,
          size_t __ns) throw ();
extern wchar_t *__wmemset_alias (wchar_t *__s, wchar_t __c, size_t __n) throw () __asm__ ("" "wmemset")
                             ;
extern wchar_t *__wmemset_chk_warn (wchar_t *__s, wchar_t __c, size_t __n, size_t __ns) throw () __asm__ ("" "__wmemset_chk")


     __attribute__((__warning__ ("wmemset called with length bigger than size of destination " "buffer")))
            ;

extern __inline __attribute__ ((__always_inline__)) __attribute__ ((__gnu_inline__)) __attribute__ ((__artificial__)) wchar_t *
__attribute__ ((__leaf__)) wmemset (wchar_t *__s, wchar_t __c, size_t __n) throw ()
{
  if (__builtin_object_size (__s, 0) != (size_t) -1)
    {
      if (!__builtin_constant_p (__n))
 return __wmemset_chk (__s, __c, __n, __builtin_object_size (__s, 0) / sizeof (wchar_t));

      if (__n > __builtin_object_size (__s, 0) / sizeof (wchar_t))
 return __wmemset_chk_warn (__s, __c, __n,
       __builtin_object_size (__s, 0) / sizeof (wchar_t));
    }
  return __wmemset_alias (__s, __c, __n);
}


extern wchar_t *__wcscpy_chk (wchar_t *__restrict __dest,
         const wchar_t *__restrict __src,
         size_t __n) throw ();
extern wchar_t *__wcscpy_alias (wchar_t *__restrict __dest, const wchar_t *__restrict __src) throw () __asm__ ("" "wcscpy")

                                              ;

extern __inline __attribute__ ((__always_inline__)) __attribute__ ((__gnu_inline__)) __attribute__ ((__artificial__)) wchar_t *
__attribute__ ((__leaf__)) wcscpy (wchar_t *__restrict __dest, const wchar_t *__restrict __src) throw ()
{
  if (__builtin_object_size (__dest, 2 > 1) != (size_t) -1)
    return __wcscpy_chk (__dest, __src, __builtin_object_size (__dest, 2 > 1) / sizeof (wchar_t));
  return __wcscpy_alias (__dest, __src);
}


extern wchar_t *__wcpcpy_chk (wchar_t *__restrict __dest,
         const wchar_t *__restrict __src,
         size_t __destlen) throw ();
extern wchar_t *__wcpcpy_alias (wchar_t *__restrict __dest, const wchar_t *__restrict __src) throw () __asm__ ("" "wcpcpy")

                                              ;

extern __inline __attribute__ ((__always_inline__)) __attribute__ ((__gnu_inline__)) __attribute__ ((__artificial__)) wchar_t *
__attribute__ ((__leaf__)) wcpcpy (wchar_t *__restrict __dest, const wchar_t *__restrict __src) throw ()
{
  if (__builtin_object_size (__dest, 2 > 1) != (size_t) -1)
    return __wcpcpy_chk (__dest, __src, __builtin_object_size (__dest, 2 > 1) / sizeof (wchar_t));
  return __wcpcpy_alias (__dest, __src);
}


extern wchar_t *__wcsncpy_chk (wchar_t *__restrict __dest,
          const wchar_t *__restrict __src, size_t __n,
          size_t __destlen) throw ();
extern wchar_t *__wcsncpy_alias (wchar_t *__restrict __dest, const wchar_t *__restrict __src, size_t __n) throw () __asm__ ("" "wcsncpy")


                          ;
extern wchar_t *__wcsncpy_chk_warn (wchar_t *__restrict __dest, const wchar_t *__restrict __src, size_t __n, size_t __destlen) throw () __asm__ ("" "__wcsncpy_chk")



     __attribute__((__warning__ ("wcsncpy called with length bigger than size of destination " "buffer")))
            ;

extern __inline __attribute__ ((__always_inline__)) __attribute__ ((__gnu_inline__)) __attribute__ ((__artificial__)) wchar_t *
__attribute__ ((__leaf__)) wcsncpy (wchar_t *__restrict __dest, const wchar_t *__restrict __src, size_t __n) throw ()

{
  if (__builtin_object_size (__dest, 2 > 1) != (size_t) -1)
    {
      if (!__builtin_constant_p (__n))
 return __wcsncpy_chk (__dest, __src, __n,
         __builtin_object_size (__dest, 2 > 1) / sizeof (wchar_t));
      if (__n > __builtin_object_size (__dest, 2 > 1) / sizeof (wchar_t))
 return __wcsncpy_chk_warn (__dest, __src, __n,
       __builtin_object_size (__dest, 2 > 1) / sizeof (wchar_t));
    }
  return __wcsncpy_alias (__dest, __src, __n);
}


extern wchar_t *__wcpncpy_chk (wchar_t *__restrict __dest,
          const wchar_t *__restrict __src, size_t __n,
          size_t __destlen) throw ();
extern wchar_t *__wcpncpy_alias (wchar_t *__restrict __dest, const wchar_t *__restrict __src, size_t __n) throw () __asm__ ("" "wcpncpy")


                          ;
extern wchar_t *__wcpncpy_chk_warn (wchar_t *__restrict __dest, const wchar_t *__restrict __src, size_t __n, size_t __destlen) throw () __asm__ ("" "__wcpncpy_chk")



     __attribute__((__warning__ ("wcpncpy called with length bigger than size of destination " "buffer")))
            ;

extern __inline __attribute__ ((__always_inline__)) __attribute__ ((__gnu_inline__)) __attribute__ ((__artificial__)) wchar_t *
__attribute__ ((__leaf__)) wcpncpy (wchar_t *__restrict __dest, const wchar_t *__restrict __src, size_t __n) throw ()

{
  if (__builtin_object_size (__dest, 2 > 1) != (size_t) -1)
    {
      if (!__builtin_constant_p (__n))
 return __wcpncpy_chk (__dest, __src, __n,
         __builtin_object_size (__dest, 2 > 1) / sizeof (wchar_t));
      if (__n > __builtin_object_size (__dest, 2 > 1) / sizeof (wchar_t))
 return __wcpncpy_chk_warn (__dest, __src, __n,
       __builtin_object_size (__dest, 2 > 1) / sizeof (wchar_t));
    }
  return __wcpncpy_alias (__dest, __src, __n);
}


extern wchar_t *__wcscat_chk (wchar_t *__restrict __dest,
         const wchar_t *__restrict __src,
         size_t __destlen) throw ();
extern wchar_t *__wcscat_alias (wchar_t *__restrict __dest, const wchar_t *__restrict __src) throw () __asm__ ("" "wcscat")

                                              ;

extern __inline __attribute__ ((__always_inline__)) __attribute__ ((__gnu_inline__)) __attribute__ ((__artificial__)) wchar_t *
__attribute__ ((__leaf__)) wcscat (wchar_t *__restrict __dest, const wchar_t *__restrict __src) throw ()
{
  if (__builtin_object_size (__dest, 2 > 1) != (size_t) -1)
    return __wcscat_chk (__dest, __src, __builtin_object_size (__dest, 2 > 1) / sizeof (wchar_t));
  return __wcscat_alias (__dest, __src);
}


extern wchar_t *__wcsncat_chk (wchar_t *__restrict __dest,
          const wchar_t *__restrict __src,
          size_t __n, size_t __destlen) throw ();
extern wchar_t *__wcsncat_alias (wchar_t *__restrict __dest, const wchar_t *__restrict __src, size_t __n) throw () __asm__ ("" "wcsncat")


                          ;

extern __inline __attribute__ ((__always_inline__)) __attribute__ ((__gnu_inline__)) __attribute__ ((__artificial__)) wchar_t *
__attribute__ ((__leaf__)) wcsncat (wchar_t *__restrict __dest, const wchar_t *__restrict __src, size_t __n) throw ()

{
  if (__builtin_object_size (__dest, 2 > 1) != (size_t) -1)
    return __wcsncat_chk (__dest, __src, __n,
     __builtin_object_size (__dest, 2 > 1) / sizeof (wchar_t));
  return __wcsncat_alias (__dest, __src, __n);
}


extern int __swprintf_chk (wchar_t *__restrict __s, size_t __n,
      int __flag, size_t __s_len,
      const wchar_t *__restrict __format, ...)
     throw () ;

extern int __swprintf_alias (wchar_t *__restrict __s, size_t __n, const wchar_t *__restrict __fmt, ...) throw () __asm__ ("" "swprintf")


             ;


extern __inline __attribute__ ((__always_inline__)) __attribute__ ((__gnu_inline__)) __attribute__ ((__artificial__)) int
__attribute__ ((__leaf__)) swprintf (wchar_t *__restrict __s, size_t __n, const wchar_t *__restrict __fmt, ...) throw ()

{
  if (__builtin_object_size (__s, 2 > 1) != (size_t) -1 || 2 > 1)
    return __swprintf_chk (__s, __n, 2 - 1,
      __builtin_object_size (__s, 2 > 1) / sizeof (wchar_t),
      __fmt, __builtin_va_arg_pack ());
  return __swprintf_alias (__s, __n, __fmt, __builtin_va_arg_pack ());
}
# 303 "/usr/include/x86_64-linux-gnu/bits/wchar2.h" 3 4
extern int __vswprintf_chk (wchar_t *__restrict __s, size_t __n,
       int __flag, size_t __s_len,
       const wchar_t *__restrict __format,
       __gnuc_va_list __arg)
     throw () ;

extern int __vswprintf_alias (wchar_t *__restrict __s, size_t __n, const wchar_t *__restrict __fmt, __gnuc_va_list __ap) throw () __asm__ ("" "vswprintf")


                                     ;

extern __inline __attribute__ ((__always_inline__)) __attribute__ ((__gnu_inline__)) __attribute__ ((__artificial__)) int
__attribute__ ((__leaf__)) vswprintf (wchar_t *__restrict __s, size_t __n, const wchar_t *__restrict __fmt, __gnuc_va_list __ap) throw ()

{
  if (__builtin_object_size (__s, 2 > 1) != (size_t) -1 || 2 > 1)
    return __vswprintf_chk (__s, __n, 2 - 1,
       __builtin_object_size (__s, 2 > 1) / sizeof (wchar_t), __fmt, __ap);
  return __vswprintf_alias (__s, __n, __fmt, __ap);
}




extern int __fwprintf_chk (__FILE *__restrict __stream, int __flag,
      const wchar_t *__restrict __format, ...);
extern int __wprintf_chk (int __flag, const wchar_t *__restrict __format,
     ...);
extern int __vfwprintf_chk (__FILE *__restrict __stream, int __flag,
       const wchar_t *__restrict __format,
       __gnuc_va_list __ap);
extern int __vwprintf_chk (int __flag, const wchar_t *__restrict __format,
      __gnuc_va_list __ap);


extern __inline __attribute__ ((__always_inline__)) __attribute__ ((__gnu_inline__)) __attribute__ ((__artificial__)) int
wprintf (const wchar_t *__restrict __fmt, ...)
{
  return __wprintf_chk (2 - 1, __fmt, __builtin_va_arg_pack ());
}

extern __inline __attribute__ ((__always_inline__)) __attribute__ ((__gnu_inline__)) __attribute__ ((__artificial__)) int
fwprintf (__FILE *__restrict __stream, const wchar_t *__restrict __fmt, ...)
{
  return __fwprintf_chk (__stream, 2 - 1, __fmt,
    __builtin_va_arg_pack ());
}







extern __inline __attribute__ ((__always_inline__)) __attribute__ ((__gnu_inline__)) __attribute__ ((__artificial__)) int
vwprintf (const wchar_t *__restrict __fmt, __gnuc_va_list __ap)
{
  return __vwprintf_chk (2 - 1, __fmt, __ap);
}

extern __inline __attribute__ ((__always_inline__)) __attribute__ ((__gnu_inline__)) __attribute__ ((__artificial__)) int
vfwprintf (__FILE *__restrict __stream,
    const wchar_t *__restrict __fmt, __gnuc_va_list __ap)
{
  return __vfwprintf_chk (__stream, 2 - 1, __fmt, __ap);
}



extern wchar_t *__fgetws_chk (wchar_t *__restrict __s, size_t __size, int __n,
         __FILE *__restrict __stream) __attribute__ ((__warn_unused_result__));
extern wchar_t *__fgetws_alias (wchar_t *__restrict __s, int __n, __FILE *__restrict __stream) __asm__ ("" "fgetws")

                                              __attribute__ ((__warn_unused_result__));
extern wchar_t *__fgetws_chk_warn (wchar_t *__restrict __s, size_t __size, int __n, __FILE *__restrict __stream) __asm__ ("" "__fgetws_chk")


     __attribute__ ((__warn_unused_result__)) __attribute__((__warning__ ("fgetws called with bigger size than length " "of destination buffer")))
                                 ;

extern __inline __attribute__ ((__always_inline__)) __attribute__ ((__gnu_inline__)) __attribute__ ((__artificial__)) __attribute__ ((__warn_unused_result__)) wchar_t *
fgetws (wchar_t *__restrict __s, int __n, __FILE *__restrict __stream)
{
  if (__builtin_object_size (__s, 2 > 1) != (size_t) -1)
    {
      if (!__builtin_constant_p (__n) || __n <= 0)
 return __fgetws_chk (__s, __builtin_object_size (__s, 2 > 1) / sizeof (wchar_t),
        __n, __stream);

      if ((size_t) __n > __builtin_object_size (__s, 2 > 1) / sizeof (wchar_t))
 return __fgetws_chk_warn (__s, __builtin_object_size (__s, 2 > 1) / sizeof (wchar_t),
      __n, __stream);
    }
  return __fgetws_alias (__s, __n, __stream);
}


extern wchar_t *__fgetws_unlocked_chk (wchar_t *__restrict __s, size_t __size,
           int __n, __FILE *__restrict __stream)
  __attribute__ ((__warn_unused_result__));
extern wchar_t *__fgetws_unlocked_alias (wchar_t *__restrict __s, int __n, __FILE *__restrict __stream) __asm__ ("" "fgetws_unlocked")


  __attribute__ ((__warn_unused_result__));
extern wchar_t *__fgetws_unlocked_chk_warn (wchar_t *__restrict __s, size_t __size, int __n, __FILE *__restrict __stream) __asm__ ("" "__fgetws_unlocked_chk")



     __attribute__ ((__warn_unused_result__)) __attribute__((__warning__ ("fgetws_unlocked called with bigger size than length " "of destination buffer")))
                                 ;

extern __inline __attribute__ ((__always_inline__)) __attribute__ ((__gnu_inline__)) __attribute__ ((__artificial__)) __attribute__ ((__warn_unused_result__)) wchar_t *
fgetws_unlocked (wchar_t *__restrict __s, int __n, __FILE *__restrict __stream)
{
  if (__builtin_object_size (__s, 2 > 1) != (size_t) -1)
    {
      if (!__builtin_constant_p (__n) || __n <= 0)
 return __fgetws_unlocked_chk (__s, __builtin_object_size (__s, 2 > 1) / sizeof (wchar_t),
          __n, __stream);

      if ((size_t) __n > __builtin_object_size (__s, 2 > 1) / sizeof (wchar_t))
 return __fgetws_unlocked_chk_warn (__s, __builtin_object_size (__s, 2 > 1) / sizeof (wchar_t),
        __n, __stream);
    }
  return __fgetws_unlocked_alias (__s, __n, __stream);
}



extern size_t __wcrtomb_chk (char *__restrict __s, wchar_t __wchar,
        mbstate_t *__restrict __p,
        size_t __buflen) throw () __attribute__ ((__warn_unused_result__));
extern size_t __wcrtomb_alias (char *__restrict __s, wchar_t __wchar, mbstate_t *__restrict __ps) throw () __asm__ ("" "wcrtomb")

                                                __attribute__ ((__warn_unused_result__));

extern __inline __attribute__ ((__always_inline__)) __attribute__ ((__gnu_inline__)) __attribute__ ((__artificial__)) __attribute__ ((__warn_unused_result__)) size_t
__attribute__ ((__leaf__)) wcrtomb (char *__restrict __s, wchar_t __wchar, mbstate_t *__restrict __ps) throw ()

{







  if (__builtin_object_size (__s, 2 > 1) != (size_t) -1 && 16 > __builtin_object_size (__s, 2 > 1))
    return __wcrtomb_chk (__s, __wchar, __ps, __builtin_object_size (__s, 2 > 1));
  return __wcrtomb_alias (__s, __wchar, __ps);
}


extern size_t __mbsrtowcs_chk (wchar_t *__restrict __dst,
          const char **__restrict __src,
          size_t __len, mbstate_t *__restrict __ps,
          size_t __dstlen) throw ();
extern size_t __mbsrtowcs_alias (wchar_t *__restrict __dst, const char **__restrict __src, size_t __len, mbstate_t *__restrict __ps) throw () __asm__ ("" "mbsrtowcs")



                   ;
extern size_t __mbsrtowcs_chk_warn (wchar_t *__restrict __dst, const char **__restrict __src, size_t __len, mbstate_t *__restrict __ps, size_t __dstlen) throw () __asm__ ("" "__mbsrtowcs_chk")




     __attribute__((__warning__ ("mbsrtowcs called with dst buffer smaller than len " "* sizeof (wchar_t)")))
                        ;

extern __inline __attribute__ ((__always_inline__)) __attribute__ ((__gnu_inline__)) __attribute__ ((__artificial__)) size_t
__attribute__ ((__leaf__)) mbsrtowcs (wchar_t *__restrict __dst, const char **__restrict __src, size_t __len, mbstate_t *__restrict __ps) throw ()

{
  if (__builtin_object_size (__dst, 2 > 1) != (size_t) -1)
    {
      if (!__builtin_constant_p (__len))
 return __mbsrtowcs_chk (__dst, __src, __len, __ps,
    __builtin_object_size (__dst, 2 > 1) / sizeof (wchar_t));

      if (__len > __builtin_object_size (__dst, 2 > 1) / sizeof (wchar_t))
 return __mbsrtowcs_chk_warn (__dst, __src, __len, __ps,
         __builtin_object_size (__dst, 2 > 1) / sizeof (wchar_t));
    }
  return __mbsrtowcs_alias (__dst, __src, __len, __ps);
}


extern size_t __wcsrtombs_chk (char *__restrict __dst,
          const wchar_t **__restrict __src,
          size_t __len, mbstate_t *__restrict __ps,
          size_t __dstlen) throw ();
extern size_t __wcsrtombs_alias (char *__restrict __dst, const wchar_t **__restrict __src, size_t __len, mbstate_t *__restrict __ps) throw () __asm__ ("" "wcsrtombs")



                   ;
extern size_t __wcsrtombs_chk_warn (char *__restrict __dst, const wchar_t **__restrict __src, size_t __len, mbstate_t *__restrict __ps, size_t __dstlen) throw () __asm__ ("" "__wcsrtombs_chk")




    __attribute__((__warning__ ("wcsrtombs called with dst buffer smaller than len")));

extern __inline __attribute__ ((__always_inline__)) __attribute__ ((__gnu_inline__)) __attribute__ ((__artificial__)) size_t
__attribute__ ((__leaf__)) wcsrtombs (char *__restrict __dst, const wchar_t **__restrict __src, size_t __len, mbstate_t *__restrict __ps) throw ()

{
  if (__builtin_object_size (__dst, 2 > 1) != (size_t) -1)
    {
      if (!__builtin_constant_p (__len))
 return __wcsrtombs_chk (__dst, __src, __len, __ps, __builtin_object_size (__dst, 2 > 1));

      if (__len > __builtin_object_size (__dst, 2 > 1))
 return __wcsrtombs_chk_warn (__dst, __src, __len, __ps, __builtin_object_size (__dst, 2 > 1));
    }
  return __wcsrtombs_alias (__dst, __src, __len, __ps);
}



extern size_t __mbsnrtowcs_chk (wchar_t *__restrict __dst,
    const char **__restrict __src, size_t __nmc,
    size_t __len, mbstate_t *__restrict __ps,
    size_t __dstlen) throw ();
extern size_t __mbsnrtowcs_alias (wchar_t *__restrict __dst, const char **__restrict __src, size_t __nmc, size_t __len, mbstate_t *__restrict __ps) throw () __asm__ ("" "mbsnrtowcs")



                    ;
extern size_t __mbsnrtowcs_chk_warn (wchar_t *__restrict __dst, const char **__restrict __src, size_t __nmc, size_t __len, mbstate_t *__restrict __ps, size_t __dstlen) throw () __asm__ ("" "__mbsnrtowcs_chk")




     __attribute__((__warning__ ("mbsnrtowcs called with dst buffer smaller than len " "* sizeof (wchar_t)")))
                        ;

extern __inline __attribute__ ((__always_inline__)) __attribute__ ((__gnu_inline__)) __attribute__ ((__artificial__)) size_t
__attribute__ ((__leaf__)) mbsnrtowcs (wchar_t *__restrict __dst, const char **__restrict __src, size_t __nmc, size_t __len, mbstate_t *__restrict __ps) throw ()

{
  if (__builtin_object_size (__dst, 2 > 1) != (size_t) -1)
    {
      if (!__builtin_constant_p (__len))
 return __mbsnrtowcs_chk (__dst, __src, __nmc, __len, __ps,
     __builtin_object_size (__dst, 2 > 1) / sizeof (wchar_t));

      if (__len > __builtin_object_size (__dst, 2 > 1) / sizeof (wchar_t))
 return __mbsnrtowcs_chk_warn (__dst, __src, __nmc, __len, __ps,
          __builtin_object_size (__dst, 2 > 1) / sizeof (wchar_t));
    }
  return __mbsnrtowcs_alias (__dst, __src, __nmc, __len, __ps);
}


extern size_t __wcsnrtombs_chk (char *__restrict __dst,
    const wchar_t **__restrict __src,
    size_t __nwc, size_t __len,
    mbstate_t *__restrict __ps, size_t __dstlen)
     throw ();
extern size_t __wcsnrtombs_alias (char *__restrict __dst, const wchar_t **__restrict __src, size_t __nwc, size_t __len, mbstate_t *__restrict __ps) throw () __asm__ ("" "wcsnrtombs")



                                                  ;
extern size_t __wcsnrtombs_chk_warn (char *__restrict __dst, const wchar_t **__restrict __src, size_t __nwc, size_t __len, mbstate_t *__restrict __ps, size_t __dstlen) throw () __asm__ ("" "__wcsnrtombs_chk")





     __attribute__((__warning__ ("wcsnrtombs called with dst buffer smaller than len")));

extern __inline __attribute__ ((__always_inline__)) __attribute__ ((__gnu_inline__)) __attribute__ ((__artificial__)) size_t
__attribute__ ((__leaf__)) wcsnrtombs (char *__restrict __dst, const wchar_t **__restrict __src, size_t __nwc, size_t __len, mbstate_t *__restrict __ps) throw ()

{
  if (__builtin_object_size (__dst, 2 > 1) != (size_t) -1)
    {
      if (!__builtin_constant_p (__len))
 return __wcsnrtombs_chk (__dst, __src, __nwc, __len, __ps,
     __builtin_object_size (__dst, 2 > 1));

      if (__len > __builtin_object_size (__dst, 2 > 1))
 return __wcsnrtombs_chk_warn (__dst, __src, __nwc, __len, __ps,
          __builtin_object_size (__dst, 2 > 1));
    }
  return __wcsnrtombs_alias (__dst, __src, __nwc, __len, __ps);
}
# 888 "/usr/include/wchar.h" 2 3 4






}
# 75 "/usr/local/cuda/targets/x86_64-linux/include/nvtx3/nvtxDetail/nvtxImpl.h" 2
# 100 "/usr/local/cuda/targets/x86_64-linux/include/nvtx3/nvtxDetail/nvtxImpl.h"

# 100 "/usr/local/cuda/targets/x86_64-linux/include/nvtx3/nvtxDetail/nvtxImpl.h"
extern "C" {



#pragma GCC visibility push(hidden)




extern "C" __attribute__((visibility("hidden"))) inline void nvtxInitOnce_v3(void);
extern "C" __attribute__((visibility("hidden"))) inline int nvtxEtiGetModuleFunctionTable_v3(
    NvtxCallbackModule module,
    NvtxFunctionTable* out_table,
    unsigned int* out_size);
extern "C" __attribute__((visibility("hidden"))) inline void nvtxEtiSetInjectionNvtxVersion_v3(
    uint32_t version);
extern "C" __attribute__((visibility("hidden"))) inline const void* nvtxGetExportTable_v3(
    uint32_t exportTableId);

# 1 "/usr/local/cuda/targets/x86_64-linux/include/nvtx3/nvtxDetail/nvtxInitDecls.h" 1




extern "C" __attribute__((visibility("hidden"))) inline void nvtxMarkEx_impl_init_v3(const nvtxEventAttributes_t* eventAttrib);
extern "C" __attribute__((visibility("hidden"))) inline void nvtxMarkA_impl_init_v3(const char* message);
extern "C" __attribute__((visibility("hidden"))) inline void nvtxMarkW_impl_init_v3(const wchar_t* message);
extern "C" __attribute__((visibility("hidden"))) inline nvtxRangeId_t nvtxRangeStartEx_impl_init_v3(const nvtxEventAttributes_t* eventAttrib);
extern "C" __attribute__((visibility("hidden"))) inline nvtxRangeId_t nvtxRangeStartA_impl_init_v3(const char* message);
extern "C" __attribute__((visibility("hidden"))) inline nvtxRangeId_t nvtxRangeStartW_impl_init_v3(const wchar_t* message);
extern "C" __attribute__((visibility("hidden"))) inline void nvtxRangeEnd_impl_init_v3(nvtxRangeId_t id);
extern "C" __attribute__((visibility("hidden"))) inline int nvtxRangePushEx_impl_init_v3(const nvtxEventAttributes_t* eventAttrib);
extern "C" __attribute__((visibility("hidden"))) inline int nvtxRangePushA_impl_init_v3(const char* message);
extern "C" __attribute__((visibility("hidden"))) inline int nvtxRangePushW_impl_init_v3(const wchar_t* message);
extern "C" __attribute__((visibility("hidden"))) inline int nvtxRangePop_impl_init_v3(void);
extern "C" __attribute__((visibility("hidden"))) inline void nvtxNameCategoryA_impl_init_v3(uint32_t category, const char* name);
extern "C" __attribute__((visibility("hidden"))) inline void nvtxNameCategoryW_impl_init_v3(uint32_t category, const wchar_t* name);
extern "C" __attribute__((visibility("hidden"))) inline void nvtxNameOsThreadA_impl_init_v3(uint32_t threadId, const char* name);
extern "C" __attribute__((visibility("hidden"))) inline void nvtxNameOsThreadW_impl_init_v3(uint32_t threadId, const wchar_t* name);

extern "C" __attribute__((visibility("hidden"))) inline void nvtxNameCuDeviceA_impl_init_v3(nvtx_CUdevice device, const char* name);
extern "C" __attribute__((visibility("hidden"))) inline void nvtxNameCuDeviceW_impl_init_v3(nvtx_CUdevice device, const wchar_t* name);
extern "C" __attribute__((visibility("hidden"))) inline void nvtxNameCuContextA_impl_init_v3(nvtx_CUcontext context, const char* name);
extern "C" __attribute__((visibility("hidden"))) inline void nvtxNameCuContextW_impl_init_v3(nvtx_CUcontext context, const wchar_t* name);
extern "C" __attribute__((visibility("hidden"))) inline void nvtxNameCuStreamA_impl_init_v3(nvtx_CUstream stream, const char* name);
extern "C" __attribute__((visibility("hidden"))) inline void nvtxNameCuStreamW_impl_init_v3(nvtx_CUstream stream, const wchar_t* name);
extern "C" __attribute__((visibility("hidden"))) inline void nvtxNameCuEventA_impl_init_v3(nvtx_CUevent event, const char* name);
extern "C" __attribute__((visibility("hidden"))) inline void nvtxNameCuEventW_impl_init_v3(nvtx_CUevent event, const wchar_t* name);

extern "C" __attribute__((visibility("hidden"))) inline void nvtxNameClDeviceA_impl_init_v3(nvtx_cl_device_id device, const char* name);
extern "C" __attribute__((visibility("hidden"))) inline void nvtxNameClDeviceW_impl_init_v3(nvtx_cl_device_id device, const wchar_t* name);
extern "C" __attribute__((visibility("hidden"))) inline void nvtxNameClContextA_impl_init_v3(nvtx_cl_context context, const char* name);
extern "C" __attribute__((visibility("hidden"))) inline void nvtxNameClContextW_impl_init_v3(nvtx_cl_context context, const wchar_t* name);
extern "C" __attribute__((visibility("hidden"))) inline void nvtxNameClCommandQueueA_impl_init_v3(nvtx_cl_command_queue command_queue, const char* name);
extern "C" __attribute__((visibility("hidden"))) inline void nvtxNameClCommandQueueW_impl_init_v3(nvtx_cl_command_queue command_queue, const wchar_t* name);
extern "C" __attribute__((visibility("hidden"))) inline void nvtxNameClMemObjectA_impl_init_v3(nvtx_cl_mem memobj, const char* name);
extern "C" __attribute__((visibility("hidden"))) inline void nvtxNameClMemObjectW_impl_init_v3(nvtx_cl_mem memobj, const wchar_t* name);
extern "C" __attribute__((visibility("hidden"))) inline void nvtxNameClSamplerA_impl_init_v3(nvtx_cl_sampler sampler, const char* name);
extern "C" __attribute__((visibility("hidden"))) inline void nvtxNameClSamplerW_impl_init_v3(nvtx_cl_sampler sampler, const wchar_t* name);
extern "C" __attribute__((visibility("hidden"))) inline void nvtxNameClProgramA_impl_init_v3(nvtx_cl_program program, const char* name);
extern "C" __attribute__((visibility("hidden"))) inline void nvtxNameClProgramW_impl_init_v3(nvtx_cl_program program, const wchar_t* name);
extern "C" __attribute__((visibility("hidden"))) inline void nvtxNameClEventA_impl_init_v3(nvtx_cl_event evnt, const char* name);
extern "C" __attribute__((visibility("hidden"))) inline void nvtxNameClEventW_impl_init_v3(nvtx_cl_event evnt, const wchar_t* name);

extern "C" __attribute__((visibility("hidden"))) inline void nvtxNameCudaDeviceA_impl_init_v3(int device, const char* name);
extern "C" __attribute__((visibility("hidden"))) inline void nvtxNameCudaDeviceW_impl_init_v3(int device, const wchar_t* name);
extern "C" __attribute__((visibility("hidden"))) inline void nvtxNameCudaStreamA_impl_init_v3(nvtx_cudaStream_t stream, const char* name);
extern "C" __attribute__((visibility("hidden"))) inline void nvtxNameCudaStreamW_impl_init_v3(nvtx_cudaStream_t stream, const wchar_t* name);
extern "C" __attribute__((visibility("hidden"))) inline void nvtxNameCudaEventA_impl_init_v3(nvtx_cudaEvent_t event, const char* name);
extern "C" __attribute__((visibility("hidden"))) inline void nvtxNameCudaEventW_impl_init_v3(nvtx_cudaEvent_t event, const wchar_t* name);

extern "C" __attribute__((visibility("hidden"))) inline void nvtxDomainMarkEx_impl_init_v3(nvtxDomainHandle_t domain, const nvtxEventAttributes_t* eventAttrib);
extern "C" __attribute__((visibility("hidden"))) inline nvtxRangeId_t nvtxDomainRangeStartEx_impl_init_v3(nvtxDomainHandle_t domain, const nvtxEventAttributes_t* eventAttrib);
extern "C" __attribute__((visibility("hidden"))) inline void nvtxDomainRangeEnd_impl_init_v3(nvtxDomainHandle_t domain, nvtxRangeId_t id);
extern "C" __attribute__((visibility("hidden"))) inline int nvtxDomainRangePushEx_impl_init_v3(nvtxDomainHandle_t domain, const nvtxEventAttributes_t* eventAttrib);
extern "C" __attribute__((visibility("hidden"))) inline int nvtxDomainRangePop_impl_init_v3(nvtxDomainHandle_t domain);
extern "C" __attribute__((visibility("hidden"))) inline nvtxResourceHandle_t nvtxDomainResourceCreate_impl_init_v3(nvtxDomainHandle_t domain, nvtxResourceAttributes_t* attribs);
extern "C" __attribute__((visibility("hidden"))) inline void nvtxDomainResourceDestroy_impl_init_v3(nvtxResourceHandle_t resource);
extern "C" __attribute__((visibility("hidden"))) inline void nvtxDomainNameCategoryA_impl_init_v3(nvtxDomainHandle_t domain, uint32_t category, const char* name);
extern "C" __attribute__((visibility("hidden"))) inline void nvtxDomainNameCategoryW_impl_init_v3(nvtxDomainHandle_t domain, uint32_t category, const wchar_t* name);
extern "C" __attribute__((visibility("hidden"))) inline nvtxStringHandle_t nvtxDomainRegisterStringA_impl_init_v3(nvtxDomainHandle_t domain, const char* string);
extern "C" __attribute__((visibility("hidden"))) inline nvtxStringHandle_t nvtxDomainRegisterStringW_impl_init_v3(nvtxDomainHandle_t domain, const wchar_t* string);
extern "C" __attribute__((visibility("hidden"))) inline nvtxDomainHandle_t nvtxDomainCreateA_impl_init_v3(const char* message);
extern "C" __attribute__((visibility("hidden"))) inline nvtxDomainHandle_t nvtxDomainCreateW_impl_init_v3(const wchar_t* message);
extern "C" __attribute__((visibility("hidden"))) inline void nvtxDomainDestroy_impl_init_v3(nvtxDomainHandle_t domain);
extern "C" __attribute__((visibility("hidden"))) inline void nvtxInitialize_impl_init_v3(const void* reserved);

extern "C" __attribute__((visibility("hidden"))) inline nvtxSyncUser_t nvtxDomainSyncUserCreate_impl_init_v3(nvtxDomainHandle_t domain, const nvtxSyncUserAttributes_t* attribs);
extern "C" __attribute__((visibility("hidden"))) inline void nvtxDomainSyncUserDestroy_impl_init_v3(nvtxSyncUser_t handle);
extern "C" __attribute__((visibility("hidden"))) inline void nvtxDomainSyncUserAcquireStart_impl_init_v3(nvtxSyncUser_t handle);
extern "C" __attribute__((visibility("hidden"))) inline void nvtxDomainSyncUserAcquireFailed_impl_init_v3(nvtxSyncUser_t handle);
extern "C" __attribute__((visibility("hidden"))) inline void nvtxDomainSyncUserAcquireSuccess_impl_init_v3(nvtxSyncUser_t handle);
extern "C" __attribute__((visibility("hidden"))) inline void nvtxDomainSyncUserReleasing_impl_init_v3(nvtxSyncUser_t handle);
# 120 "/usr/local/cuda/targets/x86_64-linux/include/nvtx3/nvtxDetail/nvtxImpl.h" 2



typedef struct nvtxGlobals_t
{
    volatile unsigned int initState;
    NvtxExportTableCallbacks etblCallbacks;
    NvtxExportTableVersionInfo etblVersionInfo;


    nvtxMarkEx_impl_fntype nvtxMarkEx_impl_fnptr;
    nvtxMarkA_impl_fntype nvtxMarkA_impl_fnptr;
    nvtxMarkW_impl_fntype nvtxMarkW_impl_fnptr;
    nvtxRangeStartEx_impl_fntype nvtxRangeStartEx_impl_fnptr;
    nvtxRangeStartA_impl_fntype nvtxRangeStartA_impl_fnptr;
    nvtxRangeStartW_impl_fntype nvtxRangeStartW_impl_fnptr;
    nvtxRangeEnd_impl_fntype nvtxRangeEnd_impl_fnptr;
    nvtxRangePushEx_impl_fntype nvtxRangePushEx_impl_fnptr;
    nvtxRangePushA_impl_fntype nvtxRangePushA_impl_fnptr;
    nvtxRangePushW_impl_fntype nvtxRangePushW_impl_fnptr;
    nvtxRangePop_impl_fntype nvtxRangePop_impl_fnptr;
    nvtxNameCategoryA_impl_fntype nvtxNameCategoryA_impl_fnptr;
    nvtxNameCategoryW_impl_fntype nvtxNameCategoryW_impl_fnptr;
    nvtxNameOsThreadA_impl_fntype nvtxNameOsThreadA_impl_fnptr;
    nvtxNameOsThreadW_impl_fntype nvtxNameOsThreadW_impl_fnptr;

    nvtxNameCuDeviceA_fakeimpl_fntype nvtxNameCuDeviceA_impl_fnptr;
    nvtxNameCuDeviceW_fakeimpl_fntype nvtxNameCuDeviceW_impl_fnptr;
    nvtxNameCuContextA_fakeimpl_fntype nvtxNameCuContextA_impl_fnptr;
    nvtxNameCuContextW_fakeimpl_fntype nvtxNameCuContextW_impl_fnptr;
    nvtxNameCuStreamA_fakeimpl_fntype nvtxNameCuStreamA_impl_fnptr;
    nvtxNameCuStreamW_fakeimpl_fntype nvtxNameCuStreamW_impl_fnptr;
    nvtxNameCuEventA_fakeimpl_fntype nvtxNameCuEventA_impl_fnptr;
    nvtxNameCuEventW_fakeimpl_fntype nvtxNameCuEventW_impl_fnptr;

    nvtxNameClDeviceA_fakeimpl_fntype nvtxNameClDeviceA_impl_fnptr;
    nvtxNameClDeviceW_fakeimpl_fntype nvtxNameClDeviceW_impl_fnptr;
    nvtxNameClContextA_fakeimpl_fntype nvtxNameClContextA_impl_fnptr;
    nvtxNameClContextW_fakeimpl_fntype nvtxNameClContextW_impl_fnptr;
    nvtxNameClCommandQueueA_fakeimpl_fntype nvtxNameClCommandQueueA_impl_fnptr;
    nvtxNameClCommandQueueW_fakeimpl_fntype nvtxNameClCommandQueueW_impl_fnptr;
    nvtxNameClMemObjectA_fakeimpl_fntype nvtxNameClMemObjectA_impl_fnptr;
    nvtxNameClMemObjectW_fakeimpl_fntype nvtxNameClMemObjectW_impl_fnptr;
    nvtxNameClSamplerA_fakeimpl_fntype nvtxNameClSamplerA_impl_fnptr;
    nvtxNameClSamplerW_fakeimpl_fntype nvtxNameClSamplerW_impl_fnptr;
    nvtxNameClProgramA_fakeimpl_fntype nvtxNameClProgramA_impl_fnptr;
    nvtxNameClProgramW_fakeimpl_fntype nvtxNameClProgramW_impl_fnptr;
    nvtxNameClEventA_fakeimpl_fntype nvtxNameClEventA_impl_fnptr;
    nvtxNameClEventW_fakeimpl_fntype nvtxNameClEventW_impl_fnptr;

    nvtxNameCudaDeviceA_impl_fntype nvtxNameCudaDeviceA_impl_fnptr;
    nvtxNameCudaDeviceW_impl_fntype nvtxNameCudaDeviceW_impl_fnptr;
    nvtxNameCudaStreamA_fakeimpl_fntype nvtxNameCudaStreamA_impl_fnptr;
    nvtxNameCudaStreamW_fakeimpl_fntype nvtxNameCudaStreamW_impl_fnptr;
    nvtxNameCudaEventA_fakeimpl_fntype nvtxNameCudaEventA_impl_fnptr;
    nvtxNameCudaEventW_fakeimpl_fntype nvtxNameCudaEventW_impl_fnptr;

    nvtxDomainMarkEx_impl_fntype nvtxDomainMarkEx_impl_fnptr;
    nvtxDomainRangeStartEx_impl_fntype nvtxDomainRangeStartEx_impl_fnptr;
    nvtxDomainRangeEnd_impl_fntype nvtxDomainRangeEnd_impl_fnptr;
    nvtxDomainRangePushEx_impl_fntype nvtxDomainRangePushEx_impl_fnptr;
    nvtxDomainRangePop_impl_fntype nvtxDomainRangePop_impl_fnptr;
    nvtxDomainResourceCreate_impl_fntype nvtxDomainResourceCreate_impl_fnptr;
    nvtxDomainResourceDestroy_impl_fntype nvtxDomainResourceDestroy_impl_fnptr;
    nvtxDomainNameCategoryA_impl_fntype nvtxDomainNameCategoryA_impl_fnptr;
    nvtxDomainNameCategoryW_impl_fntype nvtxDomainNameCategoryW_impl_fnptr;
    nvtxDomainRegisterStringA_impl_fntype nvtxDomainRegisterStringA_impl_fnptr;
    nvtxDomainRegisterStringW_impl_fntype nvtxDomainRegisterStringW_impl_fnptr;
    nvtxDomainCreateA_impl_fntype nvtxDomainCreateA_impl_fnptr;
    nvtxDomainCreateW_impl_fntype nvtxDomainCreateW_impl_fnptr;
    nvtxDomainDestroy_impl_fntype nvtxDomainDestroy_impl_fnptr;
    nvtxInitialize_impl_fntype nvtxInitialize_impl_fnptr;

    nvtxDomainSyncUserCreate_impl_fntype nvtxDomainSyncUserCreate_impl_fnptr;
    nvtxDomainSyncUserDestroy_impl_fntype nvtxDomainSyncUserDestroy_impl_fnptr;
    nvtxDomainSyncUserAcquireStart_impl_fntype nvtxDomainSyncUserAcquireStart_impl_fnptr;
    nvtxDomainSyncUserAcquireFailed_impl_fntype nvtxDomainSyncUserAcquireFailed_impl_fnptr;
    nvtxDomainSyncUserAcquireSuccess_impl_fntype nvtxDomainSyncUserAcquireSuccess_impl_fnptr;
    nvtxDomainSyncUserReleasing_impl_fntype nvtxDomainSyncUserReleasing_impl_fnptr;



    NvtxFunctionPointer* functionTable_CORE [NVTX_CBID_CORE_SIZE + 1];
    NvtxFunctionPointer* functionTable_CUDA [NVTX_CBID_CUDA_SIZE + 1];
    NvtxFunctionPointer* functionTable_OPENCL[NVTX_CBID_OPENCL_SIZE + 1];
    NvtxFunctionPointer* functionTable_CUDART[NVTX_CBID_CUDART_SIZE + 1];
    NvtxFunctionPointer* functionTable_CORE2 [NVTX_CBID_CORE2_SIZE + 1];
    NvtxFunctionPointer* functionTable_SYNC [NVTX_CBID_SYNC_SIZE + 1];
} nvtxGlobals_t;

__attribute__((visibility("hidden"))) __attribute__((weak)) nvtxGlobals_t nvtxGlobals_v3 =
{
    0,

    {
        sizeof(NvtxExportTableCallbacks),
        nvtxEtiGetModuleFunctionTable_v3
    },
    {
        sizeof(NvtxExportTableVersionInfo),
        3,
        0,
        nvtxEtiSetInjectionNvtxVersion_v3
    },


    nvtxMarkEx_impl_init_v3,
    nvtxMarkA_impl_init_v3,
    nvtxMarkW_impl_init_v3,
    nvtxRangeStartEx_impl_init_v3,
    nvtxRangeStartA_impl_init_v3,
    nvtxRangeStartW_impl_init_v3,
    nvtxRangeEnd_impl_init_v3,
    nvtxRangePushEx_impl_init_v3,
    nvtxRangePushA_impl_init_v3,
    nvtxRangePushW_impl_init_v3,
    nvtxRangePop_impl_init_v3,
    nvtxNameCategoryA_impl_init_v3,
    nvtxNameCategoryW_impl_init_v3,
    nvtxNameOsThreadA_impl_init_v3,
    nvtxNameOsThreadW_impl_init_v3,

    nvtxNameCuDeviceA_impl_init_v3,
    nvtxNameCuDeviceW_impl_init_v3,
    nvtxNameCuContextA_impl_init_v3,
    nvtxNameCuContextW_impl_init_v3,
    nvtxNameCuStreamA_impl_init_v3,
    nvtxNameCuStreamW_impl_init_v3,
    nvtxNameCuEventA_impl_init_v3,
    nvtxNameCuEventW_impl_init_v3,

    nvtxNameClDeviceA_impl_init_v3,
    nvtxNameClDeviceW_impl_init_v3,
    nvtxNameClContextA_impl_init_v3,
    nvtxNameClContextW_impl_init_v3,
    nvtxNameClCommandQueueA_impl_init_v3,
    nvtxNameClCommandQueueW_impl_init_v3,
    nvtxNameClMemObjectA_impl_init_v3,
    nvtxNameClMemObjectW_impl_init_v3,
    nvtxNameClSamplerA_impl_init_v3,
    nvtxNameClSamplerW_impl_init_v3,
    nvtxNameClProgramA_impl_init_v3,
    nvtxNameClProgramW_impl_init_v3,
    nvtxNameClEventA_impl_init_v3,
    nvtxNameClEventW_impl_init_v3,

    nvtxNameCudaDeviceA_impl_init_v3,
    nvtxNameCudaDeviceW_impl_init_v3,
    nvtxNameCudaStreamA_impl_init_v3,
    nvtxNameCudaStreamW_impl_init_v3,
    nvtxNameCudaEventA_impl_init_v3,
    nvtxNameCudaEventW_impl_init_v3,

    nvtxDomainMarkEx_impl_init_v3,
    nvtxDomainRangeStartEx_impl_init_v3,
    nvtxDomainRangeEnd_impl_init_v3,
    nvtxDomainRangePushEx_impl_init_v3,
    nvtxDomainRangePop_impl_init_v3,
    nvtxDomainResourceCreate_impl_init_v3,
    nvtxDomainResourceDestroy_impl_init_v3,
    nvtxDomainNameCategoryA_impl_init_v3,
    nvtxDomainNameCategoryW_impl_init_v3,
    nvtxDomainRegisterStringA_impl_init_v3,
    nvtxDomainRegisterStringW_impl_init_v3,
    nvtxDomainCreateA_impl_init_v3,
    nvtxDomainCreateW_impl_init_v3,
    nvtxDomainDestroy_impl_init_v3,
    nvtxInitialize_impl_init_v3,

    nvtxDomainSyncUserCreate_impl_init_v3,
    nvtxDomainSyncUserDestroy_impl_init_v3,
    nvtxDomainSyncUserAcquireStart_impl_init_v3,
    nvtxDomainSyncUserAcquireFailed_impl_init_v3,
    nvtxDomainSyncUserAcquireSuccess_impl_init_v3,
    nvtxDomainSyncUserReleasing_impl_init_v3,


    {
        0,
        (NvtxFunctionPointer*)&nvtxGlobals_v3.nvtxMarkEx_impl_fnptr,
        (NvtxFunctionPointer*)&nvtxGlobals_v3.nvtxMarkA_impl_fnptr,
        (NvtxFunctionPointer*)&nvtxGlobals_v3.nvtxMarkW_impl_fnptr,
        (NvtxFunctionPointer*)&nvtxGlobals_v3.nvtxRangeStartEx_impl_fnptr,
        (NvtxFunctionPointer*)&nvtxGlobals_v3.nvtxRangeStartA_impl_fnptr,
        (NvtxFunctionPointer*)&nvtxGlobals_v3.nvtxRangeStartW_impl_fnptr,
        (NvtxFunctionPointer*)&nvtxGlobals_v3.nvtxRangeEnd_impl_fnptr,
        (NvtxFunctionPointer*)&nvtxGlobals_v3.nvtxRangePushEx_impl_fnptr,
        (NvtxFunctionPointer*)&nvtxGlobals_v3.nvtxRangePushA_impl_fnptr,
        (NvtxFunctionPointer*)&nvtxGlobals_v3.nvtxRangePushW_impl_fnptr,
        (NvtxFunctionPointer*)&nvtxGlobals_v3.nvtxRangePop_impl_fnptr,
        (NvtxFunctionPointer*)&nvtxGlobals_v3.nvtxNameCategoryA_impl_fnptr,
        (NvtxFunctionPointer*)&nvtxGlobals_v3.nvtxNameCategoryW_impl_fnptr,
        (NvtxFunctionPointer*)&nvtxGlobals_v3.nvtxNameOsThreadA_impl_fnptr,
        (NvtxFunctionPointer*)&nvtxGlobals_v3.nvtxNameOsThreadW_impl_fnptr,
        0
    },
    {
        0,
        (NvtxFunctionPointer*)&nvtxGlobals_v3.nvtxNameCuDeviceA_impl_fnptr,
        (NvtxFunctionPointer*)&nvtxGlobals_v3.nvtxNameCuDeviceW_impl_fnptr,
        (NvtxFunctionPointer*)&nvtxGlobals_v3.nvtxNameCuContextA_impl_fnptr,
        (NvtxFunctionPointer*)&nvtxGlobals_v3.nvtxNameCuContextW_impl_fnptr,
        (NvtxFunctionPointer*)&nvtxGlobals_v3.nvtxNameCuStreamA_impl_fnptr,
        (NvtxFunctionPointer*)&nvtxGlobals_v3.nvtxNameCuStreamW_impl_fnptr,
        (NvtxFunctionPointer*)&nvtxGlobals_v3.nvtxNameCuEventA_impl_fnptr,
        (NvtxFunctionPointer*)&nvtxGlobals_v3.nvtxNameCuEventW_impl_fnptr,
        0
    },
    {
        0,
        (NvtxFunctionPointer*)&nvtxGlobals_v3.nvtxNameClDeviceA_impl_fnptr,
        (NvtxFunctionPointer*)&nvtxGlobals_v3.nvtxNameClDeviceW_impl_fnptr,
        (NvtxFunctionPointer*)&nvtxGlobals_v3.nvtxNameClContextA_impl_fnptr,
        (NvtxFunctionPointer*)&nvtxGlobals_v3.nvtxNameClContextW_impl_fnptr,
        (NvtxFunctionPointer*)&nvtxGlobals_v3.nvtxNameClCommandQueueA_impl_fnptr,
        (NvtxFunctionPointer*)&nvtxGlobals_v3.nvtxNameClCommandQueueW_impl_fnptr,
        (NvtxFunctionPointer*)&nvtxGlobals_v3.nvtxNameClMemObjectA_impl_fnptr,
        (NvtxFunctionPointer*)&nvtxGlobals_v3.nvtxNameClMemObjectW_impl_fnptr,
        (NvtxFunctionPointer*)&nvtxGlobals_v3.nvtxNameClSamplerA_impl_fnptr,
        (NvtxFunctionPointer*)&nvtxGlobals_v3.nvtxNameClSamplerW_impl_fnptr,
        (NvtxFunctionPointer*)&nvtxGlobals_v3.nvtxNameClProgramA_impl_fnptr,
        (NvtxFunctionPointer*)&nvtxGlobals_v3.nvtxNameClProgramW_impl_fnptr,
        (NvtxFunctionPointer*)&nvtxGlobals_v3.nvtxNameClEventA_impl_fnptr,
        (NvtxFunctionPointer*)&nvtxGlobals_v3.nvtxNameClEventW_impl_fnptr,
        0
    },
    {
        0,
        (NvtxFunctionPointer*)&nvtxGlobals_v3.nvtxNameCudaDeviceA_impl_fnptr,
        (NvtxFunctionPointer*)&nvtxGlobals_v3.nvtxNameCudaDeviceW_impl_fnptr,
        (NvtxFunctionPointer*)&nvtxGlobals_v3.nvtxNameCudaStreamA_impl_fnptr,
        (NvtxFunctionPointer*)&nvtxGlobals_v3.nvtxNameCudaStreamW_impl_fnptr,
        (NvtxFunctionPointer*)&nvtxGlobals_v3.nvtxNameCudaEventA_impl_fnptr,
        (NvtxFunctionPointer*)&nvtxGlobals_v3.nvtxNameCudaEventW_impl_fnptr,
        0
    },
    {
        0,
        (NvtxFunctionPointer*)&nvtxGlobals_v3.nvtxDomainMarkEx_impl_fnptr,
        (NvtxFunctionPointer*)&nvtxGlobals_v3.nvtxDomainRangeStartEx_impl_fnptr,
        (NvtxFunctionPointer*)&nvtxGlobals_v3.nvtxDomainRangeEnd_impl_fnptr,
        (NvtxFunctionPointer*)&nvtxGlobals_v3.nvtxDomainRangePushEx_impl_fnptr,
        (NvtxFunctionPointer*)&nvtxGlobals_v3.nvtxDomainRangePop_impl_fnptr,
        (NvtxFunctionPointer*)&nvtxGlobals_v3.nvtxDomainResourceCreate_impl_fnptr,
        (NvtxFunctionPointer*)&nvtxGlobals_v3.nvtxDomainResourceDestroy_impl_fnptr,
        (NvtxFunctionPointer*)&nvtxGlobals_v3.nvtxDomainNameCategoryA_impl_fnptr,
        (NvtxFunctionPointer*)&nvtxGlobals_v3.nvtxDomainNameCategoryW_impl_fnptr,
        (NvtxFunctionPointer*)&nvtxGlobals_v3.nvtxDomainRegisterStringA_impl_fnptr,
        (NvtxFunctionPointer*)&nvtxGlobals_v3.nvtxDomainRegisterStringW_impl_fnptr,
        (NvtxFunctionPointer*)&nvtxGlobals_v3.nvtxDomainCreateA_impl_fnptr,
        (NvtxFunctionPointer*)&nvtxGlobals_v3.nvtxDomainCreateW_impl_fnptr,
        (NvtxFunctionPointer*)&nvtxGlobals_v3.nvtxDomainDestroy_impl_fnptr,
        (NvtxFunctionPointer*)&nvtxGlobals_v3.nvtxInitialize_impl_fnptr,
        0
    },
    {
        0,
        (NvtxFunctionPointer*)&nvtxGlobals_v3.nvtxDomainSyncUserCreate_impl_fnptr,
        (NvtxFunctionPointer*)&nvtxGlobals_v3.nvtxDomainSyncUserDestroy_impl_fnptr,
        (NvtxFunctionPointer*)&nvtxGlobals_v3.nvtxDomainSyncUserAcquireStart_impl_fnptr,
        (NvtxFunctionPointer*)&nvtxGlobals_v3.nvtxDomainSyncUserAcquireFailed_impl_fnptr,
        (NvtxFunctionPointer*)&nvtxGlobals_v3.nvtxDomainSyncUserAcquireSuccess_impl_fnptr,
        (NvtxFunctionPointer*)&nvtxGlobals_v3.nvtxDomainSyncUserReleasing_impl_fnptr,
        0
    }
};



# 1 "/usr/local/cuda/targets/x86_64-linux/include/nvtx3/nvtxDetail/nvtxImplCore.h" 1
inline static void nvtxMarkEx(const nvtxEventAttributes_t* eventAttrib)
{

    nvtxMarkEx_impl_fntype local = nvtxGlobals_v3.nvtxMarkEx_impl_fnptr;
    if(local!=0)
        (*local)(eventAttrib);

}

inline static void nvtxMarkA(const char* message)
{

    nvtxMarkA_impl_fntype local = nvtxGlobals_v3.nvtxMarkA_impl_fnptr;
    if(local!=0)
        (*local)(message);

}

inline static void nvtxMarkW(const wchar_t* message)
{

    nvtxMarkW_impl_fntype local = nvtxGlobals_v3.nvtxMarkW_impl_fnptr;
    if(local!=0)
        (*local)(message);

}

inline static nvtxRangeId_t nvtxRangeStartEx(const nvtxEventAttributes_t* eventAttrib)
{

    nvtxRangeStartEx_impl_fntype local = nvtxGlobals_v3.nvtxRangeStartEx_impl_fnptr;
    if(local!=0)
        return (*local)(eventAttrib);
    else

        return (nvtxRangeId_t)0;
}

inline static nvtxRangeId_t nvtxRangeStartA(const char* message)
{

    nvtxRangeStartA_impl_fntype local = nvtxGlobals_v3.nvtxRangeStartA_impl_fnptr;
    if(local!=0)
        return (*local)(message);
    else

        return (nvtxRangeId_t)0;
}

inline static nvtxRangeId_t nvtxRangeStartW(const wchar_t* message)
{

    nvtxRangeStartW_impl_fntype local = nvtxGlobals_v3.nvtxRangeStartW_impl_fnptr;
    if(local!=0)
        return (*local)(message);
    else

        return (nvtxRangeId_t)0;
}

inline static void nvtxRangeEnd(nvtxRangeId_t id)
{

    nvtxRangeEnd_impl_fntype local = nvtxGlobals_v3.nvtxRangeEnd_impl_fnptr;
    if(local!=0)
        (*local)(id);

}

inline static int nvtxRangePushEx(const nvtxEventAttributes_t* eventAttrib)
{

    nvtxRangePushEx_impl_fntype local = nvtxGlobals_v3.nvtxRangePushEx_impl_fnptr;
    if(local!=0)
        return (*local)(eventAttrib);
    else

        return (int)((int)-2);
}

inline static int nvtxRangePushA(const char* message)
{

    nvtxRangePushA_impl_fntype local = nvtxGlobals_v3.nvtxRangePushA_impl_fnptr;
    if(local!=0)
        return (*local)(message);
    else

        return (int)((int)-2);
}

inline static int nvtxRangePushW(const wchar_t* message)
{

    nvtxRangePushW_impl_fntype local = nvtxGlobals_v3.nvtxRangePushW_impl_fnptr;
    if(local!=0)
        return (*local)(message);
    else

        return (int)((int)-2);
}

inline static int nvtxRangePop(void)
{

    nvtxRangePop_impl_fntype local = nvtxGlobals_v3.nvtxRangePop_impl_fnptr;
    if(local!=0)
        return (*local)();
    else

        return (int)((int)-2);
}

inline static void nvtxNameCategoryA(uint32_t category, const char* name)
{

    nvtxNameCategoryA_impl_fntype local = nvtxGlobals_v3.nvtxNameCategoryA_impl_fnptr;
    if(local!=0)
        (*local)(category, name);

}

inline static void nvtxNameCategoryW(uint32_t category, const wchar_t* name)
{

    nvtxNameCategoryW_impl_fntype local = nvtxGlobals_v3.nvtxNameCategoryW_impl_fnptr;
    if(local!=0)
        (*local)(category, name);

}

inline static void nvtxNameOsThreadA(uint32_t threadId, const char* name)
{

    nvtxNameOsThreadA_impl_fntype local = nvtxGlobals_v3.nvtxNameOsThreadA_impl_fnptr;
    if(local!=0)
        (*local)(threadId, name);

}

inline static void nvtxNameOsThreadW(uint32_t threadId, const wchar_t* name)
{

    nvtxNameOsThreadW_impl_fntype local = nvtxGlobals_v3.nvtxNameOsThreadW_impl_fnptr;
    if(local!=0)
        (*local)(threadId, name);

}

inline static void nvtxDomainMarkEx(nvtxDomainHandle_t domain, const nvtxEventAttributes_t* eventAttrib)
{

    nvtxDomainMarkEx_impl_fntype local = nvtxGlobals_v3.nvtxDomainMarkEx_impl_fnptr;
    if(local!=0)
        (*local)(domain, eventAttrib);

}

inline static nvtxRangeId_t nvtxDomainRangeStartEx(nvtxDomainHandle_t domain, const nvtxEventAttributes_t* eventAttrib)
{

    nvtxDomainRangeStartEx_impl_fntype local = nvtxGlobals_v3.nvtxDomainRangeStartEx_impl_fnptr;
    if(local!=0)
        return (*local)(domain, eventAttrib);
    else

        return (nvtxRangeId_t)0;
}

inline static void nvtxDomainRangeEnd(nvtxDomainHandle_t domain, nvtxRangeId_t id)
{

    nvtxDomainRangeEnd_impl_fntype local = nvtxGlobals_v3.nvtxDomainRangeEnd_impl_fnptr;
    if(local!=0)
        (*local)(domain, id);

}

inline static int nvtxDomainRangePushEx(nvtxDomainHandle_t domain, const nvtxEventAttributes_t* eventAttrib)
{

    nvtxDomainRangePushEx_impl_fntype local = nvtxGlobals_v3.nvtxDomainRangePushEx_impl_fnptr;
    if(local!=0)
        return (*local)(domain, eventAttrib);
    else

        return (int)((int)-2);
}

inline static int nvtxDomainRangePop(nvtxDomainHandle_t domain)
{

    nvtxDomainRangePop_impl_fntype local = nvtxGlobals_v3.nvtxDomainRangePop_impl_fnptr;
    if(local!=0)
        return (*local)(domain);
    else

        return (int)((int)-2);
}

inline static nvtxResourceHandle_t nvtxDomainResourceCreate(nvtxDomainHandle_t domain, nvtxResourceAttributes_t* attribs)
{

    nvtxDomainResourceCreate_impl_fntype local = nvtxGlobals_v3.nvtxDomainResourceCreate_impl_fnptr;
    if(local!=0)
        return (*local)(domain, attribs);
    else

        return (nvtxResourceHandle_t)0;
}

inline static void nvtxDomainResourceDestroy(nvtxResourceHandle_t resource)
{

    nvtxDomainResourceDestroy_impl_fntype local = nvtxGlobals_v3.nvtxDomainResourceDestroy_impl_fnptr;
    if(local!=0)
        (*local)(resource);

}

inline static void nvtxDomainNameCategoryA(nvtxDomainHandle_t domain, uint32_t category, const char* name)
{

    nvtxDomainNameCategoryA_impl_fntype local = nvtxGlobals_v3.nvtxDomainNameCategoryA_impl_fnptr;
    if(local!=0)
        (*local)(domain, category, name);

}

inline static void nvtxDomainNameCategoryW(nvtxDomainHandle_t domain, uint32_t category, const wchar_t* name)
{

    nvtxDomainNameCategoryW_impl_fntype local = nvtxGlobals_v3.nvtxDomainNameCategoryW_impl_fnptr;
    if(local!=0)
        (*local)(domain, category, name);

}

inline static nvtxStringHandle_t nvtxDomainRegisterStringA(nvtxDomainHandle_t domain, const char* string)
{

    nvtxDomainRegisterStringA_impl_fntype local = nvtxGlobals_v3.nvtxDomainRegisterStringA_impl_fnptr;
    if(local!=0)
        return (*local)(domain, string);
    else

        return (nvtxStringHandle_t)0;
}

inline static nvtxStringHandle_t nvtxDomainRegisterStringW(nvtxDomainHandle_t domain, const wchar_t* string)
{

    nvtxDomainRegisterStringW_impl_fntype local = nvtxGlobals_v3.nvtxDomainRegisterStringW_impl_fnptr;
    if(local!=0)
        return (*local)(domain, string);
    else

        return (nvtxStringHandle_t)0;
}

inline static nvtxDomainHandle_t nvtxDomainCreateA(const char* message)
{

    nvtxDomainCreateA_impl_fntype local = nvtxGlobals_v3.nvtxDomainCreateA_impl_fnptr;
    if(local!=0)
        return (*local)(message);
    else

        return (nvtxDomainHandle_t)0;
}

inline static nvtxDomainHandle_t nvtxDomainCreateW(const wchar_t* message)
{

    nvtxDomainCreateW_impl_fntype local = nvtxGlobals_v3.nvtxDomainCreateW_impl_fnptr;
    if(local!=0)
        return (*local)(message);
    else

        return (nvtxDomainHandle_t)0;
}

inline static void nvtxDomainDestroy(nvtxDomainHandle_t domain)
{

    nvtxDomainDestroy_impl_fntype local = nvtxGlobals_v3.nvtxDomainDestroy_impl_fnptr;
    if(local!=0)
        (*local)(domain);

}

inline static void nvtxInitialize(const void* reserved)
{

    nvtxInitialize_impl_fntype local = nvtxGlobals_v3.nvtxInitialize_impl_fnptr;
    if(local!=0)
        (*local)(reserved);

}
# 390 "/usr/local/cuda/targets/x86_64-linux/include/nvtx3/nvtxDetail/nvtxImpl.h" 2



extern "C" __attribute__((visibility("hidden"))) inline int nvtxEtiGetModuleFunctionTable_v3(
    NvtxCallbackModule module,
    NvtxFunctionTable* out_table,
    unsigned int* out_size)
{
    unsigned int bytes = 0;
    NvtxFunctionTable table = (NvtxFunctionTable)0;

    switch (module)
    {
    case NVTX_CB_MODULE_CORE:
        table = nvtxGlobals_v3.functionTable_CORE;
        bytes = (unsigned int)sizeof(nvtxGlobals_v3.functionTable_CORE);
        break;
    case NVTX_CB_MODULE_CUDA:
        table = nvtxGlobals_v3.functionTable_CUDA;
        bytes = (unsigned int)sizeof(nvtxGlobals_v3.functionTable_CUDA);
        break;
    case NVTX_CB_MODULE_OPENCL:
        table = nvtxGlobals_v3.functionTable_OPENCL;
        bytes = (unsigned int)sizeof(nvtxGlobals_v3.functionTable_OPENCL);
        break;
    case NVTX_CB_MODULE_CUDART:
        table = nvtxGlobals_v3.functionTable_CUDART;
        bytes = (unsigned int)sizeof(nvtxGlobals_v3.functionTable_CUDART);
        break;
    case NVTX_CB_MODULE_CORE2:
        table = nvtxGlobals_v3.functionTable_CORE2;
        bytes = (unsigned int)sizeof(nvtxGlobals_v3.functionTable_CORE2);
        break;
    case NVTX_CB_MODULE_SYNC:
        table = nvtxGlobals_v3.functionTable_SYNC;
        bytes = (unsigned int)sizeof(nvtxGlobals_v3.functionTable_SYNC);
        break;
    default: return 0;
    }

    if (out_size)
        *out_size = (bytes / (unsigned int)sizeof(NvtxFunctionPointer*)) - 1;

    if (out_table)
        *out_table = table;

    return 1;
}

extern "C" __attribute__((visibility("hidden"))) inline const void* nvtxGetExportTable_v3(uint32_t exportTableId)
{
    switch (exportTableId)
    {
    case NVTX_ETID_CALLBACKS: return &nvtxGlobals_v3.etblCallbacks;
    case NVTX_ETID_VERSIONINFO: return &nvtxGlobals_v3.etblVersionInfo;
    default: return 0;
    }
}

extern "C" __attribute__((visibility("hidden"))) inline void nvtxEtiSetInjectionNvtxVersion_v3(uint32_t version)
{

    (void)version;
}



# 1 "/usr/local/cuda/targets/x86_64-linux/include/nvtx3/nvtxDetail/nvtxInitDefs.h" 1




extern "C" __attribute__((visibility("hidden"))) inline void nvtxMarkEx_impl_init_v3(const nvtxEventAttributes_t* eventAttrib){
    nvtxInitOnce_v3();
    nvtxMarkEx(eventAttrib);
}

extern "C" __attribute__((visibility("hidden"))) inline void nvtxMarkA_impl_init_v3(const char* message){
    nvtxInitOnce_v3();
    nvtxMarkA(message);
}

extern "C" __attribute__((visibility("hidden"))) inline void nvtxMarkW_impl_init_v3(const wchar_t* message){
    nvtxInitOnce_v3();
    nvtxMarkW(message);
}

extern "C" __attribute__((visibility("hidden"))) inline nvtxRangeId_t nvtxRangeStartEx_impl_init_v3(const nvtxEventAttributes_t* eventAttrib){
    nvtxInitOnce_v3();
    return nvtxRangeStartEx(eventAttrib);
}

extern "C" __attribute__((visibility("hidden"))) inline nvtxRangeId_t nvtxRangeStartA_impl_init_v3(const char* message){
    nvtxInitOnce_v3();
    return nvtxRangeStartA(message);
}

extern "C" __attribute__((visibility("hidden"))) inline nvtxRangeId_t nvtxRangeStartW_impl_init_v3(const wchar_t* message){
    nvtxInitOnce_v3();
    return nvtxRangeStartW(message);
}

extern "C" __attribute__((visibility("hidden"))) inline void nvtxRangeEnd_impl_init_v3(nvtxRangeId_t id){
    nvtxInitOnce_v3();
    nvtxRangeEnd(id);
}

extern "C" __attribute__((visibility("hidden"))) inline int nvtxRangePushEx_impl_init_v3(const nvtxEventAttributes_t* eventAttrib){
    nvtxInitOnce_v3();
    return nvtxRangePushEx(eventAttrib);
}

extern "C" __attribute__((visibility("hidden"))) inline int nvtxRangePushA_impl_init_v3(const char* message){
    nvtxInitOnce_v3();
    return nvtxRangePushA(message);
}

extern "C" __attribute__((visibility("hidden"))) inline int nvtxRangePushW_impl_init_v3(const wchar_t* message){
    nvtxInitOnce_v3();
    return nvtxRangePushW(message);
}

extern "C" __attribute__((visibility("hidden"))) inline int nvtxRangePop_impl_init_v3(void){
    nvtxInitOnce_v3();
    return nvtxRangePop();
}

extern "C" __attribute__((visibility("hidden"))) inline void nvtxNameCategoryA_impl_init_v3(uint32_t category, const char* name){
    nvtxInitOnce_v3();
    nvtxNameCategoryA(category, name);
}

extern "C" __attribute__((visibility("hidden"))) inline void nvtxNameCategoryW_impl_init_v3(uint32_t category, const wchar_t* name){
    nvtxInitOnce_v3();
    nvtxNameCategoryW(category, name);
}

extern "C" __attribute__((visibility("hidden"))) inline void nvtxNameOsThreadA_impl_init_v3(uint32_t threadId, const char* name){
    nvtxInitOnce_v3();
    nvtxNameOsThreadA(threadId, name);
}

extern "C" __attribute__((visibility("hidden"))) inline void nvtxNameOsThreadW_impl_init_v3(uint32_t threadId, const wchar_t* name){
    nvtxInitOnce_v3();
    nvtxNameOsThreadW(threadId, name);
}

extern "C" __attribute__((visibility("hidden"))) inline void nvtxDomainMarkEx_impl_init_v3(nvtxDomainHandle_t domain, const nvtxEventAttributes_t* eventAttrib){
    nvtxInitOnce_v3();
    nvtxDomainMarkEx(domain, eventAttrib);
}

extern "C" __attribute__((visibility("hidden"))) inline nvtxRangeId_t nvtxDomainRangeStartEx_impl_init_v3(nvtxDomainHandle_t domain, const nvtxEventAttributes_t* eventAttrib){
    nvtxInitOnce_v3();
    return nvtxDomainRangeStartEx(domain, eventAttrib);
}

extern "C" __attribute__((visibility("hidden"))) inline void nvtxDomainRangeEnd_impl_init_v3(nvtxDomainHandle_t domain, nvtxRangeId_t id){
    nvtxInitOnce_v3();
    nvtxDomainRangeEnd(domain, id);
}

extern "C" __attribute__((visibility("hidden"))) inline int nvtxDomainRangePushEx_impl_init_v3(nvtxDomainHandle_t domain, const nvtxEventAttributes_t* eventAttrib){
    nvtxInitOnce_v3();
    return nvtxDomainRangePushEx(domain, eventAttrib);
}

extern "C" __attribute__((visibility("hidden"))) inline int nvtxDomainRangePop_impl_init_v3(nvtxDomainHandle_t domain){
    nvtxInitOnce_v3();
    return nvtxDomainRangePop(domain);
}

extern "C" __attribute__((visibility("hidden"))) inline nvtxResourceHandle_t nvtxDomainResourceCreate_impl_init_v3(nvtxDomainHandle_t domain, nvtxResourceAttributes_t* attribs){
    nvtxInitOnce_v3();
    return nvtxDomainResourceCreate(domain, attribs);
}

extern "C" __attribute__((visibility("hidden"))) inline void nvtxDomainResourceDestroy_impl_init_v3(nvtxResourceHandle_t resource){
    nvtxInitOnce_v3();
    nvtxDomainResourceDestroy(resource);
}

extern "C" __attribute__((visibility("hidden"))) inline void nvtxDomainNameCategoryA_impl_init_v3(nvtxDomainHandle_t domain, uint32_t category, const char* name){
    nvtxInitOnce_v3();
    nvtxDomainNameCategoryA(domain, category, name);
}

extern "C" __attribute__((visibility("hidden"))) inline void nvtxDomainNameCategoryW_impl_init_v3(nvtxDomainHandle_t domain, uint32_t category, const wchar_t* name){
    nvtxInitOnce_v3();
    nvtxDomainNameCategoryW(domain, category, name);
}

extern "C" __attribute__((visibility("hidden"))) inline nvtxStringHandle_t nvtxDomainRegisterStringA_impl_init_v3(nvtxDomainHandle_t domain, const char* string){
    nvtxInitOnce_v3();
    return nvtxDomainRegisterStringA(domain, string);
}

extern "C" __attribute__((visibility("hidden"))) inline nvtxStringHandle_t nvtxDomainRegisterStringW_impl_init_v3(nvtxDomainHandle_t domain, const wchar_t* string){
    nvtxInitOnce_v3();
    return nvtxDomainRegisterStringW(domain, string);
}

extern "C" __attribute__((visibility("hidden"))) inline nvtxDomainHandle_t nvtxDomainCreateA_impl_init_v3(const char* message){
    nvtxInitOnce_v3();
    return nvtxDomainCreateA(message);
}

extern "C" __attribute__((visibility("hidden"))) inline nvtxDomainHandle_t nvtxDomainCreateW_impl_init_v3(const wchar_t* message){
    nvtxInitOnce_v3();
    return nvtxDomainCreateW(message);
}

extern "C" __attribute__((visibility("hidden"))) inline void nvtxDomainDestroy_impl_init_v3(nvtxDomainHandle_t domain){
    nvtxInitOnce_v3();
    nvtxDomainDestroy(domain);
}

extern "C" __attribute__((visibility("hidden"))) inline void nvtxInitialize_impl_init_v3(const void* reserved){
    nvtxInitOnce_v3();
    nvtxInitialize(reserved);
}

extern "C" __attribute__((visibility("hidden"))) inline void nvtxNameCuDeviceA_impl_init_v3(nvtx_CUdevice device, const char* name){
    nvtxNameCuDeviceA_fakeimpl_fntype local;
    nvtxInitOnce_v3();
    local = nvtxGlobals_v3.nvtxNameCuDeviceA_impl_fnptr;
    if (local)
        local(device, name);
}

extern "C" __attribute__((visibility("hidden"))) inline void nvtxNameCuDeviceW_impl_init_v3(nvtx_CUdevice device, const wchar_t* name){
    nvtxNameCuDeviceW_fakeimpl_fntype local;
    nvtxInitOnce_v3();
    local = nvtxGlobals_v3.nvtxNameCuDeviceW_impl_fnptr;
    if (local)
        local(device, name);
}

extern "C" __attribute__((visibility("hidden"))) inline void nvtxNameCuContextA_impl_init_v3(nvtx_CUcontext context, const char* name){
    nvtxNameCuContextA_fakeimpl_fntype local;
    nvtxInitOnce_v3();
    local = nvtxGlobals_v3.nvtxNameCuContextA_impl_fnptr;
    if (local)
        local(context, name);
}

extern "C" __attribute__((visibility("hidden"))) inline void nvtxNameCuContextW_impl_init_v3(nvtx_CUcontext context, const wchar_t* name){
    nvtxNameCuContextW_fakeimpl_fntype local;
    nvtxInitOnce_v3();
    local = nvtxGlobals_v3.nvtxNameCuContextW_impl_fnptr;
    if (local)
        local(context, name);
}

extern "C" __attribute__((visibility("hidden"))) inline void nvtxNameCuStreamA_impl_init_v3(nvtx_CUstream stream, const char* name){
    nvtxNameCuStreamA_fakeimpl_fntype local;
    nvtxInitOnce_v3();
    local = nvtxGlobals_v3.nvtxNameCuStreamA_impl_fnptr;
    if (local)
        local(stream, name);
}

extern "C" __attribute__((visibility("hidden"))) inline void nvtxNameCuStreamW_impl_init_v3(nvtx_CUstream stream, const wchar_t* name){
    nvtxNameCuStreamW_fakeimpl_fntype local;
    nvtxInitOnce_v3();
    local = nvtxGlobals_v3.nvtxNameCuStreamW_impl_fnptr;
    if (local)
        local(stream, name);
}

extern "C" __attribute__((visibility("hidden"))) inline void nvtxNameCuEventA_impl_init_v3(nvtx_CUevent event, const char* name){
    nvtxNameCuEventA_fakeimpl_fntype local;
    nvtxInitOnce_v3();
    local = nvtxGlobals_v3.nvtxNameCuEventA_impl_fnptr;
    if (local)
        local(event, name);
}

extern "C" __attribute__((visibility("hidden"))) inline void nvtxNameCuEventW_impl_init_v3(nvtx_CUevent event, const wchar_t* name){
    nvtxNameCuEventW_fakeimpl_fntype local;
    nvtxInitOnce_v3();
    local = nvtxGlobals_v3.nvtxNameCuEventW_impl_fnptr;
    if (local)
        local(event, name);
}

extern "C" __attribute__((visibility("hidden"))) inline void nvtxNameCudaDeviceA_impl_init_v3(int device, const char* name){
    nvtxNameCudaDeviceA_impl_fntype local;
    nvtxInitOnce_v3();
    local = nvtxGlobals_v3.nvtxNameCudaDeviceA_impl_fnptr;
    if (local)
        local(device, name);
}

extern "C" __attribute__((visibility("hidden"))) inline void nvtxNameCudaDeviceW_impl_init_v3(int device, const wchar_t* name){
    nvtxNameCudaDeviceW_impl_fntype local;
    nvtxInitOnce_v3();
    local = nvtxGlobals_v3.nvtxNameCudaDeviceW_impl_fnptr;
    if (local)
        local(device, name);
}

extern "C" __attribute__((visibility("hidden"))) inline void nvtxNameCudaStreamA_impl_init_v3(nvtx_cudaStream_t stream, const char* name){
    nvtxNameCudaStreamA_fakeimpl_fntype local;
    nvtxInitOnce_v3();
    local = nvtxGlobals_v3.nvtxNameCudaStreamA_impl_fnptr;
    if (local)
        local(stream, name);
}

extern "C" __attribute__((visibility("hidden"))) inline void nvtxNameCudaStreamW_impl_init_v3(nvtx_cudaStream_t stream, const wchar_t* name){
    nvtxNameCudaStreamW_fakeimpl_fntype local;
    nvtxInitOnce_v3();
    local = nvtxGlobals_v3.nvtxNameCudaStreamW_impl_fnptr;
    if (local)
        local(stream, name);
}

extern "C" __attribute__((visibility("hidden"))) inline void nvtxNameCudaEventA_impl_init_v3(nvtx_cudaEvent_t event, const char* name){
    nvtxNameCudaEventA_fakeimpl_fntype local;
    nvtxInitOnce_v3();
    local = nvtxGlobals_v3.nvtxNameCudaEventA_impl_fnptr;
    if (local)
        local(event, name);
}

extern "C" __attribute__((visibility("hidden"))) inline void nvtxNameCudaEventW_impl_init_v3(nvtx_cudaEvent_t event, const wchar_t* name){
    nvtxNameCudaEventW_fakeimpl_fntype local;
    nvtxInitOnce_v3();
    local = nvtxGlobals_v3.nvtxNameCudaEventW_impl_fnptr;
    if (local)
        local(event, name);
}

extern "C" __attribute__((visibility("hidden"))) inline void nvtxNameClDeviceA_impl_init_v3(nvtx_cl_device_id device, const char* name){
    nvtxNameClDeviceA_fakeimpl_fntype local;
    nvtxInitOnce_v3();
    local = nvtxGlobals_v3.nvtxNameClDeviceA_impl_fnptr;
    if (local)
        local(device, name);
}

extern "C" __attribute__((visibility("hidden"))) inline void nvtxNameClDeviceW_impl_init_v3(nvtx_cl_device_id device, const wchar_t* name){
    nvtxNameClDeviceW_fakeimpl_fntype local;
    nvtxInitOnce_v3();
    local = nvtxGlobals_v3.nvtxNameClDeviceW_impl_fnptr;
    if (local)
        local(device, name);
}

extern "C" __attribute__((visibility("hidden"))) inline void nvtxNameClContextA_impl_init_v3(nvtx_cl_context context, const char* name){
    nvtxNameClContextA_fakeimpl_fntype local;
    nvtxInitOnce_v3();
    local = nvtxGlobals_v3.nvtxNameClContextA_impl_fnptr;
    if (local)
        local(context, name);
}

extern "C" __attribute__((visibility("hidden"))) inline void nvtxNameClContextW_impl_init_v3(nvtx_cl_context context, const wchar_t* name){
    nvtxNameClContextW_fakeimpl_fntype local;
    nvtxInitOnce_v3();
    local = nvtxGlobals_v3.nvtxNameClContextW_impl_fnptr;
    if (local)
        local(context, name);
}

extern "C" __attribute__((visibility("hidden"))) inline void nvtxNameClCommandQueueA_impl_init_v3(nvtx_cl_command_queue command_queue, const char* name){
    nvtxNameClCommandQueueA_fakeimpl_fntype local;
    nvtxInitOnce_v3();
    local = nvtxGlobals_v3.nvtxNameClCommandQueueA_impl_fnptr;
    if (local)
        local(command_queue, name);
}

extern "C" __attribute__((visibility("hidden"))) inline void nvtxNameClCommandQueueW_impl_init_v3(nvtx_cl_command_queue command_queue, const wchar_t* name){
    nvtxNameClCommandQueueW_fakeimpl_fntype local;
    nvtxInitOnce_v3();
    local = nvtxGlobals_v3.nvtxNameClCommandQueueW_impl_fnptr;
    if (local)
        local(command_queue, name);
}

extern "C" __attribute__((visibility("hidden"))) inline void nvtxNameClMemObjectA_impl_init_v3(nvtx_cl_mem memobj, const char* name){
    nvtxNameClMemObjectA_fakeimpl_fntype local;
    nvtxInitOnce_v3();
    local = nvtxGlobals_v3.nvtxNameClMemObjectA_impl_fnptr;
    if (local)
        local(memobj, name);
}

extern "C" __attribute__((visibility("hidden"))) inline void nvtxNameClMemObjectW_impl_init_v3(nvtx_cl_mem memobj, const wchar_t* name){
    nvtxNameClMemObjectW_fakeimpl_fntype local;
    nvtxInitOnce_v3();
    local = nvtxGlobals_v3.nvtxNameClMemObjectW_impl_fnptr;
    if (local)
        local(memobj, name);
}

extern "C" __attribute__((visibility("hidden"))) inline void nvtxNameClSamplerA_impl_init_v3(nvtx_cl_sampler sampler, const char* name){
    nvtxNameClSamplerA_fakeimpl_fntype local;
    nvtxInitOnce_v3();
    local = nvtxGlobals_v3.nvtxNameClSamplerA_impl_fnptr;
    if (local)
        local(sampler, name);
}

extern "C" __attribute__((visibility("hidden"))) inline void nvtxNameClSamplerW_impl_init_v3(nvtx_cl_sampler sampler, const wchar_t* name){
    nvtxNameClSamplerW_fakeimpl_fntype local;
    nvtxInitOnce_v3();
    local = nvtxGlobals_v3.nvtxNameClSamplerW_impl_fnptr;
    if (local)
        local(sampler, name);
}

extern "C" __attribute__((visibility("hidden"))) inline void nvtxNameClProgramA_impl_init_v3(nvtx_cl_program program, const char* name){
    nvtxNameClProgramA_fakeimpl_fntype local;
    nvtxInitOnce_v3();
    local = nvtxGlobals_v3.nvtxNameClProgramA_impl_fnptr;
    if (local)
        local(program, name);
}

extern "C" __attribute__((visibility("hidden"))) inline void nvtxNameClProgramW_impl_init_v3(nvtx_cl_program program, const wchar_t* name){
    nvtxNameClProgramW_fakeimpl_fntype local;
    nvtxInitOnce_v3();
    local = nvtxGlobals_v3.nvtxNameClProgramW_impl_fnptr;
    if (local)
        local(program, name);
}

extern "C" __attribute__((visibility("hidden"))) inline void nvtxNameClEventA_impl_init_v3(nvtx_cl_event evnt, const char* name){
    nvtxNameClEventA_fakeimpl_fntype local;
    nvtxInitOnce_v3();
    local = nvtxGlobals_v3.nvtxNameClEventA_impl_fnptr;
    if (local)
        local(evnt, name);
}

extern "C" __attribute__((visibility("hidden"))) inline void nvtxNameClEventW_impl_init_v3(nvtx_cl_event evnt, const wchar_t* name){
    nvtxNameClEventW_fakeimpl_fntype local;
    nvtxInitOnce_v3();
    local = nvtxGlobals_v3.nvtxNameClEventW_impl_fnptr;
    if (local)
        local(evnt, name);
}

extern "C" __attribute__((visibility("hidden"))) inline nvtxSyncUser_t nvtxDomainSyncUserCreate_impl_init_v3(nvtxDomainHandle_t domain, const nvtxSyncUserAttributes_t* attribs){
    nvtxDomainSyncUserCreate_impl_fntype local;
    nvtxInitOnce_v3();
    local = nvtxGlobals_v3.nvtxDomainSyncUserCreate_impl_fnptr;
    if (local) {
        return local(domain, attribs);
    }
    return (nvtxSyncUser_t)0;
}

extern "C" __attribute__((visibility("hidden"))) inline void nvtxDomainSyncUserDestroy_impl_init_v3(nvtxSyncUser_t handle){
    nvtxDomainSyncUserDestroy_impl_fntype local;
    nvtxInitOnce_v3();
    local = nvtxGlobals_v3.nvtxDomainSyncUserDestroy_impl_fnptr;
    if (local)
        local(handle);
}

extern "C" __attribute__((visibility("hidden"))) inline void nvtxDomainSyncUserAcquireStart_impl_init_v3(nvtxSyncUser_t handle){
    nvtxDomainSyncUserAcquireStart_impl_fntype local;
    nvtxInitOnce_v3();
    local = nvtxGlobals_v3.nvtxDomainSyncUserAcquireStart_impl_fnptr;
    if (local)
        local(handle);
}

extern "C" __attribute__((visibility("hidden"))) inline void nvtxDomainSyncUserAcquireFailed_impl_init_v3(nvtxSyncUser_t handle){
    nvtxDomainSyncUserAcquireFailed_impl_fntype local;
    nvtxInitOnce_v3();
    local = nvtxGlobals_v3.nvtxDomainSyncUserAcquireFailed_impl_fnptr;
    if (local)
        local(handle);
}

extern "C" __attribute__((visibility("hidden"))) inline void nvtxDomainSyncUserAcquireSuccess_impl_init_v3(nvtxSyncUser_t handle){
    nvtxDomainSyncUserAcquireSuccess_impl_fntype local;
    nvtxInitOnce_v3();
    local = nvtxGlobals_v3.nvtxDomainSyncUserAcquireSuccess_impl_fnptr;
    if (local)
        local(handle);
}

extern "C" __attribute__((visibility("hidden"))) inline void nvtxDomainSyncUserReleasing_impl_init_v3(nvtxSyncUser_t handle){
    nvtxDomainSyncUserReleasing_impl_fntype local;
    nvtxInitOnce_v3();
    local = nvtxGlobals_v3.nvtxDomainSyncUserReleasing_impl_fnptr;
    if (local)
        local(handle);
}

extern "C" __attribute__((visibility("hidden"))) inline void nvtxSetInitFunctionsToNoops_v3(int forceAllToNoops);
extern "C" __attribute__((visibility("hidden"))) inline void nvtxSetInitFunctionsToNoops_v3(int forceAllToNoops)
{
    if (nvtxGlobals_v3.nvtxMarkEx_impl_fnptr == nvtxMarkEx_impl_init_v3 || forceAllToNoops)
        nvtxGlobals_v3.nvtxMarkEx_impl_fnptr = 
# 433 "/usr/local/cuda/targets/x86_64-linux/include/nvtx3/nvtxDetail/nvtxInitDefs.h" 3 4
                                                                      __null
# 433 "/usr/local/cuda/targets/x86_64-linux/include/nvtx3/nvtxDetail/nvtxInitDefs.h"
                                                                          ;
    if (nvtxGlobals_v3.nvtxMarkA_impl_fnptr == nvtxMarkA_impl_init_v3 || forceAllToNoops)
        nvtxGlobals_v3.nvtxMarkA_impl_fnptr = 
# 435 "/usr/local/cuda/targets/x86_64-linux/include/nvtx3/nvtxDetail/nvtxInitDefs.h" 3 4
                                                                     __null
# 435 "/usr/local/cuda/targets/x86_64-linux/include/nvtx3/nvtxDetail/nvtxInitDefs.h"
                                                                         ;
    if (nvtxGlobals_v3.nvtxMarkW_impl_fnptr == nvtxMarkW_impl_init_v3 || forceAllToNoops)
        nvtxGlobals_v3.nvtxMarkW_impl_fnptr = 
# 437 "/usr/local/cuda/targets/x86_64-linux/include/nvtx3/nvtxDetail/nvtxInitDefs.h" 3 4
                                                                     __null
# 437 "/usr/local/cuda/targets/x86_64-linux/include/nvtx3/nvtxDetail/nvtxInitDefs.h"
                                                                         ;
    if (nvtxGlobals_v3.nvtxRangeStartEx_impl_fnptr == nvtxRangeStartEx_impl_init_v3 || forceAllToNoops)
        nvtxGlobals_v3.nvtxRangeStartEx_impl_fnptr = 
# 439 "/usr/local/cuda/targets/x86_64-linux/include/nvtx3/nvtxDetail/nvtxInitDefs.h" 3 4
                                                                            __null
# 439 "/usr/local/cuda/targets/x86_64-linux/include/nvtx3/nvtxDetail/nvtxInitDefs.h"
                                                                                ;
    if (nvtxGlobals_v3.nvtxRangeStartA_impl_fnptr == nvtxRangeStartA_impl_init_v3 || forceAllToNoops)
        nvtxGlobals_v3.nvtxRangeStartA_impl_fnptr = 
# 441 "/usr/local/cuda/targets/x86_64-linux/include/nvtx3/nvtxDetail/nvtxInitDefs.h" 3 4
                                                                           __null
# 441 "/usr/local/cuda/targets/x86_64-linux/include/nvtx3/nvtxDetail/nvtxInitDefs.h"
                                                                               ;
    if (nvtxGlobals_v3.nvtxRangeStartW_impl_fnptr == nvtxRangeStartW_impl_init_v3 || forceAllToNoops)
        nvtxGlobals_v3.nvtxRangeStartW_impl_fnptr = 
# 443 "/usr/local/cuda/targets/x86_64-linux/include/nvtx3/nvtxDetail/nvtxInitDefs.h" 3 4
                                                                           __null
# 443 "/usr/local/cuda/targets/x86_64-linux/include/nvtx3/nvtxDetail/nvtxInitDefs.h"
                                                                               ;
    if (nvtxGlobals_v3.nvtxRangeEnd_impl_fnptr == nvtxRangeEnd_impl_init_v3 || forceAllToNoops)
        nvtxGlobals_v3.nvtxRangeEnd_impl_fnptr = 
# 445 "/usr/local/cuda/targets/x86_64-linux/include/nvtx3/nvtxDetail/nvtxInitDefs.h" 3 4
                                                                        __null
# 445 "/usr/local/cuda/targets/x86_64-linux/include/nvtx3/nvtxDetail/nvtxInitDefs.h"
                                                                            ;
    if (nvtxGlobals_v3.nvtxRangePushEx_impl_fnptr == nvtxRangePushEx_impl_init_v3 || forceAllToNoops)
        nvtxGlobals_v3.nvtxRangePushEx_impl_fnptr = 
# 447 "/usr/local/cuda/targets/x86_64-linux/include/nvtx3/nvtxDetail/nvtxInitDefs.h" 3 4
                                                                           __null
# 447 "/usr/local/cuda/targets/x86_64-linux/include/nvtx3/nvtxDetail/nvtxInitDefs.h"
                                                                               ;
    if (nvtxGlobals_v3.nvtxRangePushA_impl_fnptr == nvtxRangePushA_impl_init_v3 || forceAllToNoops)
        nvtxGlobals_v3.nvtxRangePushA_impl_fnptr = 
# 449 "/usr/local/cuda/targets/x86_64-linux/include/nvtx3/nvtxDetail/nvtxInitDefs.h" 3 4
                                                                          __null
# 449 "/usr/local/cuda/targets/x86_64-linux/include/nvtx3/nvtxDetail/nvtxInitDefs.h"
                                                                              ;
    if (nvtxGlobals_v3.nvtxRangePushW_impl_fnptr == nvtxRangePushW_impl_init_v3 || forceAllToNoops)
        nvtxGlobals_v3.nvtxRangePushW_impl_fnptr = 
# 451 "/usr/local/cuda/targets/x86_64-linux/include/nvtx3/nvtxDetail/nvtxInitDefs.h" 3 4
                                                                          __null
# 451 "/usr/local/cuda/targets/x86_64-linux/include/nvtx3/nvtxDetail/nvtxInitDefs.h"
                                                                              ;
    if (nvtxGlobals_v3.nvtxRangePop_impl_fnptr == nvtxRangePop_impl_init_v3 || forceAllToNoops)
        nvtxGlobals_v3.nvtxRangePop_impl_fnptr = 
# 453 "/usr/local/cuda/targets/x86_64-linux/include/nvtx3/nvtxDetail/nvtxInitDefs.h" 3 4
                                                                        __null
# 453 "/usr/local/cuda/targets/x86_64-linux/include/nvtx3/nvtxDetail/nvtxInitDefs.h"
                                                                            ;
    if (nvtxGlobals_v3.nvtxNameCategoryA_impl_fnptr == nvtxNameCategoryA_impl_init_v3 || forceAllToNoops)
        nvtxGlobals_v3.nvtxNameCategoryA_impl_fnptr = 
# 455 "/usr/local/cuda/targets/x86_64-linux/include/nvtx3/nvtxDetail/nvtxInitDefs.h" 3 4
                                                                             __null
# 455 "/usr/local/cuda/targets/x86_64-linux/include/nvtx3/nvtxDetail/nvtxInitDefs.h"
                                                                                 ;
    if (nvtxGlobals_v3.nvtxNameCategoryW_impl_fnptr == nvtxNameCategoryW_impl_init_v3 || forceAllToNoops)
        nvtxGlobals_v3.nvtxNameCategoryW_impl_fnptr = 
# 457 "/usr/local/cuda/targets/x86_64-linux/include/nvtx3/nvtxDetail/nvtxInitDefs.h" 3 4
                                                                             __null
# 457 "/usr/local/cuda/targets/x86_64-linux/include/nvtx3/nvtxDetail/nvtxInitDefs.h"
                                                                                 ;
    if (nvtxGlobals_v3.nvtxNameOsThreadA_impl_fnptr == nvtxNameOsThreadA_impl_init_v3 || forceAllToNoops)
        nvtxGlobals_v3.nvtxNameOsThreadA_impl_fnptr = 
# 459 "/usr/local/cuda/targets/x86_64-linux/include/nvtx3/nvtxDetail/nvtxInitDefs.h" 3 4
                                                                             __null
# 459 "/usr/local/cuda/targets/x86_64-linux/include/nvtx3/nvtxDetail/nvtxInitDefs.h"
                                                                                 ;
    if (nvtxGlobals_v3.nvtxNameOsThreadW_impl_fnptr == nvtxNameOsThreadW_impl_init_v3 || forceAllToNoops)
        nvtxGlobals_v3.nvtxNameOsThreadW_impl_fnptr = 
# 461 "/usr/local/cuda/targets/x86_64-linux/include/nvtx3/nvtxDetail/nvtxInitDefs.h" 3 4
                                                                             __null
# 461 "/usr/local/cuda/targets/x86_64-linux/include/nvtx3/nvtxDetail/nvtxInitDefs.h"
                                                                                 ;

    if (nvtxGlobals_v3.nvtxNameCuDeviceA_impl_fnptr == nvtxNameCuDeviceA_impl_init_v3 || forceAllToNoops)
        nvtxGlobals_v3.nvtxNameCuDeviceA_impl_fnptr = 
# 464 "/usr/local/cuda/targets/x86_64-linux/include/nvtx3/nvtxDetail/nvtxInitDefs.h" 3 4
                                                                             __null
# 464 "/usr/local/cuda/targets/x86_64-linux/include/nvtx3/nvtxDetail/nvtxInitDefs.h"
                                                                                 ;
    if (nvtxGlobals_v3.nvtxNameCuDeviceW_impl_fnptr == nvtxNameCuDeviceW_impl_init_v3 || forceAllToNoops)
        nvtxGlobals_v3.nvtxNameCuDeviceW_impl_fnptr = 
# 466 "/usr/local/cuda/targets/x86_64-linux/include/nvtx3/nvtxDetail/nvtxInitDefs.h" 3 4
                                                                             __null
# 466 "/usr/local/cuda/targets/x86_64-linux/include/nvtx3/nvtxDetail/nvtxInitDefs.h"
                                                                                 ;
    if (nvtxGlobals_v3.nvtxNameCuContextA_impl_fnptr == nvtxNameCuContextA_impl_init_v3 || forceAllToNoops)
        nvtxGlobals_v3.nvtxNameCuContextA_impl_fnptr = 
# 468 "/usr/local/cuda/targets/x86_64-linux/include/nvtx3/nvtxDetail/nvtxInitDefs.h" 3 4
                                                                              __null
# 468 "/usr/local/cuda/targets/x86_64-linux/include/nvtx3/nvtxDetail/nvtxInitDefs.h"
                                                                                  ;
    if (nvtxGlobals_v3.nvtxNameCuContextW_impl_fnptr == nvtxNameCuContextW_impl_init_v3 || forceAllToNoops)
        nvtxGlobals_v3.nvtxNameCuContextW_impl_fnptr = 
# 470 "/usr/local/cuda/targets/x86_64-linux/include/nvtx3/nvtxDetail/nvtxInitDefs.h" 3 4
                                                                              __null
# 470 "/usr/local/cuda/targets/x86_64-linux/include/nvtx3/nvtxDetail/nvtxInitDefs.h"
                                                                                  ;
    if (nvtxGlobals_v3.nvtxNameCuStreamA_impl_fnptr == nvtxNameCuStreamA_impl_init_v3 || forceAllToNoops)
        nvtxGlobals_v3.nvtxNameCuStreamA_impl_fnptr = 
# 472 "/usr/local/cuda/targets/x86_64-linux/include/nvtx3/nvtxDetail/nvtxInitDefs.h" 3 4
                                                                             __null
# 472 "/usr/local/cuda/targets/x86_64-linux/include/nvtx3/nvtxDetail/nvtxInitDefs.h"
                                                                                 ;
    if (nvtxGlobals_v3.nvtxNameCuStreamW_impl_fnptr == nvtxNameCuStreamW_impl_init_v3 || forceAllToNoops)
        nvtxGlobals_v3.nvtxNameCuStreamW_impl_fnptr = 
# 474 "/usr/local/cuda/targets/x86_64-linux/include/nvtx3/nvtxDetail/nvtxInitDefs.h" 3 4
                                                                             __null
# 474 "/usr/local/cuda/targets/x86_64-linux/include/nvtx3/nvtxDetail/nvtxInitDefs.h"
                                                                                 ;
    if (nvtxGlobals_v3.nvtxNameCuEventA_impl_fnptr == nvtxNameCuEventA_impl_init_v3 || forceAllToNoops)
        nvtxGlobals_v3.nvtxNameCuEventA_impl_fnptr = 
# 476 "/usr/local/cuda/targets/x86_64-linux/include/nvtx3/nvtxDetail/nvtxInitDefs.h" 3 4
                                                                            __null
# 476 "/usr/local/cuda/targets/x86_64-linux/include/nvtx3/nvtxDetail/nvtxInitDefs.h"
                                                                                ;
    if (nvtxGlobals_v3.nvtxNameCuEventW_impl_fnptr == nvtxNameCuEventW_impl_init_v3 || forceAllToNoops)
        nvtxGlobals_v3.nvtxNameCuEventW_impl_fnptr = 
# 478 "/usr/local/cuda/targets/x86_64-linux/include/nvtx3/nvtxDetail/nvtxInitDefs.h" 3 4
                                                                            __null
# 478 "/usr/local/cuda/targets/x86_64-linux/include/nvtx3/nvtxDetail/nvtxInitDefs.h"
                                                                                ;

    if (nvtxGlobals_v3.nvtxNameClDeviceA_impl_fnptr == nvtxNameClDeviceA_impl_init_v3 || forceAllToNoops)
        nvtxGlobals_v3.nvtxNameClDeviceA_impl_fnptr = 
# 481 "/usr/local/cuda/targets/x86_64-linux/include/nvtx3/nvtxDetail/nvtxInitDefs.h" 3 4
                                                                             __null
# 481 "/usr/local/cuda/targets/x86_64-linux/include/nvtx3/nvtxDetail/nvtxInitDefs.h"
                                                                                 ;
    if (nvtxGlobals_v3.nvtxNameClDeviceW_impl_fnptr == nvtxNameClDeviceW_impl_init_v3 || forceAllToNoops)
        nvtxGlobals_v3.nvtxNameClDeviceW_impl_fnptr = 
# 483 "/usr/local/cuda/targets/x86_64-linux/include/nvtx3/nvtxDetail/nvtxInitDefs.h" 3 4
                                                                             __null
# 483 "/usr/local/cuda/targets/x86_64-linux/include/nvtx3/nvtxDetail/nvtxInitDefs.h"
                                                                                 ;
    if (nvtxGlobals_v3.nvtxNameClContextA_impl_fnptr == nvtxNameClContextA_impl_init_v3 || forceAllToNoops)
        nvtxGlobals_v3.nvtxNameClContextA_impl_fnptr = 
# 485 "/usr/local/cuda/targets/x86_64-linux/include/nvtx3/nvtxDetail/nvtxInitDefs.h" 3 4
                                                                              __null
# 485 "/usr/local/cuda/targets/x86_64-linux/include/nvtx3/nvtxDetail/nvtxInitDefs.h"
                                                                                  ;
    if (nvtxGlobals_v3.nvtxNameClContextW_impl_fnptr == nvtxNameClContextW_impl_init_v3 || forceAllToNoops)
        nvtxGlobals_v3.nvtxNameClContextW_impl_fnptr = 
# 487 "/usr/local/cuda/targets/x86_64-linux/include/nvtx3/nvtxDetail/nvtxInitDefs.h" 3 4
                                                                              __null
# 487 "/usr/local/cuda/targets/x86_64-linux/include/nvtx3/nvtxDetail/nvtxInitDefs.h"
                                                                                  ;
    if (nvtxGlobals_v3.nvtxNameClCommandQueueA_impl_fnptr == nvtxNameClCommandQueueA_impl_init_v3 || forceAllToNoops)
        nvtxGlobals_v3.nvtxNameClCommandQueueA_impl_fnptr = 
# 489 "/usr/local/cuda/targets/x86_64-linux/include/nvtx3/nvtxDetail/nvtxInitDefs.h" 3 4
                                                                                   __null
# 489 "/usr/local/cuda/targets/x86_64-linux/include/nvtx3/nvtxDetail/nvtxInitDefs.h"
                                                                                       ;
    if (nvtxGlobals_v3.nvtxNameClCommandQueueW_impl_fnptr == nvtxNameClCommandQueueW_impl_init_v3 || forceAllToNoops)
        nvtxGlobals_v3.nvtxNameClCommandQueueW_impl_fnptr = 
# 491 "/usr/local/cuda/targets/x86_64-linux/include/nvtx3/nvtxDetail/nvtxInitDefs.h" 3 4
                                                                                   __null
# 491 "/usr/local/cuda/targets/x86_64-linux/include/nvtx3/nvtxDetail/nvtxInitDefs.h"
                                                                                       ;
    if (nvtxGlobals_v3.nvtxNameClMemObjectA_impl_fnptr == nvtxNameClMemObjectA_impl_init_v3 || forceAllToNoops)
        nvtxGlobals_v3.nvtxNameClMemObjectA_impl_fnptr = 
# 493 "/usr/local/cuda/targets/x86_64-linux/include/nvtx3/nvtxDetail/nvtxInitDefs.h" 3 4
                                                                                __null
# 493 "/usr/local/cuda/targets/x86_64-linux/include/nvtx3/nvtxDetail/nvtxInitDefs.h"
                                                                                    ;
    if (nvtxGlobals_v3.nvtxNameClMemObjectW_impl_fnptr == nvtxNameClMemObjectW_impl_init_v3 || forceAllToNoops)
        nvtxGlobals_v3.nvtxNameClMemObjectW_impl_fnptr = 
# 495 "/usr/local/cuda/targets/x86_64-linux/include/nvtx3/nvtxDetail/nvtxInitDefs.h" 3 4
                                                                                __null
# 495 "/usr/local/cuda/targets/x86_64-linux/include/nvtx3/nvtxDetail/nvtxInitDefs.h"
                                                                                    ;
    if (nvtxGlobals_v3.nvtxNameClSamplerA_impl_fnptr == nvtxNameClSamplerA_impl_init_v3 || forceAllToNoops)
        nvtxGlobals_v3.nvtxNameClSamplerA_impl_fnptr = 
# 497 "/usr/local/cuda/targets/x86_64-linux/include/nvtx3/nvtxDetail/nvtxInitDefs.h" 3 4
                                                                              __null
# 497 "/usr/local/cuda/targets/x86_64-linux/include/nvtx3/nvtxDetail/nvtxInitDefs.h"
                                                                                  ;
    if (nvtxGlobals_v3.nvtxNameClSamplerW_impl_fnptr == nvtxNameClSamplerW_impl_init_v3 || forceAllToNoops)
        nvtxGlobals_v3.nvtxNameClSamplerW_impl_fnptr = 
# 499 "/usr/local/cuda/targets/x86_64-linux/include/nvtx3/nvtxDetail/nvtxInitDefs.h" 3 4
                                                                              __null
# 499 "/usr/local/cuda/targets/x86_64-linux/include/nvtx3/nvtxDetail/nvtxInitDefs.h"
                                                                                  ;
    if (nvtxGlobals_v3.nvtxNameClProgramA_impl_fnptr == nvtxNameClProgramA_impl_init_v3 || forceAllToNoops)
        nvtxGlobals_v3.nvtxNameClProgramA_impl_fnptr = 
# 501 "/usr/local/cuda/targets/x86_64-linux/include/nvtx3/nvtxDetail/nvtxInitDefs.h" 3 4
                                                                              __null
# 501 "/usr/local/cuda/targets/x86_64-linux/include/nvtx3/nvtxDetail/nvtxInitDefs.h"
                                                                                  ;
    if (nvtxGlobals_v3.nvtxNameClProgramW_impl_fnptr == nvtxNameClProgramW_impl_init_v3 || forceAllToNoops)
        nvtxGlobals_v3.nvtxNameClProgramW_impl_fnptr = 
# 503 "/usr/local/cuda/targets/x86_64-linux/include/nvtx3/nvtxDetail/nvtxInitDefs.h" 3 4
                                                                              __null
# 503 "/usr/local/cuda/targets/x86_64-linux/include/nvtx3/nvtxDetail/nvtxInitDefs.h"
                                                                                  ;
    if (nvtxGlobals_v3.nvtxNameClEventA_impl_fnptr == nvtxNameClEventA_impl_init_v3 || forceAllToNoops)
        nvtxGlobals_v3.nvtxNameClEventA_impl_fnptr = 
# 505 "/usr/local/cuda/targets/x86_64-linux/include/nvtx3/nvtxDetail/nvtxInitDefs.h" 3 4
                                                                            __null
# 505 "/usr/local/cuda/targets/x86_64-linux/include/nvtx3/nvtxDetail/nvtxInitDefs.h"
                                                                                ;
    if (nvtxGlobals_v3.nvtxNameClEventW_impl_fnptr == nvtxNameClEventW_impl_init_v3 || forceAllToNoops)
        nvtxGlobals_v3.nvtxNameClEventW_impl_fnptr = 
# 507 "/usr/local/cuda/targets/x86_64-linux/include/nvtx3/nvtxDetail/nvtxInitDefs.h" 3 4
                                                                            __null
# 507 "/usr/local/cuda/targets/x86_64-linux/include/nvtx3/nvtxDetail/nvtxInitDefs.h"
                                                                                ;

    if (nvtxGlobals_v3.nvtxNameCudaDeviceA_impl_fnptr == nvtxNameCudaDeviceA_impl_init_v3 || forceAllToNoops)
        nvtxGlobals_v3.nvtxNameCudaDeviceA_impl_fnptr = 
# 510 "/usr/local/cuda/targets/x86_64-linux/include/nvtx3/nvtxDetail/nvtxInitDefs.h" 3 4
                                                                               __null
# 510 "/usr/local/cuda/targets/x86_64-linux/include/nvtx3/nvtxDetail/nvtxInitDefs.h"
                                                                                   ;
    if (nvtxGlobals_v3.nvtxNameCudaDeviceW_impl_fnptr == nvtxNameCudaDeviceW_impl_init_v3 || forceAllToNoops)
        nvtxGlobals_v3.nvtxNameCudaDeviceW_impl_fnptr = 
# 512 "/usr/local/cuda/targets/x86_64-linux/include/nvtx3/nvtxDetail/nvtxInitDefs.h" 3 4
                                                                               __null
# 512 "/usr/local/cuda/targets/x86_64-linux/include/nvtx3/nvtxDetail/nvtxInitDefs.h"
                                                                                   ;
    if (nvtxGlobals_v3.nvtxNameCudaStreamA_impl_fnptr == nvtxNameCudaStreamA_impl_init_v3 || forceAllToNoops)
        nvtxGlobals_v3.nvtxNameCudaStreamA_impl_fnptr = 
# 514 "/usr/local/cuda/targets/x86_64-linux/include/nvtx3/nvtxDetail/nvtxInitDefs.h" 3 4
                                                                               __null
# 514 "/usr/local/cuda/targets/x86_64-linux/include/nvtx3/nvtxDetail/nvtxInitDefs.h"
                                                                                   ;
    if (nvtxGlobals_v3.nvtxNameCudaStreamW_impl_fnptr == nvtxNameCudaStreamW_impl_init_v3 || forceAllToNoops)
        nvtxGlobals_v3.nvtxNameCudaStreamW_impl_fnptr = 
# 516 "/usr/local/cuda/targets/x86_64-linux/include/nvtx3/nvtxDetail/nvtxInitDefs.h" 3 4
                                                                               __null
# 516 "/usr/local/cuda/targets/x86_64-linux/include/nvtx3/nvtxDetail/nvtxInitDefs.h"
                                                                                   ;
    if (nvtxGlobals_v3.nvtxNameCudaEventA_impl_fnptr == nvtxNameCudaEventA_impl_init_v3 || forceAllToNoops)
        nvtxGlobals_v3.nvtxNameCudaEventA_impl_fnptr = 
# 518 "/usr/local/cuda/targets/x86_64-linux/include/nvtx3/nvtxDetail/nvtxInitDefs.h" 3 4
                                                                              __null
# 518 "/usr/local/cuda/targets/x86_64-linux/include/nvtx3/nvtxDetail/nvtxInitDefs.h"
                                                                                  ;
    if (nvtxGlobals_v3.nvtxNameCudaEventW_impl_fnptr == nvtxNameCudaEventW_impl_init_v3 || forceAllToNoops)
        nvtxGlobals_v3.nvtxNameCudaEventW_impl_fnptr = 
# 520 "/usr/local/cuda/targets/x86_64-linux/include/nvtx3/nvtxDetail/nvtxInitDefs.h" 3 4
                                                                              __null
# 520 "/usr/local/cuda/targets/x86_64-linux/include/nvtx3/nvtxDetail/nvtxInitDefs.h"
                                                                                  ;

    if (nvtxGlobals_v3.nvtxDomainMarkEx_impl_fnptr == nvtxDomainMarkEx_impl_init_v3 || forceAllToNoops)
        nvtxGlobals_v3.nvtxDomainMarkEx_impl_fnptr = 
# 523 "/usr/local/cuda/targets/x86_64-linux/include/nvtx3/nvtxDetail/nvtxInitDefs.h" 3 4
                                                                            __null
# 523 "/usr/local/cuda/targets/x86_64-linux/include/nvtx3/nvtxDetail/nvtxInitDefs.h"
                                                                                ;
    if (nvtxGlobals_v3.nvtxDomainRangeStartEx_impl_fnptr == nvtxDomainRangeStartEx_impl_init_v3 || forceAllToNoops)
        nvtxGlobals_v3.nvtxDomainRangeStartEx_impl_fnptr = 
# 525 "/usr/local/cuda/targets/x86_64-linux/include/nvtx3/nvtxDetail/nvtxInitDefs.h" 3 4
                                                                                  __null
# 525 "/usr/local/cuda/targets/x86_64-linux/include/nvtx3/nvtxDetail/nvtxInitDefs.h"
                                                                                      ;
    if (nvtxGlobals_v3.nvtxDomainRangeEnd_impl_fnptr == nvtxDomainRangeEnd_impl_init_v3 || forceAllToNoops)
        nvtxGlobals_v3.nvtxDomainRangeEnd_impl_fnptr = 
# 527 "/usr/local/cuda/targets/x86_64-linux/include/nvtx3/nvtxDetail/nvtxInitDefs.h" 3 4
                                                                              __null
# 527 "/usr/local/cuda/targets/x86_64-linux/include/nvtx3/nvtxDetail/nvtxInitDefs.h"
                                                                                  ;
    if (nvtxGlobals_v3.nvtxDomainRangePushEx_impl_fnptr == nvtxDomainRangePushEx_impl_init_v3 || forceAllToNoops)
        nvtxGlobals_v3.nvtxDomainRangePushEx_impl_fnptr = 
# 529 "/usr/local/cuda/targets/x86_64-linux/include/nvtx3/nvtxDetail/nvtxInitDefs.h" 3 4
                                                                                 __null
# 529 "/usr/local/cuda/targets/x86_64-linux/include/nvtx3/nvtxDetail/nvtxInitDefs.h"
                                                                                     ;
    if (nvtxGlobals_v3.nvtxDomainRangePop_impl_fnptr == nvtxDomainRangePop_impl_init_v3 || forceAllToNoops)
        nvtxGlobals_v3.nvtxDomainRangePop_impl_fnptr = 
# 531 "/usr/local/cuda/targets/x86_64-linux/include/nvtx3/nvtxDetail/nvtxInitDefs.h" 3 4
                                                                              __null
# 531 "/usr/local/cuda/targets/x86_64-linux/include/nvtx3/nvtxDetail/nvtxInitDefs.h"
                                                                                  ;
    if (nvtxGlobals_v3.nvtxDomainResourceCreate_impl_fnptr == nvtxDomainResourceCreate_impl_init_v3 || forceAllToNoops)
        nvtxGlobals_v3.nvtxDomainResourceCreate_impl_fnptr = 
# 533 "/usr/local/cuda/targets/x86_64-linux/include/nvtx3/nvtxDetail/nvtxInitDefs.h" 3 4
                                                                                    __null
# 533 "/usr/local/cuda/targets/x86_64-linux/include/nvtx3/nvtxDetail/nvtxInitDefs.h"
                                                                                        ;
    if (nvtxGlobals_v3.nvtxDomainResourceDestroy_impl_fnptr == nvtxDomainResourceDestroy_impl_init_v3 || forceAllToNoops)
        nvtxGlobals_v3.nvtxDomainResourceDestroy_impl_fnptr = 
# 535 "/usr/local/cuda/targets/x86_64-linux/include/nvtx3/nvtxDetail/nvtxInitDefs.h" 3 4
                                                                                     __null
# 535 "/usr/local/cuda/targets/x86_64-linux/include/nvtx3/nvtxDetail/nvtxInitDefs.h"
                                                                                         ;
    if (nvtxGlobals_v3.nvtxDomainNameCategoryA_impl_fnptr == nvtxDomainNameCategoryA_impl_init_v3 || forceAllToNoops)
        nvtxGlobals_v3.nvtxDomainNameCategoryA_impl_fnptr = 
# 537 "/usr/local/cuda/targets/x86_64-linux/include/nvtx3/nvtxDetail/nvtxInitDefs.h" 3 4
                                                                                   __null
# 537 "/usr/local/cuda/targets/x86_64-linux/include/nvtx3/nvtxDetail/nvtxInitDefs.h"
                                                                                       ;
    if (nvtxGlobals_v3.nvtxDomainNameCategoryW_impl_fnptr == nvtxDomainNameCategoryW_impl_init_v3 || forceAllToNoops)
        nvtxGlobals_v3.nvtxDomainNameCategoryW_impl_fnptr = 
# 539 "/usr/local/cuda/targets/x86_64-linux/include/nvtx3/nvtxDetail/nvtxInitDefs.h" 3 4
                                                                                   __null
# 539 "/usr/local/cuda/targets/x86_64-linux/include/nvtx3/nvtxDetail/nvtxInitDefs.h"
                                                                                       ;
    if (nvtxGlobals_v3.nvtxDomainRegisterStringA_impl_fnptr == nvtxDomainRegisterStringA_impl_init_v3 || forceAllToNoops)
        nvtxGlobals_v3.nvtxDomainRegisterStringA_impl_fnptr = 
# 541 "/usr/local/cuda/targets/x86_64-linux/include/nvtx3/nvtxDetail/nvtxInitDefs.h" 3 4
                                                                                     __null
# 541 "/usr/local/cuda/targets/x86_64-linux/include/nvtx3/nvtxDetail/nvtxInitDefs.h"
                                                                                         ;
    if (nvtxGlobals_v3.nvtxDomainRegisterStringW_impl_fnptr == nvtxDomainRegisterStringW_impl_init_v3 || forceAllToNoops)
        nvtxGlobals_v3.nvtxDomainRegisterStringW_impl_fnptr = 
# 543 "/usr/local/cuda/targets/x86_64-linux/include/nvtx3/nvtxDetail/nvtxInitDefs.h" 3 4
                                                                                     __null
# 543 "/usr/local/cuda/targets/x86_64-linux/include/nvtx3/nvtxDetail/nvtxInitDefs.h"
                                                                                         ;
    if (nvtxGlobals_v3.nvtxDomainCreateA_impl_fnptr == nvtxDomainCreateA_impl_init_v3 || forceAllToNoops)
        nvtxGlobals_v3.nvtxDomainCreateA_impl_fnptr = 
# 545 "/usr/local/cuda/targets/x86_64-linux/include/nvtx3/nvtxDetail/nvtxInitDefs.h" 3 4
                                                                             __null
# 545 "/usr/local/cuda/targets/x86_64-linux/include/nvtx3/nvtxDetail/nvtxInitDefs.h"
                                                                                 ;
    if (nvtxGlobals_v3.nvtxDomainCreateW_impl_fnptr == nvtxDomainCreateW_impl_init_v3 || forceAllToNoops)
        nvtxGlobals_v3.nvtxDomainCreateW_impl_fnptr = 
# 547 "/usr/local/cuda/targets/x86_64-linux/include/nvtx3/nvtxDetail/nvtxInitDefs.h" 3 4
                                                                             __null
# 547 "/usr/local/cuda/targets/x86_64-linux/include/nvtx3/nvtxDetail/nvtxInitDefs.h"
                                                                                 ;
    if (nvtxGlobals_v3.nvtxDomainDestroy_impl_fnptr == nvtxDomainDestroy_impl_init_v3 || forceAllToNoops)
        nvtxGlobals_v3.nvtxDomainDestroy_impl_fnptr = 
# 549 "/usr/local/cuda/targets/x86_64-linux/include/nvtx3/nvtxDetail/nvtxInitDefs.h" 3 4
                                                                             __null
# 549 "/usr/local/cuda/targets/x86_64-linux/include/nvtx3/nvtxDetail/nvtxInitDefs.h"
                                                                                 ;
    if (nvtxGlobals_v3.nvtxInitialize_impl_fnptr == nvtxInitialize_impl_init_v3 || forceAllToNoops)
        nvtxGlobals_v3.nvtxInitialize_impl_fnptr = 
# 551 "/usr/local/cuda/targets/x86_64-linux/include/nvtx3/nvtxDetail/nvtxInitDefs.h" 3 4
                                                                          __null
# 551 "/usr/local/cuda/targets/x86_64-linux/include/nvtx3/nvtxDetail/nvtxInitDefs.h"
                                                                              ;

    if (nvtxGlobals_v3.nvtxDomainSyncUserCreate_impl_fnptr == nvtxDomainSyncUserCreate_impl_init_v3 || forceAllToNoops)
        nvtxGlobals_v3.nvtxDomainSyncUserCreate_impl_fnptr = 
# 554 "/usr/local/cuda/targets/x86_64-linux/include/nvtx3/nvtxDetail/nvtxInitDefs.h" 3 4
                                                                                    __null
# 554 "/usr/local/cuda/targets/x86_64-linux/include/nvtx3/nvtxDetail/nvtxInitDefs.h"
                                                                                        ;
    if (nvtxGlobals_v3.nvtxDomainSyncUserDestroy_impl_fnptr == nvtxDomainSyncUserDestroy_impl_init_v3 || forceAllToNoops)
        nvtxGlobals_v3.nvtxDomainSyncUserDestroy_impl_fnptr = 
# 556 "/usr/local/cuda/targets/x86_64-linux/include/nvtx3/nvtxDetail/nvtxInitDefs.h" 3 4
                                                                                     __null
# 556 "/usr/local/cuda/targets/x86_64-linux/include/nvtx3/nvtxDetail/nvtxInitDefs.h"
                                                                                         ;
    if (nvtxGlobals_v3.nvtxDomainSyncUserAcquireStart_impl_fnptr == nvtxDomainSyncUserAcquireStart_impl_init_v3 || forceAllToNoops)
        nvtxGlobals_v3.nvtxDomainSyncUserAcquireStart_impl_fnptr = 
# 558 "/usr/local/cuda/targets/x86_64-linux/include/nvtx3/nvtxDetail/nvtxInitDefs.h" 3 4
                                                                                          __null
# 558 "/usr/local/cuda/targets/x86_64-linux/include/nvtx3/nvtxDetail/nvtxInitDefs.h"
                                                                                              ;
    if (nvtxGlobals_v3.nvtxDomainSyncUserAcquireFailed_impl_fnptr == nvtxDomainSyncUserAcquireFailed_impl_init_v3 || forceAllToNoops)
        nvtxGlobals_v3.nvtxDomainSyncUserAcquireFailed_impl_fnptr = 
# 560 "/usr/local/cuda/targets/x86_64-linux/include/nvtx3/nvtxDetail/nvtxInitDefs.h" 3 4
                                                                                           __null
# 560 "/usr/local/cuda/targets/x86_64-linux/include/nvtx3/nvtxDetail/nvtxInitDefs.h"
                                                                                               ;
    if (nvtxGlobals_v3.nvtxDomainSyncUserAcquireSuccess_impl_fnptr == nvtxDomainSyncUserAcquireSuccess_impl_init_v3 || forceAllToNoops)
        nvtxGlobals_v3.nvtxDomainSyncUserAcquireSuccess_impl_fnptr = 
# 562 "/usr/local/cuda/targets/x86_64-linux/include/nvtx3/nvtxDetail/nvtxInitDefs.h" 3 4
                                                                                            __null
# 562 "/usr/local/cuda/targets/x86_64-linux/include/nvtx3/nvtxDetail/nvtxInitDefs.h"
                                                                                                ;
    if (nvtxGlobals_v3.nvtxDomainSyncUserReleasing_impl_fnptr == nvtxDomainSyncUserReleasing_impl_init_v3 || forceAllToNoops)
        nvtxGlobals_v3.nvtxDomainSyncUserReleasing_impl_fnptr = 
# 564 "/usr/local/cuda/targets/x86_64-linux/include/nvtx3/nvtxDetail/nvtxInitDefs.h" 3 4
                                                                                       __null
# 564 "/usr/local/cuda/targets/x86_64-linux/include/nvtx3/nvtxDetail/nvtxInitDefs.h"
                                                                                           ;
}
# 458 "/usr/local/cuda/targets/x86_64-linux/include/nvtx3/nvtxDetail/nvtxImpl.h" 2



# 1 "/usr/local/cuda/targets/x86_64-linux/include/nvtx3/nvtxDetail/nvtxInit.h" 1
# 106 "/usr/local/cuda/targets/x86_64-linux/include/nvtx3/nvtxDetail/nvtxInit.h"
__attribute__((weak)) NvtxInitializeInjectionNvtxFunc_t InitializeInjectionNvtx2_fnptr;
# 127 "/usr/local/cuda/targets/x86_64-linux/include/nvtx3/nvtxDetail/nvtxInit.h"
extern "C" __attribute__((visibility("hidden"))) inline int nvtxInitializeInjectionLibrary_v3(void);
extern "C" __attribute__((visibility("hidden"))) inline int nvtxInitializeInjectionLibrary_v3(void)
{
    const char* const initFuncName = "InitializeInjectionNvtx2";
    NvtxInitializeInjectionNvtxFunc_t init_fnptr = (NvtxInitializeInjectionNvtxFunc_t)0;
    void* injectionLibraryHandle = (void*)0;
    int entryPointStatus = 0;
# 142 "/usr/local/cuda/targets/x86_64-linux/include/nvtx3/nvtxDetail/nvtxInit.h"
    if (!init_fnptr)
    {



        const char* const nvtxEnvVarName = (sizeof(void*) == 4)
            ? "NVTX_INJECTION32_PATH"
            : "NVTX_INJECTION64_PATH";

        char injectionLibraryPathBuf[
# 151 "/usr/local/cuda/targets/x86_64-linux/include/nvtx3/nvtxDetail/nvtxInit.h" 3 4
                                             4096
# 151 "/usr/local/cuda/targets/x86_64-linux/include/nvtx3/nvtxDetail/nvtxInit.h"
                                                         ];
        const char* injectionLibraryPath = (const char*)0;


        (void)injectionLibraryPathBuf;
# 164 "/usr/local/cuda/targets/x86_64-linux/include/nvtx3/nvtxDetail/nvtxInit.h"
        injectionLibraryPath = getenv(nvtxEnvVarName);
# 244 "/usr/local/cuda/targets/x86_64-linux/include/nvtx3/nvtxDetail/nvtxInit.h"
        if (injectionLibraryPath)
        {

            injectionLibraryHandle = dlopen(injectionLibraryPath, 
# 247 "/usr/local/cuda/targets/x86_64-linux/include/nvtx3/nvtxDetail/nvtxInit.h" 3 4
                                    0x00001
# 247 "/usr/local/cuda/targets/x86_64-linux/include/nvtx3/nvtxDetail/nvtxInit.h"
                                    );
            if (!injectionLibraryHandle)
            {
                ;
                return 4;
            }
            else
            {

                init_fnptr = (NvtxInitializeInjectionNvtxFunc_t)dlsym(injectionLibraryHandle, initFuncName);
                if (!init_fnptr)
                {
                    dlclose(injectionLibraryHandle);
                    ;
                    return 5;
                }
            }
        }
    }



    if (!init_fnptr)
    {


        if (InitializeInjectionNvtx2_fnptr)
        {
            init_fnptr = InitializeInjectionNvtx2_fnptr;
        }
    }





    if (!init_fnptr)
    {
        return 7;
    }



    entryPointStatus = init_fnptr(nvtxGetExportTable_v3);
    if (entryPointStatus == 0)
    {
        ;
        if (injectionLibraryHandle)
        {
            dlclose(injectionLibraryHandle);
        }
        return 6;
    }

    return 0;
}

extern "C" __attribute__((visibility("hidden"))) inline void nvtxInitOnce_v3(void)
{
    unsigned int old;
    if (nvtxGlobals_v3.initState == 2)
    {
        return;
    }

    __sync_synchronize(); old = __sync_val_compare_and_swap(&nvtxGlobals_v3.initState, 1, 0)



                              ;
    if (old == 0)
    {
        int result;
        int forceAllToNoops;


        result = nvtxInitializeInjectionLibrary_v3();


        forceAllToNoops = result != 0;
        nvtxSetInitFunctionsToNoops_v3(forceAllToNoops);


        __sync_synchronize(); __sync_lock_test_and_set(&nvtxGlobals_v3.initState, 2)

                                     ;
    }
    else
    {
        __sync_synchronize();
        while (nvtxGlobals_v3.initState != 2)
        {
            sched_yield();
            __sync_synchronize();
        }
    }
}
# 462 "/usr/local/cuda/targets/x86_64-linux/include/nvtx3/nvtxDetail/nvtxImpl.h" 2


#pragma GCC visibility pop



}
# 1495 "/usr/local/cuda/targets/x86_64-linux/include/nvtx3/nvToolsExt.h" 2
# 35 "./nvtx3.hpp" 2

# 1 "/usr/include/c++/5/string" 1 3
# 36 "/usr/include/c++/5/string" 3
       
# 37 "/usr/include/c++/5/string" 3

# 1 "/usr/include/x86_64-linux-gnu/c++/5/bits/c++config.h" 1 3
# 194 "/usr/include/x86_64-linux-gnu/c++/5/bits/c++config.h" 3

# 194 "/usr/include/x86_64-linux-gnu/c++/5/bits/c++config.h" 3
namespace std
{
  typedef long unsigned int size_t;
  typedef long int ptrdiff_t;




}
# 216 "/usr/include/x86_64-linux-gnu/c++/5/bits/c++config.h" 3
namespace std
{
  inline namespace __cxx11 __attribute__((__abi_tag__ ("cxx11"))) { }
}
namespace __gnu_cxx
{
  inline namespace __cxx11 __attribute__((__abi_tag__ ("cxx11"))) { }
}
# 482 "/usr/include/x86_64-linux-gnu/c++/5/bits/c++config.h" 3
# 1 "/usr/include/x86_64-linux-gnu/c++/5/bits/os_defines.h" 1 3
# 483 "/usr/include/x86_64-linux-gnu/c++/5/bits/c++config.h" 2 3


# 1 "/usr/include/x86_64-linux-gnu/c++/5/bits/cpu_defines.h" 1 3
# 486 "/usr/include/x86_64-linux-gnu/c++/5/bits/c++config.h" 2 3
# 39 "/usr/include/c++/5/string" 2 3
# 1 "/usr/include/c++/5/bits/stringfwd.h" 1 3
# 37 "/usr/include/c++/5/bits/stringfwd.h" 3
       
# 38 "/usr/include/c++/5/bits/stringfwd.h" 3


# 1 "/usr/include/c++/5/bits/memoryfwd.h" 1 3
# 46 "/usr/include/c++/5/bits/memoryfwd.h" 3
       
# 47 "/usr/include/c++/5/bits/memoryfwd.h" 3



namespace std __attribute__ ((__visibility__ ("default")))
{

# 63 "/usr/include/c++/5/bits/memoryfwd.h" 3
  template<typename>
    class allocator;

  template<>
    class allocator<void>;


  template<typename, typename>
    struct uses_allocator;




}
# 41 "/usr/include/c++/5/bits/stringfwd.h" 2 3

namespace std __attribute__ ((__visibility__ ("default")))
{








  template<class _CharT>
    struct char_traits;

  template<> struct char_traits<char>;


  template<> struct char_traits<wchar_t>;
# 67 "/usr/include/c++/5/bits/stringfwd.h" 3
namespace __cxx11 {

  template<typename _CharT, typename _Traits = char_traits<_CharT>,
           typename _Alloc = allocator<_CharT> >
    class basic_string;


  typedef basic_string<char> string;



  typedef basic_string<wchar_t> wstring;
# 90 "/usr/include/c++/5/bits/stringfwd.h" 3
}




}
# 40 "/usr/include/c++/5/string" 2 3
# 1 "/usr/include/c++/5/bits/char_traits.h" 1 3
# 37 "/usr/include/c++/5/bits/char_traits.h" 3
       
# 38 "/usr/include/c++/5/bits/char_traits.h" 3

# 1 "/usr/include/c++/5/bits/stl_algobase.h" 1 3
# 60 "/usr/include/c++/5/bits/stl_algobase.h" 3
# 1 "/usr/include/c++/5/bits/functexcept.h" 1 3
# 40 "/usr/include/c++/5/bits/functexcept.h" 3
# 1 "/usr/include/c++/5/bits/exception_defines.h" 1 3
# 41 "/usr/include/c++/5/bits/functexcept.h" 2 3

namespace std __attribute__ ((__visibility__ ("default")))
{



  void
  __throw_bad_exception(void) __attribute__((__noreturn__));


  void
  __throw_bad_alloc(void) __attribute__((__noreturn__));


  void
  __throw_bad_cast(void) __attribute__((__noreturn__));

  void
  __throw_bad_typeid(void) __attribute__((__noreturn__));


  void
  __throw_logic_error(const char*) __attribute__((__noreturn__));

  void
  __throw_domain_error(const char*) __attribute__((__noreturn__));

  void
  __throw_invalid_argument(const char*) __attribute__((__noreturn__));

  void
  __throw_length_error(const char*) __attribute__((__noreturn__));

  void
  __throw_out_of_range(const char*) __attribute__((__noreturn__));

  void
  __throw_out_of_range_fmt(const char*, ...) __attribute__((__noreturn__))
    __attribute__((__format__(__gnu_printf__, 1, 2)));

  void
  __throw_runtime_error(const char*) __attribute__((__noreturn__));

  void
  __throw_range_error(const char*) __attribute__((__noreturn__));

  void
  __throw_overflow_error(const char*) __attribute__((__noreturn__));

  void
  __throw_underflow_error(const char*) __attribute__((__noreturn__));


  void
  __throw_ios_failure(const char*) __attribute__((__noreturn__));

  void
  __throw_system_error(int) __attribute__((__noreturn__));

  void
  __throw_future_error(int) __attribute__((__noreturn__));


  void
  __throw_bad_function_call() __attribute__((__noreturn__));


}
# 61 "/usr/include/c++/5/bits/stl_algobase.h" 2 3
# 1 "/usr/include/c++/5/bits/cpp_type_traits.h" 1 3
# 35 "/usr/include/c++/5/bits/cpp_type_traits.h" 3
       
# 36 "/usr/include/c++/5/bits/cpp_type_traits.h" 3
# 68 "/usr/include/c++/5/bits/cpp_type_traits.h" 3
namespace __gnu_cxx __attribute__ ((__visibility__ ("default")))
{


  template<typename _Iterator, typename _Container>
    class __normal_iterator;


}

namespace std __attribute__ ((__visibility__ ("default")))
{


  struct __true_type { };
  struct __false_type { };

  template<bool>
    struct __truth_type
    { typedef __false_type __type; };

  template<>
    struct __truth_type<true>
    { typedef __true_type __type; };



  template<class _Sp, class _Tp>
    struct __traitor
    {
      enum { __value = bool(_Sp::__value) || bool(_Tp::__value) };
      typedef typename __truth_type<__value>::__type __type;
    };


  template<typename, typename>
    struct __are_same
    {
      enum { __value = 0 };
      typedef __false_type __type;
    };

  template<typename _Tp>
    struct __are_same<_Tp, _Tp>
    {
      enum { __value = 1 };
      typedef __true_type __type;
    };


  template<typename _Tp>
    struct __is_void
    {
      enum { __value = 0 };
      typedef __false_type __type;
    };

  template<>
    struct __is_void<void>
    {
      enum { __value = 1 };
      typedef __true_type __type;
    };




  template<typename _Tp>
    struct __is_integer
    {
      enum { __value = 0 };
      typedef __false_type __type;
    };





  template<>
    struct __is_integer<bool>
    {
      enum { __value = 1 };
      typedef __true_type __type;
    };

  template<>
    struct __is_integer<char>
    {
      enum { __value = 1 };
      typedef __true_type __type;
    };

  template<>
    struct __is_integer<signed char>
    {
      enum { __value = 1 };
      typedef __true_type __type;
    };

  template<>
    struct __is_integer<unsigned char>
    {
      enum { __value = 1 };
      typedef __true_type __type;
    };


  template<>
    struct __is_integer<wchar_t>
    {
      enum { __value = 1 };
      typedef __true_type __type;
    };
# 199 "/usr/include/c++/5/bits/cpp_type_traits.h" 3
  template<>
    struct __is_integer<short>
    {
      enum { __value = 1 };
      typedef __true_type __type;
    };

  template<>
    struct __is_integer<unsigned short>
    {
      enum { __value = 1 };
      typedef __true_type __type;
    };

  template<>
    struct __is_integer<int>
    {
      enum { __value = 1 };
      typedef __true_type __type;
    };

  template<>
    struct __is_integer<unsigned int>
    {
      enum { __value = 1 };
      typedef __true_type __type;
    };

  template<>
    struct __is_integer<long>
    {
      enum { __value = 1 };
      typedef __true_type __type;
    };

  template<>
    struct __is_integer<unsigned long>
    {
      enum { __value = 1 };
      typedef __true_type __type;
    };

  template<>
    struct __is_integer<long long>
    {
      enum { __value = 1 };
      typedef __true_type __type;
    };

  template<>
    struct __is_integer<unsigned long long>
    {
      enum { __value = 1 };
      typedef __true_type __type;
    };
# 270 "/usr/include/c++/5/bits/cpp_type_traits.h" 3
template<> struct __is_integer<__int128> { enum { __value = 1 }; typedef __true_type __type; }; template<> struct __is_integer<unsigned __int128> { enum { __value = 1 }; typedef __true_type __type; };
# 287 "/usr/include/c++/5/bits/cpp_type_traits.h" 3
  template<typename _Tp>
    struct __is_floating
    {
      enum { __value = 0 };
      typedef __false_type __type;
    };


  template<>
    struct __is_floating<float>
    {
      enum { __value = 1 };
      typedef __true_type __type;
    };

  template<>
    struct __is_floating<double>
    {
      enum { __value = 1 };
      typedef __true_type __type;
    };

  template<>
    struct __is_floating<long double>
    {
      enum { __value = 1 };
      typedef __true_type __type;
    };




  template<typename _Tp>
    struct __is_pointer
    {
      enum { __value = 0 };
      typedef __false_type __type;
    };

  template<typename _Tp>
    struct __is_pointer<_Tp*>
    {
      enum { __value = 1 };
      typedef __true_type __type;
    };




  template<typename _Tp>
    struct __is_normal_iterator
    {
      enum { __value = 0 };
      typedef __false_type __type;
    };

  template<typename _Iterator, typename _Container>
    struct __is_normal_iterator< __gnu_cxx::__normal_iterator<_Iterator,
             _Container> >
    {
      enum { __value = 1 };
      typedef __true_type __type;
    };




  template<typename _Tp>
    struct __is_arithmetic
    : public __traitor<__is_integer<_Tp>, __is_floating<_Tp> >
    { };




  template<typename _Tp>
    struct __is_scalar
    : public __traitor<__is_arithmetic<_Tp>, __is_pointer<_Tp> >
    { };




  template<typename _Tp>
    struct __is_char
    {
      enum { __value = 0 };
      typedef __false_type __type;
    };

  template<>
    struct __is_char<char>
    {
      enum { __value = 1 };
      typedef __true_type __type;
    };


  template<>
    struct __is_char<wchar_t>
    {
      enum { __value = 1 };
      typedef __true_type __type;
    };


  template<typename _Tp>
    struct __is_byte
    {
      enum { __value = 0 };
      typedef __false_type __type;
    };

  template<>
    struct __is_byte<char>
    {
      enum { __value = 1 };
      typedef __true_type __type;
    };

  template<>
    struct __is_byte<signed char>
    {
      enum { __value = 1 };
      typedef __true_type __type;
    };

  template<>
    struct __is_byte<unsigned char>
    {
      enum { __value = 1 };
      typedef __true_type __type;
    };




  template<typename _Tp>
    struct __is_move_iterator
    {
      enum { __value = 0 };
      typedef __false_type __type;
    };
# 443 "/usr/include/c++/5/bits/cpp_type_traits.h" 3

}
# 62 "/usr/include/c++/5/bits/stl_algobase.h" 2 3
# 1 "/usr/include/c++/5/ext/type_traits.h" 1 3
# 32 "/usr/include/c++/5/ext/type_traits.h" 3
       
# 33 "/usr/include/c++/5/ext/type_traits.h" 3




namespace __gnu_cxx __attribute__ ((__visibility__ ("default")))
{



  template<bool, typename>
    struct __enable_if
    { };

  template<typename _Tp>
    struct __enable_if<true, _Tp>
    { typedef _Tp __type; };



  template<bool _Cond, typename _Iftrue, typename _Iffalse>
    struct __conditional_type
    { typedef _Iftrue __type; };

  template<typename _Iftrue, typename _Iffalse>
    struct __conditional_type<false, _Iftrue, _Iffalse>
    { typedef _Iffalse __type; };



  template<typename _Tp>
    struct __add_unsigned
    {
    private:
      typedef __enable_if<std::__is_integer<_Tp>::__value, _Tp> __if_type;

    public:
      typedef typename __if_type::__type __type;
    };

  template<>
    struct __add_unsigned<char>
    { typedef unsigned char __type; };

  template<>
    struct __add_unsigned<signed char>
    { typedef unsigned char __type; };

  template<>
    struct __add_unsigned<short>
    { typedef unsigned short __type; };

  template<>
    struct __add_unsigned<int>
    { typedef unsigned int __type; };

  template<>
    struct __add_unsigned<long>
    { typedef unsigned long __type; };

  template<>
    struct __add_unsigned<long long>
    { typedef unsigned long long __type; };


  template<>
    struct __add_unsigned<bool>;

  template<>
    struct __add_unsigned<wchar_t>;



  template<typename _Tp>
    struct __remove_unsigned
    {
    private:
      typedef __enable_if<std::__is_integer<_Tp>::__value, _Tp> __if_type;

    public:
      typedef typename __if_type::__type __type;
    };

  template<>
    struct __remove_unsigned<char>
    { typedef signed char __type; };

  template<>
    struct __remove_unsigned<unsigned char>
    { typedef signed char __type; };

  template<>
    struct __remove_unsigned<unsigned short>
    { typedef short __type; };

  template<>
    struct __remove_unsigned<unsigned int>
    { typedef int __type; };

  template<>
    struct __remove_unsigned<unsigned long>
    { typedef long __type; };

  template<>
    struct __remove_unsigned<unsigned long long>
    { typedef long long __type; };


  template<>
    struct __remove_unsigned<bool>;

  template<>
    struct __remove_unsigned<wchar_t>;



  template<typename _Type>
    inline bool
    __is_null_pointer(_Type* __ptr)
    { return __ptr == 0; }

  template<typename _Type>
    inline bool
    __is_null_pointer(_Type)
    { return false; }
# 165 "/usr/include/c++/5/ext/type_traits.h" 3
  template<typename _Tp, bool = std::__is_integer<_Tp>::__value>
    struct __promote
    { typedef double __type; };




  template<typename _Tp>
    struct __promote<_Tp, false>
    { };

  template<>
    struct __promote<long double>
    { typedef long double __type; };

  template<>
    struct __promote<double>
    { typedef double __type; };

  template<>
    struct __promote<float>
    { typedef float __type; };

  template<typename _Tp, typename _Up,
           typename _Tp2 = typename __promote<_Tp>::__type,
           typename _Up2 = typename __promote<_Up>::__type>
    struct __promote_2
    {
      typedef __typeof__(_Tp2() + _Up2()) __type;
    };

  template<typename _Tp, typename _Up, typename _Vp,
           typename _Tp2 = typename __promote<_Tp>::__type,
           typename _Up2 = typename __promote<_Up>::__type,
           typename _Vp2 = typename __promote<_Vp>::__type>
    struct __promote_3
    {
      typedef __typeof__(_Tp2() + _Up2() + _Vp2()) __type;
    };

  template<typename _Tp, typename _Up, typename _Vp, typename _Wp,
           typename _Tp2 = typename __promote<_Tp>::__type,
           typename _Up2 = typename __promote<_Up>::__type,
           typename _Vp2 = typename __promote<_Vp>::__type,
           typename _Wp2 = typename __promote<_Wp>::__type>
    struct __promote_4
    {
      typedef __typeof__(_Tp2() + _Up2() + _Vp2() + _Wp2()) __type;
    };


}
# 63 "/usr/include/c++/5/bits/stl_algobase.h" 2 3
# 1 "/usr/include/c++/5/ext/numeric_traits.h" 1 3
# 32 "/usr/include/c++/5/ext/numeric_traits.h" 3
       
# 33 "/usr/include/c++/5/ext/numeric_traits.h" 3




namespace __gnu_cxx __attribute__ ((__visibility__ ("default")))
{

# 54 "/usr/include/c++/5/ext/numeric_traits.h" 3
  template<typename _Value>
    struct __numeric_traits_integer
    {

      static const _Value __min = (((_Value)(-1) < 0) ? (_Value)1 << (sizeof(_Value) * 8 - ((_Value)(-1) < 0)) : (_Value)0);
      static const _Value __max = (((_Value)(-1) < 0) ? (((((_Value)1 << ((sizeof(_Value) * 8 - ((_Value)(-1) < 0)) - 1)) - 1) << 1) + 1) : ~(_Value)0);



      static const bool __is_signed = ((_Value)(-1) < 0);
      static const int __digits = (sizeof(_Value) * 8 - ((_Value)(-1) < 0));
    };

  template<typename _Value>
    const _Value __numeric_traits_integer<_Value>::__min;

  template<typename _Value>
    const _Value __numeric_traits_integer<_Value>::__max;

  template<typename _Value>
    const bool __numeric_traits_integer<_Value>::__is_signed;

  template<typename _Value>
    const int __numeric_traits_integer<_Value>::__digits;
# 99 "/usr/include/c++/5/ext/numeric_traits.h" 3
  template<typename _Value>
    struct __numeric_traits_floating
    {

      static const int __max_digits10 = (2 + (std::__are_same<_Value, float>::__value ? 24 : std::__are_same<_Value, double>::__value ? 53 : 64) * 643L / 2136);


      static const bool __is_signed = true;
      static const int __digits10 = (std::__are_same<_Value, float>::__value ? 6 : std::__are_same<_Value, double>::__value ? 15 : 18);
      static const int __max_exponent10 = (std::__are_same<_Value, float>::__value ? 38 : std::__are_same<_Value, double>::__value ? 308 : 4932);
    };

  template<typename _Value>
    const int __numeric_traits_floating<_Value>::__max_digits10;

  template<typename _Value>
    const bool __numeric_traits_floating<_Value>::__is_signed;

  template<typename _Value>
    const int __numeric_traits_floating<_Value>::__digits10;

  template<typename _Value>
    const int __numeric_traits_floating<_Value>::__max_exponent10;

  template<typename _Value>
    struct __numeric_traits
    : public __conditional_type<std::__is_integer<_Value>::__value,
    __numeric_traits_integer<_Value>,
    __numeric_traits_floating<_Value> >::__type
    { };


}
# 64 "/usr/include/c++/5/bits/stl_algobase.h" 2 3
# 1 "/usr/include/c++/5/bits/stl_pair.h" 1 3
# 59 "/usr/include/c++/5/bits/stl_pair.h" 3
# 1 "/usr/include/c++/5/bits/move.h" 1 3
# 34 "/usr/include/c++/5/bits/move.h" 3
# 1 "/usr/include/c++/5/bits/concept_check.h" 1 3
# 33 "/usr/include/c++/5/bits/concept_check.h" 3
       
# 34 "/usr/include/c++/5/bits/concept_check.h" 3
# 35 "/usr/include/c++/5/bits/move.h" 2 3

namespace std __attribute__ ((__visibility__ ("default")))
{







  template<typename _Tp>
    inline _Tp*
    __addressof(_Tp& __r)
    {
      return reinterpret_cast<_Tp*>
 (&const_cast<char&>(reinterpret_cast<const volatile char&>(__r)));
    }


}
# 159 "/usr/include/c++/5/bits/move.h" 3
namespace std __attribute__ ((__visibility__ ("default")))
{

# 174 "/usr/include/c++/5/bits/move.h" 3
  template<typename _Tp>
    inline void
    swap(_Tp& __a, _Tp& __b)




    {

     

      _Tp __tmp = (__a);
      __a = (__b);
      __b = (__tmp);
    }




  template<typename _Tp, size_t _Nm>
    inline void
    swap(_Tp (&__a)[_Nm], _Tp (&__b)[_Nm])



    {
      for (size_t __n = 0; __n < _Nm; ++__n)
 swap(__a[__n], __b[__n]);
    }



}
# 60 "/usr/include/c++/5/bits/stl_pair.h" 2 3





namespace std __attribute__ ((__visibility__ ("default")))
{

# 95 "/usr/include/c++/5/bits/stl_pair.h" 3
  template<class _T1, class _T2>
    struct pair
    {
      typedef _T1 first_type;
      typedef _T2 second_type;

      _T1 first;
      _T2 second;





      pair()
      : first(), second() { }


      pair(const _T1& __a, const _T2& __b)
      : first(__a), second(__b) { }



      template<class _U1, class _U2>
 pair(const pair<_U1, _U2>& __p)
 : first(__p.first), second(__p.second) { }
# 209 "/usr/include/c++/5/bits/stl_pair.h" 3
    };


  template<class _T1, class _T2>
    inline bool
    operator==(const pair<_T1, _T2>& __x, const pair<_T1, _T2>& __y)
    { return __x.first == __y.first && __x.second == __y.second; }


  template<class _T1, class _T2>
    inline bool
    operator<(const pair<_T1, _T2>& __x, const pair<_T1, _T2>& __y)
    { return __x.first < __y.first
      || (!(__y.first < __x.first) && __x.second < __y.second); }


  template<class _T1, class _T2>
    inline bool
    operator!=(const pair<_T1, _T2>& __x, const pair<_T1, _T2>& __y)
    { return !(__x == __y); }


  template<class _T1, class _T2>
    inline bool
    operator>(const pair<_T1, _T2>& __x, const pair<_T1, _T2>& __y)
    { return __y < __x; }


  template<class _T1, class _T2>
    inline bool
    operator<=(const pair<_T1, _T2>& __x, const pair<_T1, _T2>& __y)
    { return !(__y < __x); }


  template<class _T1, class _T2>
    inline bool
    operator>=(const pair<_T1, _T2>& __x, const pair<_T1, _T2>& __y)
    { return !(__x < __y); }
# 284 "/usr/include/c++/5/bits/stl_pair.h" 3
  template<class _T1, class _T2>
    inline pair<_T1, _T2>
    make_pair(_T1 __x, _T2 __y)
    { return pair<_T1, _T2>(__x, __y); }





}
# 65 "/usr/include/c++/5/bits/stl_algobase.h" 2 3
# 1 "/usr/include/c++/5/bits/stl_iterator_base_types.h" 1 3
# 62 "/usr/include/c++/5/bits/stl_iterator_base_types.h" 3
       
# 63 "/usr/include/c++/5/bits/stl_iterator_base_types.h" 3







namespace std __attribute__ ((__visibility__ ("default")))
{

# 89 "/usr/include/c++/5/bits/stl_iterator_base_types.h" 3
  struct input_iterator_tag { };


  struct output_iterator_tag { };


  struct forward_iterator_tag : public input_iterator_tag { };



  struct bidirectional_iterator_tag : public forward_iterator_tag { };



  struct random_access_iterator_tag : public bidirectional_iterator_tag { };
# 116 "/usr/include/c++/5/bits/stl_iterator_base_types.h" 3
  template<typename _Category, typename _Tp, typename _Distance = ptrdiff_t,
           typename _Pointer = _Tp*, typename _Reference = _Tp&>
    struct iterator
    {

      typedef _Category iterator_category;

      typedef _Tp value_type;

      typedef _Distance difference_type;

      typedef _Pointer pointer;

      typedef _Reference reference;
    };
# 165 "/usr/include/c++/5/bits/stl_iterator_base_types.h" 3
  template<typename _Iterator>
    struct iterator_traits
    {
      typedef typename _Iterator::iterator_category iterator_category;
      typedef typename _Iterator::value_type value_type;
      typedef typename _Iterator::difference_type difference_type;
      typedef typename _Iterator::pointer pointer;
      typedef typename _Iterator::reference reference;
    };



  template<typename _Tp>
    struct iterator_traits<_Tp*>
    {
      typedef random_access_iterator_tag iterator_category;
      typedef _Tp value_type;
      typedef ptrdiff_t difference_type;
      typedef _Tp* pointer;
      typedef _Tp& reference;
    };


  template<typename _Tp>
    struct iterator_traits<const _Tp*>
    {
      typedef random_access_iterator_tag iterator_category;
      typedef _Tp value_type;
      typedef ptrdiff_t difference_type;
      typedef const _Tp* pointer;
      typedef const _Tp& reference;
    };





  template<typename _Iter>
    inline typename iterator_traits<_Iter>::iterator_category
    __iterator_category(const _Iter&)
    { return typename iterator_traits<_Iter>::iterator_category(); }





  template<typename _Iterator, bool _HasBase>
    struct _Iter_base
    {
      typedef _Iterator iterator_type;
      static iterator_type _S_base(_Iterator __it)
      { return __it; }
    };

  template<typename _Iterator>
    struct _Iter_base<_Iterator, true>
    {
      typedef typename _Iterator::iterator_type iterator_type;
      static iterator_type _S_base(_Iterator __it)
      { return __it.base(); }
    };
# 235 "/usr/include/c++/5/bits/stl_iterator_base_types.h" 3

}
# 66 "/usr/include/c++/5/bits/stl_algobase.h" 2 3
# 1 "/usr/include/c++/5/bits/stl_iterator_base_funcs.h" 1 3
# 62 "/usr/include/c++/5/bits/stl_iterator_base_funcs.h" 3
       
# 63 "/usr/include/c++/5/bits/stl_iterator_base_funcs.h" 3


# 1 "/usr/include/c++/5/debug/debug.h" 1 3
# 46 "/usr/include/c++/5/debug/debug.h" 3
namespace std
{
  namespace __debug { }
}




namespace __gnu_debug
{
  using namespace std::__debug;
}
# 66 "/usr/include/c++/5/bits/stl_iterator_base_funcs.h" 2 3

namespace std __attribute__ ((__visibility__ ("default")))
{


  template<typename _InputIterator>
    inline typename iterator_traits<_InputIterator>::difference_type
    __distance(_InputIterator __first, _InputIterator __last,
               input_iterator_tag)
    {

     

      typename iterator_traits<_InputIterator>::difference_type __n = 0;
      while (__first != __last)
 {
   ++__first;
   ++__n;
 }
      return __n;
    }

  template<typename _RandomAccessIterator>
    inline typename iterator_traits<_RandomAccessIterator>::difference_type
    __distance(_RandomAccessIterator __first, _RandomAccessIterator __last,
               random_access_iterator_tag)
    {

     

      return __last - __first;
    }
# 112 "/usr/include/c++/5/bits/stl_iterator_base_funcs.h" 3
  template<typename _InputIterator>
    inline typename iterator_traits<_InputIterator>::difference_type
    distance(_InputIterator __first, _InputIterator __last)
    {

      return std::__distance(__first, __last,
        std::__iterator_category(__first));
    }

  template<typename _InputIterator, typename _Distance>
    inline void
    __advance(_InputIterator& __i, _Distance __n, input_iterator_tag)
    {

     
      ;
      while (__n--)
 ++__i;
    }

  template<typename _BidirectionalIterator, typename _Distance>
    inline void
    __advance(_BidirectionalIterator& __i, _Distance __n,
       bidirectional_iterator_tag)
    {

     

      if (__n > 0)
        while (__n--)
   ++__i;
      else
        while (__n++)
   --__i;
    }

  template<typename _RandomAccessIterator, typename _Distance>
    inline void
    __advance(_RandomAccessIterator& __i, _Distance __n,
              random_access_iterator_tag)
    {

     

      __i += __n;
    }
# 171 "/usr/include/c++/5/bits/stl_iterator_base_funcs.h" 3
  template<typename _InputIterator, typename _Distance>
    inline void
    advance(_InputIterator& __i, _Distance __n)
    {

      typename iterator_traits<_InputIterator>::difference_type __d = __n;
      std::__advance(__i, __d, std::__iterator_category(__i));
    }
# 202 "/usr/include/c++/5/bits/stl_iterator_base_funcs.h" 3

}
# 67 "/usr/include/c++/5/bits/stl_algobase.h" 2 3
# 1 "/usr/include/c++/5/bits/stl_iterator.h" 1 3
# 66 "/usr/include/c++/5/bits/stl_iterator.h" 3
# 1 "/usr/include/c++/5/bits/ptr_traits.h" 1 3
# 67 "/usr/include/c++/5/bits/stl_iterator.h" 2 3

namespace std __attribute__ ((__visibility__ ("default")))
{

# 96 "/usr/include/c++/5/bits/stl_iterator.h" 3
  template<typename _Iterator>
    class reverse_iterator
    : public iterator<typename iterator_traits<_Iterator>::iterator_category,
        typename iterator_traits<_Iterator>::value_type,
        typename iterator_traits<_Iterator>::difference_type,
        typename iterator_traits<_Iterator>::pointer,
                      typename iterator_traits<_Iterator>::reference>
    {
    protected:
      _Iterator current;

      typedef iterator_traits<_Iterator> __traits_type;

    public:
      typedef _Iterator iterator_type;
      typedef typename __traits_type::difference_type difference_type;
      typedef typename __traits_type::pointer pointer;
      typedef typename __traits_type::reference reference;







      reverse_iterator() : current() { }




      explicit
      reverse_iterator(iterator_type __x) : current(__x) { }




      reverse_iterator(const reverse_iterator& __x)
      : current(__x.current) { }





      template<typename _Iter>
        reverse_iterator(const reverse_iterator<_Iter>& __x)
 : current(__x.base()) { }




      iterator_type
      base() const
      { return current; }
# 160 "/usr/include/c++/5/bits/stl_iterator.h" 3
      reference
      operator*() const
      {
 _Iterator __tmp = current;
 return *--__tmp;
      }






      pointer
      operator->() const
      { return &(operator*()); }






      reverse_iterator&
      operator++()
      {
 --current;
 return *this;
      }






      reverse_iterator
      operator++(int)
      {
 reverse_iterator __tmp = *this;
 --current;
 return __tmp;
      }






      reverse_iterator&
      operator--()
      {
 ++current;
 return *this;
      }






      reverse_iterator
      operator--(int)
      {
 reverse_iterator __tmp = *this;
 ++current;
 return __tmp;
      }






      reverse_iterator
      operator+(difference_type __n) const
      { return reverse_iterator(current - __n); }







      reverse_iterator&
      operator+=(difference_type __n)
      {
 current -= __n;
 return *this;
      }






      reverse_iterator
      operator-(difference_type __n) const
      { return reverse_iterator(current + __n); }







      reverse_iterator&
      operator-=(difference_type __n)
      {
 current += __n;
 return *this;
      }






      reference
      operator[](difference_type __n) const
      { return *(*this + __n); }
    };
# 290 "/usr/include/c++/5/bits/stl_iterator.h" 3
  template<typename _Iterator>
    inline bool
    operator==(const reverse_iterator<_Iterator>& __x,
        const reverse_iterator<_Iterator>& __y)
    { return __x.base() == __y.base(); }

  template<typename _Iterator>
    inline bool
    operator<(const reverse_iterator<_Iterator>& __x,
       const reverse_iterator<_Iterator>& __y)
    { return __y.base() < __x.base(); }

  template<typename _Iterator>
    inline bool
    operator!=(const reverse_iterator<_Iterator>& __x,
        const reverse_iterator<_Iterator>& __y)
    { return !(__x == __y); }

  template<typename _Iterator>
    inline bool
    operator>(const reverse_iterator<_Iterator>& __x,
       const reverse_iterator<_Iterator>& __y)
    { return __y < __x; }

  template<typename _Iterator>
    inline bool
    operator<=(const reverse_iterator<_Iterator>& __x,
        const reverse_iterator<_Iterator>& __y)
    { return !(__y < __x); }

  template<typename _Iterator>
    inline bool
    operator>=(const reverse_iterator<_Iterator>& __x,
        const reverse_iterator<_Iterator>& __y)
    { return !(__x < __y); }

  template<typename _Iterator>
    inline typename reverse_iterator<_Iterator>::difference_type
    operator-(const reverse_iterator<_Iterator>& __x,
       const reverse_iterator<_Iterator>& __y)
    { return __y.base() - __x.base(); }

  template<typename _Iterator>
    inline reverse_iterator<_Iterator>
    operator+(typename reverse_iterator<_Iterator>::difference_type __n,
       const reverse_iterator<_Iterator>& __x)
    { return reverse_iterator<_Iterator>(__x.base() - __n); }



  template<typename _IteratorL, typename _IteratorR>
    inline bool
    operator==(const reverse_iterator<_IteratorL>& __x,
        const reverse_iterator<_IteratorR>& __y)
    { return __x.base() == __y.base(); }

  template<typename _IteratorL, typename _IteratorR>
    inline bool
    operator<(const reverse_iterator<_IteratorL>& __x,
       const reverse_iterator<_IteratorR>& __y)
    { return __y.base() < __x.base(); }

  template<typename _IteratorL, typename _IteratorR>
    inline bool
    operator!=(const reverse_iterator<_IteratorL>& __x,
        const reverse_iterator<_IteratorR>& __y)
    { return !(__x == __y); }

  template<typename _IteratorL, typename _IteratorR>
    inline bool
    operator>(const reverse_iterator<_IteratorL>& __x,
       const reverse_iterator<_IteratorR>& __y)
    { return __y < __x; }

  template<typename _IteratorL, typename _IteratorR>
    inline bool
    operator<=(const reverse_iterator<_IteratorL>& __x,
        const reverse_iterator<_IteratorR>& __y)
    { return !(__y < __x); }

  template<typename _IteratorL, typename _IteratorR>
    inline bool
    operator>=(const reverse_iterator<_IteratorL>& __x,
        const reverse_iterator<_IteratorR>& __y)
    { return !(__x < __y); }

  template<typename _IteratorL, typename _IteratorR>







    inline typename reverse_iterator<_IteratorL>::difference_type
    operator-(const reverse_iterator<_IteratorL>& __x,
       const reverse_iterator<_IteratorR>& __y)

    { return __y.base() - __x.base(); }
# 414 "/usr/include/c++/5/bits/stl_iterator.h" 3
  template<typename _Container>
    class back_insert_iterator
    : public iterator<output_iterator_tag, void, void, void, void>
    {
    protected:
      _Container* container;

    public:

      typedef _Container container_type;


      explicit
      back_insert_iterator(_Container& __x) : container(&__x) { }
# 441 "/usr/include/c++/5/bits/stl_iterator.h" 3
      back_insert_iterator&
      operator=(typename _Container::const_reference __value)
      {
 container->push_back(__value);
 return *this;
      }
# 464 "/usr/include/c++/5/bits/stl_iterator.h" 3
      back_insert_iterator&
      operator*()
      { return *this; }


      back_insert_iterator&
      operator++()
      { return *this; }


      back_insert_iterator
      operator++(int)
      { return *this; }
    };
# 490 "/usr/include/c++/5/bits/stl_iterator.h" 3
  template<typename _Container>
    inline back_insert_iterator<_Container>
    back_inserter(_Container& __x)
    { return back_insert_iterator<_Container>(__x); }
# 505 "/usr/include/c++/5/bits/stl_iterator.h" 3
  template<typename _Container>
    class front_insert_iterator
    : public iterator<output_iterator_tag, void, void, void, void>
    {
    protected:
      _Container* container;

    public:

      typedef _Container container_type;


      explicit front_insert_iterator(_Container& __x) : container(&__x) { }
# 531 "/usr/include/c++/5/bits/stl_iterator.h" 3
      front_insert_iterator&
      operator=(typename _Container::const_reference __value)
      {
 container->push_front(__value);
 return *this;
      }
# 554 "/usr/include/c++/5/bits/stl_iterator.h" 3
      front_insert_iterator&
      operator*()
      { return *this; }


      front_insert_iterator&
      operator++()
      { return *this; }


      front_insert_iterator
      operator++(int)
      { return *this; }
    };
# 580 "/usr/include/c++/5/bits/stl_iterator.h" 3
  template<typename _Container>
    inline front_insert_iterator<_Container>
    front_inserter(_Container& __x)
    { return front_insert_iterator<_Container>(__x); }
# 599 "/usr/include/c++/5/bits/stl_iterator.h" 3
  template<typename _Container>
    class insert_iterator
    : public iterator<output_iterator_tag, void, void, void, void>
    {
    protected:
      _Container* container;
      typename _Container::iterator iter;

    public:

      typedef _Container container_type;





      insert_iterator(_Container& __x, typename _Container::iterator __i)
      : container(&__x), iter(__i) {}
# 642 "/usr/include/c++/5/bits/stl_iterator.h" 3
      insert_iterator&
      operator=(typename _Container::const_reference __value)
      {
 iter = container->insert(iter, __value);
 ++iter;
 return *this;
      }
# 668 "/usr/include/c++/5/bits/stl_iterator.h" 3
      insert_iterator&
      operator*()
      { return *this; }


      insert_iterator&
      operator++()
      { return *this; }


      insert_iterator&
      operator++(int)
      { return *this; }
    };
# 694 "/usr/include/c++/5/bits/stl_iterator.h" 3
  template<typename _Container, typename _Iterator>
    inline insert_iterator<_Container>
    inserter(_Container& __x, _Iterator __i)
    {
      return insert_iterator<_Container>(__x,
      typename _Container::iterator(__i));
    }




}

namespace __gnu_cxx __attribute__ ((__visibility__ ("default")))
{

# 718 "/usr/include/c++/5/bits/stl_iterator.h" 3
  using std::iterator_traits;
  using std::iterator;
  template<typename _Iterator, typename _Container>
    class __normal_iterator
    {
    protected:
      _Iterator _M_current;

      typedef iterator_traits<_Iterator> __traits_type;

    public:
      typedef _Iterator iterator_type;
      typedef typename __traits_type::iterator_category iterator_category;
      typedef typename __traits_type::value_type value_type;
      typedef typename __traits_type::difference_type difference_type;
      typedef typename __traits_type::reference reference;
      typedef typename __traits_type::pointer pointer;

      __normal_iterator()
      : _M_current(_Iterator()) { }

      explicit
      __normal_iterator(const _Iterator& __i)
      : _M_current(__i) { }


      template<typename _Iter>
        __normal_iterator(const __normal_iterator<_Iter,
     typename __enable_if<
              (std::__are_same<_Iter, typename _Container::pointer>::__value),
        _Container>::__type>& __i)
        : _M_current(__i.base()) { }


      reference
      operator*() const
      { return *_M_current; }

      pointer
      operator->() const
      { return _M_current; }

      __normal_iterator&
      operator++()
      {
 ++_M_current;
 return *this;
      }

      __normal_iterator
      operator++(int)
      { return __normal_iterator(_M_current++); }


      __normal_iterator&
      operator--()
      {
 --_M_current;
 return *this;
      }

      __normal_iterator
      operator--(int)
      { return __normal_iterator(_M_current--); }


      reference
      operator[](difference_type __n) const
      { return _M_current[__n]; }

      __normal_iterator&
      operator+=(difference_type __n)
      { _M_current += __n; return *this; }

      __normal_iterator
      operator+(difference_type __n) const
      { return __normal_iterator(_M_current + __n); }

      __normal_iterator&
      operator-=(difference_type __n)
      { _M_current -= __n; return *this; }

      __normal_iterator
      operator-(difference_type __n) const
      { return __normal_iterator(_M_current - __n); }

      const _Iterator&
      base() const
      { return _M_current; }
    };
# 818 "/usr/include/c++/5/bits/stl_iterator.h" 3
  template<typename _IteratorL, typename _IteratorR, typename _Container>
    inline bool
    operator==(const __normal_iterator<_IteratorL, _Container>& __lhs,
        const __normal_iterator<_IteratorR, _Container>& __rhs)
   
    { return __lhs.base() == __rhs.base(); }

  template<typename _Iterator, typename _Container>
    inline bool
    operator==(const __normal_iterator<_Iterator, _Container>& __lhs,
        const __normal_iterator<_Iterator, _Container>& __rhs)
   
    { return __lhs.base() == __rhs.base(); }

  template<typename _IteratorL, typename _IteratorR, typename _Container>
    inline bool
    operator!=(const __normal_iterator<_IteratorL, _Container>& __lhs,
        const __normal_iterator<_IteratorR, _Container>& __rhs)
   
    { return __lhs.base() != __rhs.base(); }

  template<typename _Iterator, typename _Container>
    inline bool
    operator!=(const __normal_iterator<_Iterator, _Container>& __lhs,
        const __normal_iterator<_Iterator, _Container>& __rhs)
   
    { return __lhs.base() != __rhs.base(); }


  template<typename _IteratorL, typename _IteratorR, typename _Container>
    inline bool
    operator<(const __normal_iterator<_IteratorL, _Container>& __lhs,
       const __normal_iterator<_IteratorR, _Container>& __rhs)
   
    { return __lhs.base() < __rhs.base(); }

  template<typename _Iterator, typename _Container>
    inline bool
    operator<(const __normal_iterator<_Iterator, _Container>& __lhs,
       const __normal_iterator<_Iterator, _Container>& __rhs)
   
    { return __lhs.base() < __rhs.base(); }

  template<typename _IteratorL, typename _IteratorR, typename _Container>
    inline bool
    operator>(const __normal_iterator<_IteratorL, _Container>& __lhs,
       const __normal_iterator<_IteratorR, _Container>& __rhs)
   
    { return __lhs.base() > __rhs.base(); }

  template<typename _Iterator, typename _Container>
    inline bool
    operator>(const __normal_iterator<_Iterator, _Container>& __lhs,
       const __normal_iterator<_Iterator, _Container>& __rhs)
   
    { return __lhs.base() > __rhs.base(); }

  template<typename _IteratorL, typename _IteratorR, typename _Container>
    inline bool
    operator<=(const __normal_iterator<_IteratorL, _Container>& __lhs,
        const __normal_iterator<_IteratorR, _Container>& __rhs)
   
    { return __lhs.base() <= __rhs.base(); }

  template<typename _Iterator, typename _Container>
    inline bool
    operator<=(const __normal_iterator<_Iterator, _Container>& __lhs,
        const __normal_iterator<_Iterator, _Container>& __rhs)
   
    { return __lhs.base() <= __rhs.base(); }

  template<typename _IteratorL, typename _IteratorR, typename _Container>
    inline bool
    operator>=(const __normal_iterator<_IteratorL, _Container>& __lhs,
        const __normal_iterator<_IteratorR, _Container>& __rhs)
   
    { return __lhs.base() >= __rhs.base(); }

  template<typename _Iterator, typename _Container>
    inline bool
    operator>=(const __normal_iterator<_Iterator, _Container>& __lhs,
        const __normal_iterator<_Iterator, _Container>& __rhs)
   
    { return __lhs.base() >= __rhs.base(); }





  template<typename _IteratorL, typename _IteratorR, typename _Container>







    inline typename __normal_iterator<_IteratorL, _Container>::difference_type
    operator-(const __normal_iterator<_IteratorL, _Container>& __lhs,
       const __normal_iterator<_IteratorR, _Container>& __rhs)

    { return __lhs.base() - __rhs.base(); }

  template<typename _Iterator, typename _Container>
    inline typename __normal_iterator<_Iterator, _Container>::difference_type
    operator-(const __normal_iterator<_Iterator, _Container>& __lhs,
       const __normal_iterator<_Iterator, _Container>& __rhs)
   
    { return __lhs.base() - __rhs.base(); }

  template<typename _Iterator, typename _Container>
    inline __normal_iterator<_Iterator, _Container>
    operator+(typename __normal_iterator<_Iterator, _Container>::difference_type
       __n, const __normal_iterator<_Iterator, _Container>& __i)
   
    { return __normal_iterator<_Iterator, _Container>(__i.base() + __n); }


}
# 68 "/usr/include/c++/5/bits/stl_algobase.h" 2 3



# 1 "/usr/include/c++/5/bits/predefined_ops.h" 1 3
# 33 "/usr/include/c++/5/bits/predefined_ops.h" 3
namespace __gnu_cxx
{
namespace __ops
{
  struct _Iter_less_iter
  {
    template<typename _Iterator1, typename _Iterator2>
     
      bool
      operator()(_Iterator1 __it1, _Iterator2 __it2) const
      { return *__it1 < *__it2; }
  };
 
  inline _Iter_less_iter
  __iter_less_iter()
  { return _Iter_less_iter(); }

  struct _Iter_less_val
  {
    template<typename _Iterator, typename _Value>
      bool
      operator()(_Iterator __it, _Value& __val) const
      { return *__it < __val; }
    };

  inline _Iter_less_val
  __iter_less_val()
  { return _Iter_less_val(); }

  inline _Iter_less_val
  __iter_comp_val(_Iter_less_iter)
  { return _Iter_less_val(); }

  struct _Val_less_iter
  {
    template<typename _Value, typename _Iterator>
      bool
      operator()(_Value& __val, _Iterator __it) const
      { return __val < *__it; }
    };

  inline _Val_less_iter
  __val_less_iter()
  { return _Val_less_iter(); }

  inline _Val_less_iter
  __val_comp_iter(_Iter_less_iter)
  { return _Val_less_iter(); }

  struct _Iter_equal_to_iter
  {
    template<typename _Iterator1, typename _Iterator2>
      bool
      operator()(_Iterator1 __it1, _Iterator2 __it2) const
      { return *__it1 == *__it2; }
    };

  inline _Iter_equal_to_iter
  __iter_equal_to_iter()
  { return _Iter_equal_to_iter(); }

  struct _Iter_equal_to_val
  {
    template<typename _Iterator, typename _Value>
      bool
      operator()(_Iterator __it, _Value& __val) const
      { return *__it == __val; }
    };

  inline _Iter_equal_to_val
  __iter_equal_to_val()
  { return _Iter_equal_to_val(); }

  inline _Iter_equal_to_val
  __iter_comp_val(_Iter_equal_to_iter)
  { return _Iter_equal_to_val(); }

  template<typename _Compare>
    struct _Iter_comp_iter
    {
      _Compare _M_comp;
     
      _Iter_comp_iter(_Compare __comp)
 : _M_comp(__comp)
      { }

      template<typename _Iterator1, typename _Iterator2>
       
        bool
        operator()(_Iterator1 __it1, _Iterator2 __it2)
        { return bool(_M_comp(*__it1, *__it2)); }
    };

  template<typename _Compare>
   
    inline _Iter_comp_iter<_Compare>
    __iter_comp_iter(_Compare __comp)
    { return _Iter_comp_iter<_Compare>(__comp); }

  template<typename _Compare>
    struct _Iter_comp_val
    {
      _Compare _M_comp;

      _Iter_comp_val(_Compare __comp)
 : _M_comp(__comp)
      { }

      template<typename _Iterator, typename _Value>
 bool
 operator()(_Iterator __it, _Value& __val)
 { return bool(_M_comp(*__it, __val)); }
    };

  template<typename _Compare>
   inline _Iter_comp_val<_Compare>
    __iter_comp_val(_Compare __comp)
    { return _Iter_comp_val<_Compare>(__comp); }

  template<typename _Compare>
    inline _Iter_comp_val<_Compare>
    __iter_comp_val(_Iter_comp_iter<_Compare> __comp)
    { return _Iter_comp_val<_Compare>(__comp._M_comp); }

  template<typename _Compare>
    struct _Val_comp_iter
    {
      _Compare _M_comp;

      _Val_comp_iter(_Compare __comp)
 : _M_comp(__comp)
      { }

      template<typename _Value, typename _Iterator>
 bool
 operator()(_Value& __val, _Iterator __it)
 { return bool(_M_comp(__val, *__it)); }
    };

  template<typename _Compare>
    inline _Val_comp_iter<_Compare>
    __val_comp_iter(_Compare __comp)
    { return _Val_comp_iter<_Compare>(__comp); }

  template<typename _Compare>
    inline _Val_comp_iter<_Compare>
    __val_comp_iter(_Iter_comp_iter<_Compare> __comp)
    { return _Val_comp_iter<_Compare>(__comp._M_comp); }

  template<typename _Value>
    struct _Iter_equals_val
    {
      _Value& _M_value;

      _Iter_equals_val(_Value& __value)
 : _M_value(__value)
      { }

      template<typename _Iterator>
 bool
 operator()(_Iterator __it)
 { return *__it == _M_value; }
    };

  template<typename _Value>
    inline _Iter_equals_val<_Value>
    __iter_equals_val(_Value& __val)
    { return _Iter_equals_val<_Value>(__val); }

  template<typename _Iterator1>
    struct _Iter_equals_iter
    {
      typename std::iterator_traits<_Iterator1>::reference _M_ref;

      _Iter_equals_iter(_Iterator1 __it1)
 : _M_ref(*__it1)
      { }

      template<typename _Iterator2>
 bool
 operator()(_Iterator2 __it2)
 { return *__it2 == _M_ref; }
    };

  template<typename _Iterator>
    inline _Iter_equals_iter<_Iterator>
    __iter_comp_iter(_Iter_equal_to_iter, _Iterator __it)
    { return _Iter_equals_iter<_Iterator>(__it); }

  template<typename _Predicate>
    struct _Iter_pred
    {
      _Predicate _M_pred;

      _Iter_pred(_Predicate __pred)
 : _M_pred(__pred)
      { }

      template<typename _Iterator>
 bool
 operator()(_Iterator __it)
 { return bool(_M_pred(*__it)); }
    };

  template<typename _Predicate>
    inline _Iter_pred<_Predicate>
    __pred_iter(_Predicate __pred)
    { return _Iter_pred<_Predicate>(__pred); }

  template<typename _Compare, typename _Value>
    struct _Iter_comp_to_val
    {
      _Compare _M_comp;
      _Value& _M_value;

      _Iter_comp_to_val(_Compare __comp, _Value& __value)
 : _M_comp(__comp), _M_value(__value)
      { }

      template<typename _Iterator>
 bool
 operator()(_Iterator __it)
 { return bool(_M_comp(*__it, _M_value)); }
    };

  template<typename _Compare, typename _Value>
    _Iter_comp_to_val<_Compare, _Value>
    __iter_comp_val(_Compare __comp, _Value &__val)
    { return _Iter_comp_to_val<_Compare, _Value>(__comp, __val); }

  template<typename _Compare, typename _Iterator1>
    struct _Iter_comp_to_iter
    {
      _Compare _M_comp;
      typename std::iterator_traits<_Iterator1>::reference _M_ref;

      _Iter_comp_to_iter(_Compare __comp, _Iterator1 __it1)
 : _M_comp(__comp), _M_ref(*__it1)
      { }

      template<typename _Iterator2>
 bool
 operator()(_Iterator2 __it2)
 { return bool(_M_comp(*__it2, _M_ref)); }
    };

  template<typename _Compare, typename _Iterator>
    inline _Iter_comp_to_iter<_Compare, _Iterator>
    __iter_comp_iter(_Iter_comp_iter<_Compare> __comp, _Iterator __it)
    { return _Iter_comp_to_iter<_Compare, _Iterator>(__comp._M_comp, __it); }

  template<typename _Predicate>
    struct _Iter_negate
    {
      _Predicate _M_pred;

      _Iter_negate(_Predicate __pred)
 : _M_pred(__pred)
      { }

      template<typename _Iterator>
 bool
 operator()(_Iterator __it)
 { return !bool(_M_pred(*__it)); }
    };

  template<typename _Predicate>
    inline _Iter_negate<_Predicate>
    __negate(_Iter_pred<_Predicate> __pred)
    { return _Iter_negate<_Predicate>(__pred._M_pred); }

}
}
# 72 "/usr/include/c++/5/bits/stl_algobase.h" 2 3

namespace std __attribute__ ((__visibility__ ("default")))
{






  template<bool _BoolType>
    struct __iter_swap
    {
      template<typename _ForwardIterator1, typename _ForwardIterator2>
        static void
        iter_swap(_ForwardIterator1 __a, _ForwardIterator2 __b)
        {
          typedef typename iterator_traits<_ForwardIterator1>::value_type
            _ValueType1;
          _ValueType1 __tmp = (*__a);
          *__a = (*__b);
          *__b = (__tmp);
 }
    };

  template<>
    struct __iter_swap<true>
    {
      template<typename _ForwardIterator1, typename _ForwardIterator2>
        static void
        iter_swap(_ForwardIterator1 __a, _ForwardIterator2 __b)
        {
          swap(*__a, *__b);
        }
    };
# 118 "/usr/include/c++/5/bits/stl_algobase.h" 3
  template<typename _ForwardIterator1, typename _ForwardIterator2>
    inline void
    iter_swap(_ForwardIterator1 __a, _ForwardIterator2 __b)
    {

     

     



      typedef typename iterator_traits<_ForwardIterator1>::value_type
 _ValueType1;
      typedef typename iterator_traits<_ForwardIterator2>::value_type
 _ValueType2;

     

     


      typedef typename iterator_traits<_ForwardIterator1>::reference
 _ReferenceType1;
      typedef typename iterator_traits<_ForwardIterator2>::reference
 _ReferenceType2;
      std::__iter_swap<__are_same<_ValueType1, _ValueType2>::__value
 && __are_same<_ValueType1&, _ReferenceType1>::__value
 && __are_same<_ValueType2&, _ReferenceType2>::__value>::
 iter_swap(__a, __b);



    }
# 164 "/usr/include/c++/5/bits/stl_algobase.h" 3
  template<typename _ForwardIterator1, typename _ForwardIterator2>
    _ForwardIterator2
    swap_ranges(_ForwardIterator1 __first1, _ForwardIterator1 __last1,
  _ForwardIterator2 __first2)
    {

     

     

      ;

      for (; __first1 != __last1; ++__first1, ++__first2)
 std::iter_swap(__first1, __first2);
      return __first2;
    }
# 192 "/usr/include/c++/5/bits/stl_algobase.h" 3
  template<typename _Tp>
   
    inline const _Tp&
    min(const _Tp& __a, const _Tp& __b)
    {

     

      if (__b < __a)
 return __b;
      return __a;
    }
# 216 "/usr/include/c++/5/bits/stl_algobase.h" 3
  template<typename _Tp>
   
    inline const _Tp&
    max(const _Tp& __a, const _Tp& __b)
    {

     

      if (__a < __b)
 return __b;
      return __a;
    }
# 240 "/usr/include/c++/5/bits/stl_algobase.h" 3
  template<typename _Tp, typename _Compare>
   
    inline const _Tp&
    min(const _Tp& __a, const _Tp& __b, _Compare __comp)
    {

      if (__comp(__b, __a))
 return __b;
      return __a;
    }
# 262 "/usr/include/c++/5/bits/stl_algobase.h" 3
  template<typename _Tp, typename _Compare>
   
    inline const _Tp&
    max(const _Tp& __a, const _Tp& __b, _Compare __comp)
    {

      if (__comp(__a, __b))
 return __b;
      return __a;
    }



  template<typename _Iterator>
    struct _Niter_base
    : _Iter_base<_Iterator, __is_normal_iterator<_Iterator>::__value>
    { };

  template<typename _Iterator>
    inline typename _Niter_base<_Iterator>::iterator_type
    __niter_base(_Iterator __it)
    { return std::_Niter_base<_Iterator>::_S_base(__it); }


  template<typename _Iterator>
    struct _Miter_base
    : _Iter_base<_Iterator, __is_move_iterator<_Iterator>::__value>
    { };

  template<typename _Iterator>
    inline typename _Miter_base<_Iterator>::iterator_type
    __miter_base(_Iterator __it)
    { return std::_Miter_base<_Iterator>::_S_base(__it); }







  template<bool, bool, typename>
    struct __copy_move
    {
      template<typename _II, typename _OI>
        static _OI
        __copy_m(_II __first, _II __last, _OI __result)
        {
   for (; __first != __last; ++__result, ++__first)
     *__result = *__first;
   return __result;
 }
    };
# 330 "/usr/include/c++/5/bits/stl_algobase.h" 3
  template<>
    struct __copy_move<false, false, random_access_iterator_tag>
    {
      template<typename _II, typename _OI>
        static _OI
        __copy_m(_II __first, _II __last, _OI __result)
        {
   typedef typename iterator_traits<_II>::difference_type _Distance;
   for(_Distance __n = __last - __first; __n > 0; --__n)
     {
       *__result = *__first;
       ++__first;
       ++__result;
     }
   return __result;
 }
    };
# 368 "/usr/include/c++/5/bits/stl_algobase.h" 3
  template<bool _IsMove>
    struct __copy_move<_IsMove, true, random_access_iterator_tag>
    {
      template<typename _Tp>
        static _Tp*
        __copy_m(const _Tp* __first, const _Tp* __last, _Tp* __result)
        {







   const ptrdiff_t _Num = __last - __first;
   if (_Num)
     __builtin_memmove(__result, __first, sizeof(_Tp) * _Num);
   return __result + _Num;
 }
    };

  template<bool _IsMove, typename _II, typename _OI>
    inline _OI
    __copy_move_a(_II __first, _II __last, _OI __result)
    {
      typedef typename iterator_traits<_II>::value_type _ValueTypeI;
      typedef typename iterator_traits<_OI>::value_type _ValueTypeO;
      typedef typename iterator_traits<_II>::iterator_category _Category;
      const bool __simple = (__is_trivial(_ValueTypeI)
                      && __is_pointer<_II>::__value
                      && __is_pointer<_OI>::__value
        && __are_same<_ValueTypeI, _ValueTypeO>::__value);

      return std::__copy_move<_IsMove, __simple,
                       _Category>::__copy_m(__first, __last, __result);
    }



  template<typename _CharT>
    struct char_traits;

  template<typename _CharT, typename _Traits>
    class istreambuf_iterator;

  template<typename _CharT, typename _Traits>
    class ostreambuf_iterator;

  template<bool _IsMove, typename _CharT>
    typename __gnu_cxx::__enable_if<__is_char<_CharT>::__value,
      ostreambuf_iterator<_CharT, char_traits<_CharT> > >::__type
    __copy_move_a2(_CharT*, _CharT*,
     ostreambuf_iterator<_CharT, char_traits<_CharT> >);

  template<bool _IsMove, typename _CharT>
    typename __gnu_cxx::__enable_if<__is_char<_CharT>::__value,
      ostreambuf_iterator<_CharT, char_traits<_CharT> > >::__type
    __copy_move_a2(const _CharT*, const _CharT*,
     ostreambuf_iterator<_CharT, char_traits<_CharT> >);

  template<bool _IsMove, typename _CharT>
    typename __gnu_cxx::__enable_if<__is_char<_CharT>::__value,
        _CharT*>::__type
    __copy_move_a2(istreambuf_iterator<_CharT, char_traits<_CharT> >,
     istreambuf_iterator<_CharT, char_traits<_CharT> >, _CharT*);

  template<bool _IsMove, typename _II, typename _OI>
    inline _OI
    __copy_move_a2(_II __first, _II __last, _OI __result)
    {
      return _OI(std::__copy_move_a<_IsMove>(std::__niter_base(__first),
          std::__niter_base(__last),
          std::__niter_base(__result)));
    }
# 460 "/usr/include/c++/5/bits/stl_algobase.h" 3
  template<typename _II, typename _OI>
    inline _OI
    copy(_II __first, _II __last, _OI __result)
    {

     
     

      ;

      return (std::__copy_move_a2<__is_move_iterator<_II>::__value>
       (std::__miter_base(__first), std::__miter_base(__last),
        __result));
    }
# 512 "/usr/include/c++/5/bits/stl_algobase.h" 3
  template<bool, bool, typename>
    struct __copy_move_backward
    {
      template<typename _BI1, typename _BI2>
        static _BI2
        __copy_move_b(_BI1 __first, _BI1 __last, _BI2 __result)
        {
   while (__first != __last)
     *--__result = *--__last;
   return __result;
 }
    };
# 540 "/usr/include/c++/5/bits/stl_algobase.h" 3
  template<>
    struct __copy_move_backward<false, false, random_access_iterator_tag>
    {
      template<typename _BI1, typename _BI2>
        static _BI2
        __copy_move_b(_BI1 __first, _BI1 __last, _BI2 __result)
        {
   typename iterator_traits<_BI1>::difference_type __n;
   for (__n = __last - __first; __n > 0; --__n)
     *--__result = *--__last;
   return __result;
 }
    };
# 570 "/usr/include/c++/5/bits/stl_algobase.h" 3
  template<bool _IsMove>
    struct __copy_move_backward<_IsMove, true, random_access_iterator_tag>
    {
      template<typename _Tp>
        static _Tp*
        __copy_move_b(const _Tp* __first, const _Tp* __last, _Tp* __result)
        {







   const ptrdiff_t _Num = __last - __first;
   if (_Num)
     __builtin_memmove(__result - _Num, __first, sizeof(_Tp) * _Num);
   return __result - _Num;
 }
    };

  template<bool _IsMove, typename _BI1, typename _BI2>
    inline _BI2
    __copy_move_backward_a(_BI1 __first, _BI1 __last, _BI2 __result)
    {
      typedef typename iterator_traits<_BI1>::value_type _ValueType1;
      typedef typename iterator_traits<_BI2>::value_type _ValueType2;
      typedef typename iterator_traits<_BI1>::iterator_category _Category;
      const bool __simple = (__is_trivial(_ValueType1)
                      && __is_pointer<_BI1>::__value
                      && __is_pointer<_BI2>::__value
        && __are_same<_ValueType1, _ValueType2>::__value);

      return std::__copy_move_backward<_IsMove, __simple,
                                _Category>::__copy_move_b(__first,
         __last,
         __result);
    }

  template<bool _IsMove, typename _BI1, typename _BI2>
    inline _BI2
    __copy_move_backward_a2(_BI1 __first, _BI1 __last, _BI2 __result)
    {
      return _BI2(std::__copy_move_backward_a<_IsMove>
    (std::__niter_base(__first), std::__niter_base(__last),
     std::__niter_base(__result)));
    }
# 636 "/usr/include/c++/5/bits/stl_algobase.h" 3
  template<typename _BI1, typename _BI2>
    inline _BI2
    copy_backward(_BI1 __first, _BI1 __last, _BI2 __result)
    {

     
     
     


      ;

      return (std::__copy_move_backward_a2<__is_move_iterator<_BI1>::__value>
       (std::__miter_base(__first), std::__miter_base(__last),
        __result));
    }
# 694 "/usr/include/c++/5/bits/stl_algobase.h" 3
  template<typename _ForwardIterator, typename _Tp>
    inline typename
    __gnu_cxx::__enable_if<!__is_scalar<_Tp>::__value, void>::__type
    __fill_a(_ForwardIterator __first, _ForwardIterator __last,
       const _Tp& __value)
    {
      for (; __first != __last; ++__first)
 *__first = __value;
    }

  template<typename _ForwardIterator, typename _Tp>
    inline typename
    __gnu_cxx::__enable_if<__is_scalar<_Tp>::__value, void>::__type
    __fill_a(_ForwardIterator __first, _ForwardIterator __last,
      const _Tp& __value)
    {
      const _Tp __tmp = __value;
      for (; __first != __last; ++__first)
 *__first = __tmp;
    }


  template<typename _Tp>
    inline typename
    __gnu_cxx::__enable_if<__is_byte<_Tp>::__value, void>::__type
    __fill_a(_Tp* __first, _Tp* __last, const _Tp& __c)
    {
      const _Tp __tmp = __c;
      if (const size_t __len = __last - __first)
 __builtin_memset(__first, static_cast<unsigned char>(__tmp), __len);
    }
# 738 "/usr/include/c++/5/bits/stl_algobase.h" 3
  template<typename _ForwardIterator, typename _Tp>
    inline void
    fill(_ForwardIterator __first, _ForwardIterator __last, const _Tp& __value)
    {

     

      ;

      std::__fill_a(std::__niter_base(__first), std::__niter_base(__last),
      __value);
    }

  template<typename _OutputIterator, typename _Size, typename _Tp>
    inline typename
    __gnu_cxx::__enable_if<!__is_scalar<_Tp>::__value, _OutputIterator>::__type
    __fill_n_a(_OutputIterator __first, _Size __n, const _Tp& __value)
    {
      for (__decltype(__n + 0) __niter = __n;
    __niter > 0; --__niter, ++__first)
 *__first = __value;
      return __first;
    }

  template<typename _OutputIterator, typename _Size, typename _Tp>
    inline typename
    __gnu_cxx::__enable_if<__is_scalar<_Tp>::__value, _OutputIterator>::__type
    __fill_n_a(_OutputIterator __first, _Size __n, const _Tp& __value)
    {
      const _Tp __tmp = __value;
      for (__decltype(__n + 0) __niter = __n;
    __niter > 0; --__niter, ++__first)
 *__first = __tmp;
      return __first;
    }

  template<typename _Size, typename _Tp>
    inline typename
    __gnu_cxx::__enable_if<__is_byte<_Tp>::__value, _Tp*>::__type
    __fill_n_a(_Tp* __first, _Size __n, const _Tp& __c)
    {
      std::__fill_a(__first, __first + __n, __c);
      return __first + __n;
    }
# 798 "/usr/include/c++/5/bits/stl_algobase.h" 3
  template<typename _OI, typename _Size, typename _Tp>
    inline _OI
    fill_n(_OI __first, _Size __n, const _Tp& __value)
    {

     

      return _OI(std::__fill_n_a(std::__niter_base(__first), __n, __value));
    }

  template<bool _BoolType>
    struct __equal
    {
      template<typename _II1, typename _II2>
        static bool
        equal(_II1 __first1, _II1 __last1, _II2 __first2)
        {
   for (; __first1 != __last1; ++__first1, ++__first2)
     if (!(*__first1 == *__first2))
       return false;
   return true;
 }
    };

  template<>
    struct __equal<true>
    {
      template<typename _Tp>
        static bool
        equal(const _Tp* __first1, const _Tp* __last1, const _Tp* __first2)
        {
   if (const size_t __len = (__last1 - __first1))
     return !__builtin_memcmp(__first1, __first2, sizeof(_Tp) * __len);
   return true;
 }
    };

  template<typename _II1, typename _II2>
    inline bool
    __equal_aux(_II1 __first1, _II1 __last1, _II2 __first2)
    {
      typedef typename iterator_traits<_II1>::value_type _ValueType1;
      typedef typename iterator_traits<_II2>::value_type _ValueType2;
      const bool __simple = ((__is_integer<_ValueType1>::__value
         || __is_pointer<_ValueType1>::__value)
                      && __is_pointer<_II1>::__value
                      && __is_pointer<_II2>::__value
        && __are_same<_ValueType1, _ValueType2>::__value);

      return std::__equal<__simple>::equal(__first1, __last1, __first2);
    }

  template<typename, typename>
    struct __lc_rai
    {
      template<typename _II1, typename _II2>
        static _II1
        __newlast1(_II1, _II1 __last1, _II2, _II2)
        { return __last1; }

      template<typename _II>
        static bool
        __cnd2(_II __first, _II __last)
        { return __first != __last; }
    };

  template<>
    struct __lc_rai<random_access_iterator_tag, random_access_iterator_tag>
    {
      template<typename _RAI1, typename _RAI2>
        static _RAI1
        __newlast1(_RAI1 __first1, _RAI1 __last1,
     _RAI2 __first2, _RAI2 __last2)
        {
   const typename iterator_traits<_RAI1>::difference_type
     __diff1 = __last1 - __first1;
   const typename iterator_traits<_RAI2>::difference_type
     __diff2 = __last2 - __first2;
   return __diff2 < __diff1 ? __first1 + __diff2 : __last1;
 }

      template<typename _RAI>
        static bool
        __cnd2(_RAI, _RAI)
        { return true; }
    };

  template<typename _II1, typename _II2, typename _Compare>
    bool
    __lexicographical_compare_impl(_II1 __first1, _II1 __last1,
       _II2 __first2, _II2 __last2,
       _Compare __comp)
    {
      typedef typename iterator_traits<_II1>::iterator_category _Category1;
      typedef typename iterator_traits<_II2>::iterator_category _Category2;
      typedef std::__lc_rai<_Category1, _Category2> __rai_type;

      __last1 = __rai_type::__newlast1(__first1, __last1, __first2, __last2);
      for (; __first1 != __last1 && __rai_type::__cnd2(__first2, __last2);
    ++__first1, ++__first2)
 {
   if (__comp(__first1, __first2))
     return true;
   if (__comp(__first2, __first1))
     return false;
 }
      return __first1 == __last1 && __first2 != __last2;
    }

  template<bool _BoolType>
    struct __lexicographical_compare
    {
      template<typename _II1, typename _II2>
        static bool __lc(_II1, _II1, _II2, _II2);
    };

  template<bool _BoolType>
    template<typename _II1, typename _II2>
      bool
      __lexicographical_compare<_BoolType>::
      __lc(_II1 __first1, _II1 __last1, _II2 __first2, _II2 __last2)
      {
 return std::__lexicographical_compare_impl(__first1, __last1,
         __first2, __last2,
     __gnu_cxx::__ops::__iter_less_iter());
      }

  template<>
    struct __lexicographical_compare<true>
    {
      template<typename _Tp, typename _Up>
        static bool
        __lc(const _Tp* __first1, const _Tp* __last1,
      const _Up* __first2, const _Up* __last2)
 {
   const size_t __len1 = __last1 - __first1;
   const size_t __len2 = __last2 - __first2;
   if (const size_t __len = std::min(__len1, __len2))
     if (int __result = __builtin_memcmp(__first1, __first2, __len))
       return __result < 0;
   return __len1 < __len2;
 }
    };

  template<typename _II1, typename _II2>
    inline bool
    __lexicographical_compare_aux(_II1 __first1, _II1 __last1,
      _II2 __first2, _II2 __last2)
    {
      typedef typename iterator_traits<_II1>::value_type _ValueType1;
      typedef typename iterator_traits<_II2>::value_type _ValueType2;
      const bool __simple =
 (__is_byte<_ValueType1>::__value && __is_byte<_ValueType2>::__value
  && !__gnu_cxx::__numeric_traits<_ValueType1>::__is_signed
  && !__gnu_cxx::__numeric_traits<_ValueType2>::__is_signed
  && __is_pointer<_II1>::__value
  && __is_pointer<_II2>::__value);

      return std::__lexicographical_compare<__simple>::__lc(__first1, __last1,
           __first2, __last2);
    }

  template<typename _ForwardIterator, typename _Tp, typename _Compare>
    _ForwardIterator
    __lower_bound(_ForwardIterator __first, _ForwardIterator __last,
    const _Tp& __val, _Compare __comp)
    {
      typedef typename iterator_traits<_ForwardIterator>::difference_type
 _DistanceType;

      _DistanceType __len = std::distance(__first, __last);

      while (__len > 0)
 {
   _DistanceType __half = __len >> 1;
   _ForwardIterator __middle = __first;
   std::advance(__middle, __half);
   if (__comp(__middle, __val))
     {
       __first = __middle;
       ++__first;
       __len = __len - __half - 1;
     }
   else
     __len = __half;
 }
      return __first;
    }
# 998 "/usr/include/c++/5/bits/stl_algobase.h" 3
  template<typename _ForwardIterator, typename _Tp>
    inline _ForwardIterator
    lower_bound(_ForwardIterator __first, _ForwardIterator __last,
  const _Tp& __val)
    {

     
     

      ;

      return std::__lower_bound(__first, __last, __val,
    __gnu_cxx::__ops::__iter_less_val());
    }



  inline int
  __lg(int __n)
  { return sizeof(int) * 8 - 1 - __builtin_clz(__n); }

  inline unsigned
  __lg(unsigned __n)
  { return sizeof(int) * 8 - 1 - __builtin_clz(__n); }

  inline long
  __lg(long __n)
  { return sizeof(long) * 8 - 1 - __builtin_clzl(__n); }

  inline unsigned long
  __lg(unsigned long __n)
  { return sizeof(long) * 8 - 1 - __builtin_clzl(__n); }

  inline long long
  __lg(long long __n)
  { return sizeof(long long) * 8 - 1 - __builtin_clzll(__n); }

  inline unsigned long long
  __lg(unsigned long long __n)
  { return sizeof(long long) * 8 - 1 - __builtin_clzll(__n); }




# 1055 "/usr/include/c++/5/bits/stl_algobase.h" 3
  template<typename _II1, typename _II2>
    inline bool
    equal(_II1 __first1, _II1 __last1, _II2 __first2)
    {

     
     
     


      ;

      return std::__equal_aux(std::__niter_base(__first1),
         std::__niter_base(__last1),
         std::__niter_base(__first2));
    }
# 1087 "/usr/include/c++/5/bits/stl_algobase.h" 3
  template<typename _IIter1, typename _IIter2, typename _BinaryPredicate>
    inline bool
    equal(_IIter1 __first1, _IIter1 __last1,
   _IIter2 __first2, _BinaryPredicate __binary_pred)
    {

     
     
      ;

      for (; __first1 != __last1; ++__first1, ++__first2)
 if (!bool(__binary_pred(*__first1, *__first2)))
   return false;
      return true;
    }
# 1215 "/usr/include/c++/5/bits/stl_algobase.h" 3
  template<typename _II1, typename _II2>
    inline bool
    lexicographical_compare(_II1 __first1, _II1 __last1,
       _II2 __first2, _II2 __last2)
    {





     
     
     
     
      ;
      ;

      return std::__lexicographical_compare_aux(std::__niter_base(__first1),
      std::__niter_base(__last1),
      std::__niter_base(__first2),
      std::__niter_base(__last2));
    }
# 1251 "/usr/include/c++/5/bits/stl_algobase.h" 3
  template<typename _II1, typename _II2, typename _Compare>
    inline bool
    lexicographical_compare(_II1 __first1, _II1 __last1,
       _II2 __first2, _II2 __last2, _Compare __comp)
    {

     
     
      ;
      ;

      return std::__lexicographical_compare_impl
 (__first1, __last1, __first2, __last2,
  __gnu_cxx::__ops::__iter_comp_iter(__comp));
    }

  template<typename _InputIterator1, typename _InputIterator2,
    typename _BinaryPredicate>
    pair<_InputIterator1, _InputIterator2>
    __mismatch(_InputIterator1 __first1, _InputIterator1 __last1,
        _InputIterator2 __first2, _BinaryPredicate __binary_pred)
    {
      while (__first1 != __last1 && __binary_pred(__first1, __first2))
        {
   ++__first1;
   ++__first2;
        }
      return pair<_InputIterator1, _InputIterator2>(__first1, __first2);
    }
# 1294 "/usr/include/c++/5/bits/stl_algobase.h" 3
  template<typename _InputIterator1, typename _InputIterator2>
    inline pair<_InputIterator1, _InputIterator2>
    mismatch(_InputIterator1 __first1, _InputIterator1 __last1,
      _InputIterator2 __first2)
    {

     
     
     


      ;

      return std::__mismatch(__first1, __last1, __first2,
        __gnu_cxx::__ops::__iter_equal_to_iter());
    }
# 1327 "/usr/include/c++/5/bits/stl_algobase.h" 3
  template<typename _InputIterator1, typename _InputIterator2,
    typename _BinaryPredicate>
    inline pair<_InputIterator1, _InputIterator2>
    mismatch(_InputIterator1 __first1, _InputIterator1 __last1,
      _InputIterator2 __first2, _BinaryPredicate __binary_pred)
    {

     
     
      ;

      return std::__mismatch(__first1, __last1, __first2,
 __gnu_cxx::__ops::__iter_comp_iter(__binary_pred));
    }
# 1427 "/usr/include/c++/5/bits/stl_algobase.h" 3

}
# 40 "/usr/include/c++/5/bits/char_traits.h" 2 3
# 1 "/usr/include/c++/5/bits/postypes.h" 1 3
# 38 "/usr/include/c++/5/bits/postypes.h" 3
       
# 39 "/usr/include/c++/5/bits/postypes.h" 3

# 1 "/usr/include/c++/5/cwchar" 1 3
# 39 "/usr/include/c++/5/cwchar" 3
       
# 40 "/usr/include/c++/5/cwchar" 3




# 1 "/usr/include/wchar.h" 1 3 4
# 45 "/usr/include/c++/5/cwchar" 2 3
# 62 "/usr/include/c++/5/cwchar" 3
namespace std
{
  using ::mbstate_t;
}
# 135 "/usr/include/c++/5/cwchar" 3
namespace std __attribute__ ((__visibility__ ("default")))
{


  using ::wint_t;

  using ::btowc;
  using ::fgetwc;
  using ::fgetws;
  using ::fputwc;
  using ::fputws;
  using ::fwide;
  using ::fwprintf;
  using ::fwscanf;
  using ::getwc;
  using ::getwchar;
  using ::mbrlen;
  using ::mbrtowc;
  using ::mbsinit;
  using ::mbsrtowcs;
  using ::putwc;
  using ::putwchar;

  using ::swprintf;

  using ::swscanf;
  using ::ungetwc;
  using ::vfwprintf;

  using ::vfwscanf;


  using ::vswprintf;


  using ::vswscanf;

  using ::vwprintf;

  using ::vwscanf;

  using ::wcrtomb;
  using ::wcscat;
  using ::wcscmp;
  using ::wcscoll;
  using ::wcscpy;
  using ::wcscspn;
  using ::wcsftime;
  using ::wcslen;
  using ::wcsncat;
  using ::wcsncmp;
  using ::wcsncpy;
  using ::wcsrtombs;
  using ::wcsspn;
  using ::wcstod;

  using ::wcstof;

  using ::wcstok;
  using ::wcstol;
  using ::wcstoul;
  using ::wcsxfrm;
  using ::wctob;
  using ::wmemcmp;
  using ::wmemcpy;
  using ::wmemmove;
  using ::wmemset;
  using ::wprintf;
  using ::wscanf;
  using ::wcschr;
  using ::wcspbrk;
  using ::wcsrchr;
  using ::wcsstr;
  using ::wmemchr;
# 232 "/usr/include/c++/5/cwchar" 3

}







namespace __gnu_cxx
{





  using ::wcstold;
# 257 "/usr/include/c++/5/cwchar" 3
  using ::wcstoll;
  using ::wcstoull;

}

namespace std
{
  using ::__gnu_cxx::wcstold;
  using ::__gnu_cxx::wcstoll;
  using ::__gnu_cxx::wcstoull;
}
# 41 "/usr/include/c++/5/bits/postypes.h" 2 3
# 68 "/usr/include/c++/5/bits/postypes.h" 3
namespace std __attribute__ ((__visibility__ ("default")))
{

# 88 "/usr/include/c++/5/bits/postypes.h" 3
  typedef long streamoff;
# 98 "/usr/include/c++/5/bits/postypes.h" 3
  typedef ptrdiff_t streamsize;
# 111 "/usr/include/c++/5/bits/postypes.h" 3
  template<typename _StateT>
    class fpos
    {
    private:
      streamoff _M_off;
      _StateT _M_state;

    public:




      fpos()
      : _M_off(0), _M_state() { }
# 133 "/usr/include/c++/5/bits/postypes.h" 3
      fpos(streamoff __off)
      : _M_off(__off), _M_state() { }


      operator streamoff() const { return _M_off; }


      void
      state(_StateT __st)
      { _M_state = __st; }


      _StateT
      state() const
      { return _M_state; }





      fpos&
      operator+=(streamoff __off)
      {
 _M_off += __off;
 return *this;
      }





      fpos&
      operator-=(streamoff __off)
      {
 _M_off -= __off;
 return *this;
      }







      fpos
      operator+(streamoff __off) const
      {
 fpos __pos(*this);
 __pos += __off;
 return __pos;
      }







      fpos
      operator-(streamoff __off) const
      {
 fpos __pos(*this);
 __pos -= __off;
 return __pos;
      }






      streamoff
      operator-(const fpos& __other) const
      { return _M_off - __other._M_off; }
    };






  template<typename _StateT>
    inline bool
    operator==(const fpos<_StateT>& __lhs, const fpos<_StateT>& __rhs)
    { return streamoff(__lhs) == streamoff(__rhs); }

  template<typename _StateT>
    inline bool
    operator!=(const fpos<_StateT>& __lhs, const fpos<_StateT>& __rhs)
    { return streamoff(__lhs) != streamoff(__rhs); }





  typedef fpos<mbstate_t> streampos;

  typedef fpos<mbstate_t> wstreampos;
# 239 "/usr/include/c++/5/bits/postypes.h" 3

}
# 41 "/usr/include/c++/5/bits/char_traits.h" 2 3
# 1 "/usr/include/c++/5/cwchar" 1 3
# 39 "/usr/include/c++/5/cwchar" 3
       
# 40 "/usr/include/c++/5/cwchar" 3




# 1 "/usr/include/wchar.h" 1 3 4
# 45 "/usr/include/c++/5/cwchar" 2 3
# 42 "/usr/include/c++/5/bits/char_traits.h" 2 3

namespace __gnu_cxx __attribute__ ((__visibility__ ("default")))
{

# 57 "/usr/include/c++/5/bits/char_traits.h" 3
  template<typename _CharT>
    struct _Char_types
    {
      typedef unsigned long int_type;
      typedef std::streampos pos_type;
      typedef std::streamoff off_type;
      typedef std::mbstate_t state_type;
    };
# 82 "/usr/include/c++/5/bits/char_traits.h" 3
  template<typename _CharT>
    struct char_traits
    {
      typedef _CharT char_type;
      typedef typename _Char_types<_CharT>::int_type int_type;
      typedef typename _Char_types<_CharT>::pos_type pos_type;
      typedef typename _Char_types<_CharT>::off_type off_type;
      typedef typename _Char_types<_CharT>::state_type state_type;

      static void
      assign(char_type& __c1, const char_type& __c2)
      { __c1 = __c2; }

      static bool
      eq(const char_type& __c1, const char_type& __c2)
      { return __c1 == __c2; }

      static bool
      lt(const char_type& __c1, const char_type& __c2)
      { return __c1 < __c2; }

      static int
      compare(const char_type* __s1, const char_type* __s2, std::size_t __n);

      static std::size_t
      length(const char_type* __s);

      static const char_type*
      find(const char_type* __s, std::size_t __n, const char_type& __a);

      static char_type*
      move(char_type* __s1, const char_type* __s2, std::size_t __n);

      static char_type*
      copy(char_type* __s1, const char_type* __s2, std::size_t __n);

      static char_type*
      assign(char_type* __s, std::size_t __n, char_type __a);

      static char_type
      to_char_type(const int_type& __c)
      { return static_cast<char_type>(__c); }

      static int_type
      to_int_type(const char_type& __c)
      { return static_cast<int_type>(__c); }

      static bool
      eq_int_type(const int_type& __c1, const int_type& __c2)
      { return __c1 == __c2; }

      static int_type
      eof()
      { return static_cast<int_type>(-1); }

      static int_type
      not_eof(const int_type& __c)
      { return !eq_int_type(__c, eof()) ? __c : to_int_type(char_type()); }
    };

  template<typename _CharT>
    int
    char_traits<_CharT>::
    compare(const char_type* __s1, const char_type* __s2, std::size_t __n)
    {
      for (std::size_t __i = 0; __i < __n; ++__i)
 if (lt(__s1[__i], __s2[__i]))
   return -1;
 else if (lt(__s2[__i], __s1[__i]))
   return 1;
      return 0;
    }

  template<typename _CharT>
    std::size_t
    char_traits<_CharT>::
    length(const char_type* __p)
    {
      std::size_t __i = 0;
      while (!eq(__p[__i], char_type()))
        ++__i;
      return __i;
    }

  template<typename _CharT>
    const typename char_traits<_CharT>::char_type*
    char_traits<_CharT>::
    find(const char_type* __s, std::size_t __n, const char_type& __a)
    {
      for (std::size_t __i = 0; __i < __n; ++__i)
        if (eq(__s[__i], __a))
          return __s + __i;
      return 0;
    }

  template<typename _CharT>
    typename char_traits<_CharT>::char_type*
    char_traits<_CharT>::
    move(char_type* __s1, const char_type* __s2, std::size_t __n)
    {
      return static_cast<_CharT*>(__builtin_memmove(__s1, __s2,
          __n * sizeof(char_type)));
    }

  template<typename _CharT>
    typename char_traits<_CharT>::char_type*
    char_traits<_CharT>::
    copy(char_type* __s1, const char_type* __s2, std::size_t __n)
    {

      std::copy(__s2, __s2 + __n, __s1);
      return __s1;
    }

  template<typename _CharT>
    typename char_traits<_CharT>::char_type*
    char_traits<_CharT>::
    assign(char_type* __s, std::size_t __n, char_type __a)
    {

      std::fill_n(__s, __n, __a);
      return __s;
    }


}

namespace std __attribute__ ((__visibility__ ("default")))
{

# 226 "/usr/include/c++/5/bits/char_traits.h" 3
  template<class _CharT>
    struct char_traits : public __gnu_cxx::char_traits<_CharT>
    { };



  template<>
    struct char_traits<char>
    {
      typedef char char_type;
      typedef int int_type;
      typedef streampos pos_type;
      typedef streamoff off_type;
      typedef mbstate_t state_type;

      static void
      assign(char_type& __c1, const char_type& __c2)
      { __c1 = __c2; }

      static bool
      eq(const char_type& __c1, const char_type& __c2)
      { return __c1 == __c2; }

      static bool
      lt(const char_type& __c1, const char_type& __c2)
      {

 return (static_cast<unsigned char>(__c1)
  < static_cast<unsigned char>(__c2));
      }

      static int
      compare(const char_type* __s1, const char_type* __s2, size_t __n)
      {
 if (__n == 0)
   return 0;
 return __builtin_memcmp(__s1, __s2, __n);
      }

      static size_t
      length(const char_type* __s)
      { return __builtin_strlen(__s); }

      static const char_type*
      find(const char_type* __s, size_t __n, const char_type& __a)
      {
 if (__n == 0)
   return 0;
 return static_cast<const char_type*>(__builtin_memchr(__s, __a, __n));
      }

      static char_type*
      move(char_type* __s1, const char_type* __s2, size_t __n)
      {
 if (__n == 0)
   return __s1;
 return static_cast<char_type*>(__builtin_memmove(__s1, __s2, __n));
      }

      static char_type*
      copy(char_type* __s1, const char_type* __s2, size_t __n)
      {
 if (__n == 0)
   return __s1;
 return static_cast<char_type*>(__builtin_memcpy(__s1, __s2, __n));
      }

      static char_type*
      assign(char_type* __s, size_t __n, char_type __a)
      {
 if (__n == 0)
   return __s;
 return static_cast<char_type*>(__builtin_memset(__s, __a, __n));
      }

      static char_type
      to_char_type(const int_type& __c)
      { return static_cast<char_type>(__c); }



      static int_type
      to_int_type(const char_type& __c)
      { return static_cast<int_type>(static_cast<unsigned char>(__c)); }

      static bool
      eq_int_type(const int_type& __c1, const int_type& __c2)
      { return __c1 == __c2; }

      static int_type
      eof()
      { return static_cast<int_type>(-1); }

      static int_type
      not_eof(const int_type& __c)
      { return (__c == eof()) ? 0 : __c; }
  };




  template<>
    struct char_traits<wchar_t>
    {
      typedef wchar_t char_type;
      typedef wint_t int_type;
      typedef streamoff off_type;
      typedef wstreampos pos_type;
      typedef mbstate_t state_type;

      static void
      assign(char_type& __c1, const char_type& __c2)
      { __c1 = __c2; }

      static bool
      eq(const char_type& __c1, const char_type& __c2)
      { return __c1 == __c2; }

      static bool
      lt(const char_type& __c1, const char_type& __c2)
      { return __c1 < __c2; }

      static int
      compare(const char_type* __s1, const char_type* __s2, size_t __n)
      {
 if (__n == 0)
   return 0;
 return wmemcmp(__s1, __s2, __n);
      }

      static size_t
      length(const char_type* __s)
      { return wcslen(__s); }

      static const char_type*
      find(const char_type* __s, size_t __n, const char_type& __a)
      {
 if (__n == 0)
   return 0;
 return wmemchr(__s, __a, __n);
      }

      static char_type*
      move(char_type* __s1, const char_type* __s2, size_t __n)
      {
 if (__n == 0)
   return __s1;
 return wmemmove(__s1, __s2, __n);
      }

      static char_type*
      copy(char_type* __s1, const char_type* __s2, size_t __n)
      {
 if (__n == 0)
   return __s1;
 return wmemcpy(__s1, __s2, __n);
      }

      static char_type*
      assign(char_type* __s, size_t __n, char_type __a)
      {
 if (__n == 0)
   return __s;
 return wmemset(__s, __a, __n);
      }

      static char_type
      to_char_type(const int_type& __c)
      { return char_type(__c); }

      static int_type
      to_int_type(const char_type& __c)
      { return int_type(__c); }

      static bool
      eq_int_type(const int_type& __c1, const int_type& __c2)
      { return __c1 == __c2; }

      static int_type
      eof()
      { return static_cast<int_type>((0xffffffffu)); }

      static int_type
      not_eof(const int_type& __c)
      { return eq_int_type(__c, eof()) ? 0 : __c; }
  };



}
# 41 "/usr/include/c++/5/string" 2 3
# 1 "/usr/include/c++/5/bits/allocator.h" 1 3
# 46 "/usr/include/c++/5/bits/allocator.h" 3
# 1 "/usr/include/x86_64-linux-gnu/c++/5/bits/c++allocator.h" 1 3
# 33 "/usr/include/x86_64-linux-gnu/c++/5/bits/c++allocator.h" 3
# 1 "/usr/include/c++/5/ext/new_allocator.h" 1 3
# 33 "/usr/include/c++/5/ext/new_allocator.h" 3
# 1 "/usr/include/c++/5/new" 1 3
# 37 "/usr/include/c++/5/new" 3
       
# 38 "/usr/include/c++/5/new" 3


# 1 "/usr/include/c++/5/exception" 1 3
# 33 "/usr/include/c++/5/exception" 3
       
# 34 "/usr/include/c++/5/exception" 3

#pragma GCC visibility push(default)


# 1 "/usr/include/c++/5/bits/atomic_lockfree_defines.h" 1 3
# 33 "/usr/include/c++/5/bits/atomic_lockfree_defines.h" 3
       
# 34 "/usr/include/c++/5/bits/atomic_lockfree_defines.h" 3
# 39 "/usr/include/c++/5/exception" 2 3

extern "C++" {

namespace std
{
# 60 "/usr/include/c++/5/exception" 3
  class exception
  {
  public:
    exception() throw() { }
    virtual ~exception() throw();



    virtual const char* what() const throw();
  };



  class bad_exception : public exception
  {
  public:
    bad_exception() throw() { }



    virtual ~bad_exception() throw();


    virtual const char* what() const throw();
  };


  typedef void (*terminate_handler) ();


  typedef void (*unexpected_handler) ();


  terminate_handler set_terminate(terminate_handler) throw();
# 102 "/usr/include/c++/5/exception" 3
  void terminate() throw() __attribute__ ((__noreturn__));


  unexpected_handler set_unexpected(unexpected_handler) throw();
# 114 "/usr/include/c++/5/exception" 3
  void unexpected() __attribute__ ((__noreturn__));
# 127 "/usr/include/c++/5/exception" 3
  bool uncaught_exception() throw() __attribute__ ((__pure__));


}

namespace __gnu_cxx
{

# 152 "/usr/include/c++/5/exception" 3
  void __verbose_terminate_handler();


}

}

#pragma GCC visibility pop
# 41 "/usr/include/c++/5/new" 2 3

#pragma GCC visibility push(default)

extern "C++" {

namespace std
{






  class bad_alloc : public exception
  {
  public:
    bad_alloc() throw() { }



    virtual ~bad_alloc() throw();


    virtual const char* what() const throw();
  };
# 82 "/usr/include/c++/5/new" 3
  struct nothrow_t { };

  extern const nothrow_t nothrow;



  typedef void (*new_handler)();



  new_handler set_new_handler(new_handler) throw();





}
# 111 "/usr/include/c++/5/new" 3
void* operator new(std::size_t) throw(std::bad_alloc)
  __attribute__((__externally_visible__));
void* operator new[](std::size_t) throw(std::bad_alloc)
  __attribute__((__externally_visible__));
void operator delete(void*) throw()
  __attribute__((__externally_visible__));
void operator delete[](void*) throw()
  __attribute__((__externally_visible__));
void* operator new(std::size_t, const std::nothrow_t&) throw()
  __attribute__((__externally_visible__));
void* operator new[](std::size_t, const std::nothrow_t&) throw()
  __attribute__((__externally_visible__));
void operator delete(void*, const std::nothrow_t&) throw()
  __attribute__((__externally_visible__));
void operator delete[](void*, const std::nothrow_t&) throw()
  __attribute__((__externally_visible__));


inline void* operator new(std::size_t, void* __p) throw()
{ return __p; }
inline void* operator new[](std::size_t, void* __p) throw()
{ return __p; }


inline void operator delete (void*, void*) throw() { }
inline void operator delete[](void*, void*) throw() { }

}

#pragma GCC visibility pop
# 34 "/usr/include/c++/5/ext/new_allocator.h" 2 3






namespace __gnu_cxx __attribute__ ((__visibility__ ("default")))
{


  using std::size_t;
  using std::ptrdiff_t;
# 57 "/usr/include/c++/5/ext/new_allocator.h" 3
  template<typename _Tp>
    class new_allocator
    {
    public:
      typedef size_t size_type;
      typedef ptrdiff_t difference_type;
      typedef _Tp* pointer;
      typedef const _Tp* const_pointer;
      typedef _Tp& reference;
      typedef const _Tp& const_reference;
      typedef _Tp value_type;

      template<typename _Tp1>
        struct rebind
        { typedef new_allocator<_Tp1> other; };







      new_allocator() throw() { }

      new_allocator(const new_allocator&) throw() { }

      template<typename _Tp1>
        new_allocator(const new_allocator<_Tp1>&) throw() { }

      ~new_allocator() throw() { }

      pointer
      address(reference __x) const
      { return std::__addressof(__x); }

      const_pointer
      address(const_reference __x) const
      { return std::__addressof(__x); }



      pointer
      allocate(size_type __n, const void* = 0)
      {
 if (__n > this->max_size())
   std::__throw_bad_alloc();

 return static_cast<_Tp*>(::operator new(__n * sizeof(_Tp)));
      }


      void
      deallocate(pointer __p, size_type)
      { ::operator delete(__p); }

      size_type
      max_size() const throw()
      { return size_t(-1) / sizeof(_Tp); }
# 128 "/usr/include/c++/5/ext/new_allocator.h" 3
      void
      construct(pointer __p, const _Tp& __val)
      { ::new((void *)__p) _Tp(__val); }

      void
      destroy(pointer __p) { __p->~_Tp(); }

    };

  template<typename _Tp>
    inline bool
    operator==(const new_allocator<_Tp>&, const new_allocator<_Tp>&)
    { return true; }

  template<typename _Tp>
    inline bool
    operator!=(const new_allocator<_Tp>&, const new_allocator<_Tp>&)
    { return false; }


}
# 34 "/usr/include/x86_64-linux-gnu/c++/5/bits/c++allocator.h" 2 3
# 47 "/usr/include/c++/5/bits/allocator.h" 2 3





namespace std __attribute__ ((__visibility__ ("default")))
{








  template<>
    class allocator<void>
    {
    public:
      typedef size_t size_type;
      typedef ptrdiff_t difference_type;
      typedef void* pointer;
      typedef const void* const_pointer;
      typedef void value_type;

      template<typename _Tp1>
        struct rebind
        { typedef allocator<_Tp1> other; };






    };
# 91 "/usr/include/c++/5/bits/allocator.h" 3
  template<typename _Tp>
    class allocator: public __gnu_cxx::new_allocator<_Tp>
    {
   public:
      typedef size_t size_type;
      typedef ptrdiff_t difference_type;
      typedef _Tp* pointer;
      typedef const _Tp* const_pointer;
      typedef _Tp& reference;
      typedef const _Tp& const_reference;
      typedef _Tp value_type;

      template<typename _Tp1>
        struct rebind
        { typedef allocator<_Tp1> other; };







      allocator() throw() { }

      allocator(const allocator& __a) throw()
      : __gnu_cxx::new_allocator<_Tp>(__a) { }

      template<typename _Tp1>
        allocator(const allocator<_Tp1>&) throw() { }

      ~allocator() throw() { }


    };

  template<typename _T1, typename _T2>
    inline bool
    operator==(const allocator<_T1>&, const allocator<_T2>&)
    throw()
    { return true; }

  template<typename _Tp>
    inline bool
    operator==(const allocator<_Tp>&, const allocator<_Tp>&)
    throw()
    { return true; }

  template<typename _T1, typename _T2>
    inline bool
    operator!=(const allocator<_T1>&, const allocator<_T2>&)
    throw()
    { return false; }

  template<typename _Tp>
    inline bool
    operator!=(const allocator<_Tp>&, const allocator<_Tp>&)
    throw()
    { return false; }






  extern template class allocator<char>;
  extern template class allocator<wchar_t>;






  template<typename _Alloc, bool = __is_empty(_Alloc)>
    struct __alloc_swap
    { static void _S_do_it(_Alloc&, _Alloc&) { } };

  template<typename _Alloc>
    struct __alloc_swap<_Alloc, false>
    {
      static void
      _S_do_it(_Alloc& __one, _Alloc& __two)
      {

 if (__one != __two)
   swap(__one, __two);
      }
    };


  template<typename _Alloc, bool = __is_empty(_Alloc)>
    struct __alloc_neq
    {
      static bool
      _S_do_it(const _Alloc&, const _Alloc&)
      { return false; }
    };

  template<typename _Alloc>
    struct __alloc_neq<_Alloc, false>
    {
      static bool
      _S_do_it(const _Alloc& __one, const _Alloc& __two)
      { return __one != __two; }
    };
# 226 "/usr/include/c++/5/bits/allocator.h" 3

}
# 42 "/usr/include/c++/5/string" 2 3

# 1 "/usr/include/c++/5/bits/localefwd.h" 1 3
# 37 "/usr/include/c++/5/bits/localefwd.h" 3
       
# 38 "/usr/include/c++/5/bits/localefwd.h" 3


# 1 "/usr/include/x86_64-linux-gnu/c++/5/bits/c++locale.h" 1 3
# 39 "/usr/include/x86_64-linux-gnu/c++/5/bits/c++locale.h" 3
       
# 40 "/usr/include/x86_64-linux-gnu/c++/5/bits/c++locale.h" 3

# 1 "/usr/include/c++/5/clocale" 1 3
# 39 "/usr/include/c++/5/clocale" 3
       
# 40 "/usr/include/c++/5/clocale" 3


# 1 "/usr/include/locale.h" 1 3 4
# 28 "/usr/include/locale.h" 3 4
# 1 "/usr/lib/gcc/x86_64-linux-gnu/5/include/stddef.h" 1 3 4
# 29 "/usr/include/locale.h" 2 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/locale.h" 1 3 4
# 30 "/usr/include/locale.h" 2 3 4

extern "C" {
# 50 "/usr/include/locale.h" 3 4



struct lconv
{


  char *decimal_point;
  char *thousands_sep;





  char *grouping;





  char *int_curr_symbol;
  char *currency_symbol;
  char *mon_decimal_point;
  char *mon_thousands_sep;
  char *mon_grouping;
  char *positive_sign;
  char *negative_sign;
  char int_frac_digits;
  char frac_digits;

  char p_cs_precedes;

  char p_sep_by_space;

  char n_cs_precedes;

  char n_sep_by_space;






  char p_sign_posn;
  char n_sign_posn;


  char int_p_cs_precedes;

  char int_p_sep_by_space;

  char int_n_cs_precedes;

  char int_n_sep_by_space;






  char int_p_sign_posn;
  char int_n_sign_posn;
# 120 "/usr/include/locale.h" 3 4
};



extern char *setlocale (int __category, const char *__locale) throw ();


extern struct lconv *localeconv (void) throw ();


# 151 "/usr/include/locale.h" 3 4
extern __locale_t newlocale (int __category_mask, const char *__locale,
        __locale_t __base) throw ();
# 186 "/usr/include/locale.h" 3 4
extern __locale_t duplocale (__locale_t __dataset) throw ();



extern void freelocale (__locale_t __dataset) throw ();






extern __locale_t uselocale (__locale_t __dataset) throw ();







}
# 43 "/usr/include/c++/5/clocale" 2 3
# 51 "/usr/include/c++/5/clocale" 3
namespace std
{
  using ::lconv;
  using ::setlocale;
  using ::localeconv;
}
# 42 "/usr/include/x86_64-linux-gnu/c++/5/bits/c++locale.h" 2 3






namespace __gnu_cxx __attribute__ ((__visibility__ ("default")))
{


  extern "C" __typeof(uselocale) __uselocale;


}


namespace std __attribute__ ((__visibility__ ("default")))
{


  typedef __locale_t __c_locale;





  inline int
  __convert_from_v(const __c_locale& __cloc __attribute__ ((__unused__)),
     char* __out,
     const int __size __attribute__ ((__unused__)),
     const char* __fmt, ...)
  {

    __c_locale __old = __gnu_cxx::__uselocale(__cloc);
# 88 "/usr/include/x86_64-linux-gnu/c++/5/bits/c++locale.h" 3
    __builtin_va_list __args;
    __builtin_va_start(__args, __fmt);


    const int __ret = __builtin_vsnprintf(__out, __size, __fmt, __args);




    __builtin_va_end(__args);


    __gnu_cxx::__uselocale(__old);







    return __ret;
  }


}
# 41 "/usr/include/c++/5/bits/localefwd.h" 2 3
# 1 "/usr/include/c++/5/iosfwd" 1 3
# 36 "/usr/include/c++/5/iosfwd" 3
       
# 37 "/usr/include/c++/5/iosfwd" 3





namespace std __attribute__ ((__visibility__ ("default")))
{

# 74 "/usr/include/c++/5/iosfwd" 3
  class ios_base;

  template<typename _CharT, typename _Traits = char_traits<_CharT> >
    class basic_ios;

  template<typename _CharT, typename _Traits = char_traits<_CharT> >
    class basic_streambuf;

  template<typename _CharT, typename _Traits = char_traits<_CharT> >
    class basic_istream;

  template<typename _CharT, typename _Traits = char_traits<_CharT> >
    class basic_ostream;

  template<typename _CharT, typename _Traits = char_traits<_CharT> >
    class basic_iostream;


namespace __cxx11 {

  template<typename _CharT, typename _Traits = char_traits<_CharT>,
     typename _Alloc = allocator<_CharT> >
    class basic_stringbuf;

  template<typename _CharT, typename _Traits = char_traits<_CharT>,
    typename _Alloc = allocator<_CharT> >
    class basic_istringstream;

  template<typename _CharT, typename _Traits = char_traits<_CharT>,
    typename _Alloc = allocator<_CharT> >
    class basic_ostringstream;

  template<typename _CharT, typename _Traits = char_traits<_CharT>,
    typename _Alloc = allocator<_CharT> >
    class basic_stringstream;

}

  template<typename _CharT, typename _Traits = char_traits<_CharT> >
    class basic_filebuf;

  template<typename _CharT, typename _Traits = char_traits<_CharT> >
    class basic_ifstream;

  template<typename _CharT, typename _Traits = char_traits<_CharT> >
    class basic_ofstream;

  template<typename _CharT, typename _Traits = char_traits<_CharT> >
    class basic_fstream;

  template<typename _CharT, typename _Traits = char_traits<_CharT> >
    class istreambuf_iterator;

  template<typename _CharT, typename _Traits = char_traits<_CharT> >
    class ostreambuf_iterator;



  typedef basic_ios<char> ios;


  typedef basic_streambuf<char> streambuf;


  typedef basic_istream<char> istream;


  typedef basic_ostream<char> ostream;


  typedef basic_iostream<char> iostream;


  typedef basic_stringbuf<char> stringbuf;


  typedef basic_istringstream<char> istringstream;


  typedef basic_ostringstream<char> ostringstream;


  typedef basic_stringstream<char> stringstream;


  typedef basic_filebuf<char> filebuf;


  typedef basic_ifstream<char> ifstream;


  typedef basic_ofstream<char> ofstream;


  typedef basic_fstream<char> fstream;



  typedef basic_ios<wchar_t> wios;


  typedef basic_streambuf<wchar_t> wstreambuf;


  typedef basic_istream<wchar_t> wistream;


  typedef basic_ostream<wchar_t> wostream;


  typedef basic_iostream<wchar_t> wiostream;


  typedef basic_stringbuf<wchar_t> wstringbuf;


  typedef basic_istringstream<wchar_t> wistringstream;


  typedef basic_ostringstream<wchar_t> wostringstream;


  typedef basic_stringstream<wchar_t> wstringstream;


  typedef basic_filebuf<wchar_t> wfilebuf;


  typedef basic_ifstream<wchar_t> wifstream;


  typedef basic_ofstream<wchar_t> wofstream;


  typedef basic_fstream<wchar_t> wfstream;




}
# 42 "/usr/include/c++/5/bits/localefwd.h" 2 3
# 1 "/usr/include/c++/5/cctype" 1 3
# 39 "/usr/include/c++/5/cctype" 3
       
# 40 "/usr/include/c++/5/cctype" 3


# 1 "/usr/include/ctype.h" 1 3 4
# 28 "/usr/include/ctype.h" 3 4
extern "C" {
# 46 "/usr/include/ctype.h" 3 4
enum
{
  _ISupper = ((0) < 8 ? ((1 << (0)) << 8) : ((1 << (0)) >> 8)),
  _ISlower = ((1) < 8 ? ((1 << (1)) << 8) : ((1 << (1)) >> 8)),
  _ISalpha = ((2) < 8 ? ((1 << (2)) << 8) : ((1 << (2)) >> 8)),
  _ISdigit = ((3) < 8 ? ((1 << (3)) << 8) : ((1 << (3)) >> 8)),
  _ISxdigit = ((4) < 8 ? ((1 << (4)) << 8) : ((1 << (4)) >> 8)),
  _ISspace = ((5) < 8 ? ((1 << (5)) << 8) : ((1 << (5)) >> 8)),
  _ISprint = ((6) < 8 ? ((1 << (6)) << 8) : ((1 << (6)) >> 8)),
  _ISgraph = ((7) < 8 ? ((1 << (7)) << 8) : ((1 << (7)) >> 8)),
  _ISblank = ((8) < 8 ? ((1 << (8)) << 8) : ((1 << (8)) >> 8)),
  _IScntrl = ((9) < 8 ? ((1 << (9)) << 8) : ((1 << (9)) >> 8)),
  _ISpunct = ((10) < 8 ? ((1 << (10)) << 8) : ((1 << (10)) >> 8)),
  _ISalnum = ((11) < 8 ? ((1 << (11)) << 8) : ((1 << (11)) >> 8))
};
# 79 "/usr/include/ctype.h" 3 4
extern const unsigned short int **__ctype_b_loc (void)
     throw () __attribute__ ((__const__));
extern const __int32_t **__ctype_tolower_loc (void)
     throw () __attribute__ ((__const__));
extern const __int32_t **__ctype_toupper_loc (void)
     throw () __attribute__ ((__const__));
# 104 "/usr/include/ctype.h" 3 4






extern int isalnum (int) throw ();
extern int isalpha (int) throw ();
extern int iscntrl (int) throw ();
extern int isdigit (int) throw ();
extern int islower (int) throw ();
extern int isgraph (int) throw ();
extern int isprint (int) throw ();
extern int ispunct (int) throw ();
extern int isspace (int) throw ();
extern int isupper (int) throw ();
extern int isxdigit (int) throw ();



extern int tolower (int __c) throw ();


extern int toupper (int __c) throw ();








extern int isblank (int) throw ();






extern int isctype (int __c, int __mask) throw ();






extern int isascii (int __c) throw ();



extern int toascii (int __c) throw ();



extern int _toupper (int) throw ();
extern int _tolower (int) throw ();
# 271 "/usr/include/ctype.h" 3 4
extern int isalnum_l (int, __locale_t) throw ();
extern int isalpha_l (int, __locale_t) throw ();
extern int iscntrl_l (int, __locale_t) throw ();
extern int isdigit_l (int, __locale_t) throw ();
extern int islower_l (int, __locale_t) throw ();
extern int isgraph_l (int, __locale_t) throw ();
extern int isprint_l (int, __locale_t) throw ();
extern int ispunct_l (int, __locale_t) throw ();
extern int isspace_l (int, __locale_t) throw ();
extern int isupper_l (int, __locale_t) throw ();
extern int isxdigit_l (int, __locale_t) throw ();

extern int isblank_l (int, __locale_t) throw ();



extern int __tolower_l (int __c, __locale_t __l) throw ();
extern int tolower_l (int __c, __locale_t __l) throw ();


extern int __toupper_l (int __c, __locale_t __l) throw ();
extern int toupper_l (int __c, __locale_t __l) throw ();
# 347 "/usr/include/ctype.h" 3 4
}
# 43 "/usr/include/c++/5/cctype" 2 3
# 62 "/usr/include/c++/5/cctype" 3
namespace std
{
  using ::isalnum;
  using ::isalpha;
  using ::iscntrl;
  using ::isdigit;
  using ::isgraph;
  using ::islower;
  using ::isprint;
  using ::ispunct;
  using ::isspace;
  using ::isupper;
  using ::isxdigit;
  using ::tolower;
  using ::toupper;
}
# 43 "/usr/include/c++/5/bits/localefwd.h" 2 3

namespace std __attribute__ ((__visibility__ ("default")))
{

# 55 "/usr/include/c++/5/bits/localefwd.h" 3
  class locale;

  template<typename _Facet>
    bool
    has_facet(const locale&) throw();

  template<typename _Facet>
    const _Facet&
    use_facet(const locale&);


  template<typename _CharT>
    bool
    isspace(_CharT, const locale&);

  template<typename _CharT>
    bool
    isprint(_CharT, const locale&);

  template<typename _CharT>
    bool
    iscntrl(_CharT, const locale&);

  template<typename _CharT>
    bool
    isupper(_CharT, const locale&);

  template<typename _CharT>
    bool
    islower(_CharT, const locale&);

  template<typename _CharT>
    bool
    isalpha(_CharT, const locale&);

  template<typename _CharT>
    bool
    isdigit(_CharT, const locale&);

  template<typename _CharT>
    bool
    ispunct(_CharT, const locale&);

  template<typename _CharT>
    bool
    isxdigit(_CharT, const locale&);

  template<typename _CharT>
    bool
    isalnum(_CharT, const locale&);

  template<typename _CharT>
    bool
    isgraph(_CharT, const locale&);







  template<typename _CharT>
    _CharT
    toupper(_CharT, const locale&);

  template<typename _CharT>
    _CharT
    tolower(_CharT, const locale&);


  class ctype_base;
  template<typename _CharT>
    class ctype;
  template<> class ctype<char>;

  template<> class ctype<wchar_t>;

  template<typename _CharT>
    class ctype_byname;


  class codecvt_base;
  template<typename _InternT, typename _ExternT, typename _StateT>
    class codecvt;
  template<> class codecvt<char, char, mbstate_t>;

  template<> class codecvt<wchar_t, char, mbstate_t>;

  template<typename _InternT, typename _ExternT, typename _StateT>
    class codecvt_byname;



  template<typename _CharT, typename _InIter = istreambuf_iterator<_CharT> >
    class num_get;
  template<typename _CharT, typename _OutIter = ostreambuf_iterator<_CharT> >
    class num_put;

namespace __cxx11 {
  template<typename _CharT> class numpunct;
  template<typename _CharT> class numpunct_byname;
}

namespace __cxx11 {

  template<typename _CharT>
    class collate;
  template<typename _CharT>
    class collate_byname;
}


  class time_base;
namespace __cxx11 {
  template<typename _CharT, typename _InIter = istreambuf_iterator<_CharT> >
    class time_get;
  template<typename _CharT, typename _InIter = istreambuf_iterator<_CharT> >
    class time_get_byname;
}
  template<typename _CharT, typename _OutIter = ostreambuf_iterator<_CharT> >
    class time_put;
  template<typename _CharT, typename _OutIter = ostreambuf_iterator<_CharT> >
    class time_put_byname;


  class money_base;
namespace __cxx11 {
  template<typename _CharT, typename _InIter = istreambuf_iterator<_CharT> >
    class money_get;
  template<typename _CharT, typename _OutIter = ostreambuf_iterator<_CharT> >
    class money_put;
}
namespace __cxx11 {
  template<typename _CharT, bool _Intl = false>
    class moneypunct;
  template<typename _CharT, bool _Intl = false>
    class moneypunct_byname;
}


  class messages_base;
namespace __cxx11 {
  template<typename _CharT>
    class messages;
  template<typename _CharT>
    class messages_byname;
}


}
# 44 "/usr/include/c++/5/string" 2 3
# 1 "/usr/include/c++/5/bits/ostream_insert.h" 1 3
# 33 "/usr/include/c++/5/bits/ostream_insert.h" 3
       
# 34 "/usr/include/c++/5/bits/ostream_insert.h" 3


# 1 "/usr/include/c++/5/bits/cxxabi_forced.h" 1 3
# 34 "/usr/include/c++/5/bits/cxxabi_forced.h" 3
       
# 35 "/usr/include/c++/5/bits/cxxabi_forced.h" 3

#pragma GCC visibility push(default)


namespace __cxxabiv1
{







  class __forced_unwind
  {
    virtual ~__forced_unwind() throw();


    virtual void __pure_dummy() = 0;
  };
}


#pragma GCC visibility pop
# 37 "/usr/include/c++/5/bits/ostream_insert.h" 2 3

namespace std __attribute__ ((__visibility__ ("default")))
{


  template<typename _CharT, typename _Traits>
    inline void
    __ostream_write(basic_ostream<_CharT, _Traits>& __out,
      const _CharT* __s, streamsize __n)
    {
      typedef basic_ostream<_CharT, _Traits> __ostream_type;
      typedef typename __ostream_type::ios_base __ios_base;

      const streamsize __put = __out.rdbuf()->sputn(__s, __n);
      if (__put != __n)
 __out.setstate(__ios_base::badbit);
    }

  template<typename _CharT, typename _Traits>
    inline void
    __ostream_fill(basic_ostream<_CharT, _Traits>& __out, streamsize __n)
    {
      typedef basic_ostream<_CharT, _Traits> __ostream_type;
      typedef typename __ostream_type::ios_base __ios_base;

      const _CharT __c = __out.fill();
      for (; __n > 0; --__n)
 {
   const typename _Traits::int_type __put = __out.rdbuf()->sputc(__c);
   if (_Traits::eq_int_type(__put, _Traits::eof()))
     {
       __out.setstate(__ios_base::badbit);
       break;
     }
 }
    }

  template<typename _CharT, typename _Traits>
    basic_ostream<_CharT, _Traits>&
    __ostream_insert(basic_ostream<_CharT, _Traits>& __out,
       const _CharT* __s, streamsize __n)
    {
      typedef basic_ostream<_CharT, _Traits> __ostream_type;
      typedef typename __ostream_type::ios_base __ios_base;

      typename __ostream_type::sentry __cerb(__out);
      if (__cerb)
 {
   try
     {
       const streamsize __w = __out.width();
       if (__w > __n)
  {
    const bool __left = ((__out.flags()
     & __ios_base::adjustfield)
           == __ios_base::left);
    if (!__left)
      __ostream_fill(__out, __w - __n);
    if (__out.good())
      __ostream_write(__out, __s, __n);
    if (__left && __out.good())
      __ostream_fill(__out, __w - __n);
  }
       else
  __ostream_write(__out, __s, __n);
       __out.width(0);
     }
   catch(__cxxabiv1::__forced_unwind&)
     {
       __out._M_setstate(__ios_base::badbit);
       throw;
     }
   catch(...)
     { __out._M_setstate(__ios_base::badbit); }
 }
      return __out;
    }




  extern template ostream& __ostream_insert(ostream&, const char*, streamsize);


  extern template wostream& __ostream_insert(wostream&, const wchar_t*,
          streamsize);




}
# 45 "/usr/include/c++/5/string" 2 3



# 1 "/usr/include/c++/5/bits/stl_function.h" 1 3
# 63 "/usr/include/c++/5/bits/stl_function.h" 3
namespace std __attribute__ ((__visibility__ ("default")))
{

# 104 "/usr/include/c++/5/bits/stl_function.h" 3
  template<typename _Arg, typename _Result>
    struct unary_function
    {

      typedef _Arg argument_type;


      typedef _Result result_type;
    };




  template<typename _Arg1, typename _Arg2, typename _Result>
    struct binary_function
    {

      typedef _Arg1 first_argument_type;


      typedef _Arg2 second_argument_type;


      typedef _Result result_type;
    };
# 166 "/usr/include/c++/5/bits/stl_function.h" 3
  template<typename _Tp>
    struct plus : public binary_function<_Tp, _Tp, _Tp>
    {
     
      _Tp
      operator()(const _Tp& __x, const _Tp& __y) const
      { return __x + __y; }
    };


  template<typename _Tp>
    struct minus : public binary_function<_Tp, _Tp, _Tp>
    {
     
      _Tp
      operator()(const _Tp& __x, const _Tp& __y) const
      { return __x - __y; }
    };


  template<typename _Tp>
    struct multiplies : public binary_function<_Tp, _Tp, _Tp>
    {
     
      _Tp
      operator()(const _Tp& __x, const _Tp& __y) const
      { return __x * __y; }
    };


  template<typename _Tp>
    struct divides : public binary_function<_Tp, _Tp, _Tp>
    {
     
      _Tp
      operator()(const _Tp& __x, const _Tp& __y) const
      { return __x / __y; }
    };


  template<typename _Tp>
    struct modulus : public binary_function<_Tp, _Tp, _Tp>
    {
     
      _Tp
      operator()(const _Tp& __x, const _Tp& __y) const
      { return __x % __y; }
    };


  template<typename _Tp>
    struct negate : public unary_function<_Tp, _Tp>
    {
     
      _Tp
      operator()(const _Tp& __x) const
      { return -__x; }
    };
# 351 "/usr/include/c++/5/bits/stl_function.h" 3
  template<typename _Tp>
    struct equal_to : public binary_function<_Tp, _Tp, bool>
    {
     
      bool
      operator()(const _Tp& __x, const _Tp& __y) const
      { return __x == __y; }
    };


  template<typename _Tp>
    struct not_equal_to : public binary_function<_Tp, _Tp, bool>
    {
     
      bool
      operator()(const _Tp& __x, const _Tp& __y) const
      { return __x != __y; }
    };


  template<typename _Tp>
    struct greater : public binary_function<_Tp, _Tp, bool>
    {
     
      bool
      operator()(const _Tp& __x, const _Tp& __y) const
      { return __x > __y; }
    };


  template<typename _Tp>
    struct less : public binary_function<_Tp, _Tp, bool>
    {
     
      bool
      operator()(const _Tp& __x, const _Tp& __y) const
      { return __x < __y; }
    };


  template<typename _Tp>
    struct greater_equal : public binary_function<_Tp, _Tp, bool>
    {
     
      bool
      operator()(const _Tp& __x, const _Tp& __y) const
      { return __x >= __y; }
    };


  template<typename _Tp>
    struct less_equal : public binary_function<_Tp, _Tp, bool>
    {
     
      bool
      operator()(const _Tp& __x, const _Tp& __y) const
      { return __x <= __y; }
    };
# 524 "/usr/include/c++/5/bits/stl_function.h" 3
  template<typename _Tp>
    struct logical_and : public binary_function<_Tp, _Tp, bool>
    {
     
      bool
      operator()(const _Tp& __x, const _Tp& __y) const
      { return __x && __y; }
    };


  template<typename _Tp>
    struct logical_or : public binary_function<_Tp, _Tp, bool>
    {
     
      bool
      operator()(const _Tp& __x, const _Tp& __y) const
      { return __x || __y; }
    };


  template<typename _Tp>
    struct logical_not : public unary_function<_Tp, bool>
    {
     
      bool
      operator()(const _Tp& __x) const
      { return !__x; }
    };
# 617 "/usr/include/c++/5/bits/stl_function.h" 3
  template<typename _Tp>
    struct bit_and : public binary_function<_Tp, _Tp, _Tp>
    {
     
      _Tp
      operator()(const _Tp& __x, const _Tp& __y) const
      { return __x & __y; }
    };

  template<typename _Tp>
    struct bit_or : public binary_function<_Tp, _Tp, _Tp>
    {
     
      _Tp
      operator()(const _Tp& __x, const _Tp& __y) const
      { return __x | __y; }
    };

  template<typename _Tp>
    struct bit_xor : public binary_function<_Tp, _Tp, _Tp>
    {
     
      _Tp
      operator()(const _Tp& __x, const _Tp& __y) const
      { return __x ^ __y; }
    };

  template<typename _Tp>
    struct bit_not : public unary_function<_Tp, _Tp>
    {
   
      _Tp
      operator()(const _Tp& __x) const
      { return ~__x; }
    };
# 741 "/usr/include/c++/5/bits/stl_function.h" 3
  template<typename _Predicate>
    class unary_negate
    : public unary_function<typename _Predicate::argument_type, bool>
    {
    protected:
      _Predicate _M_pred;

    public:
     
      explicit
      unary_negate(const _Predicate& __x) : _M_pred(__x) { }

     
      bool
      operator()(const typename _Predicate::argument_type& __x) const
      { return !_M_pred(__x); }
    };


  template<typename _Predicate>
   
    inline unary_negate<_Predicate>
    not1(const _Predicate& __pred)
    { return unary_negate<_Predicate>(__pred); }


  template<typename _Predicate>
    class binary_negate
    : public binary_function<typename _Predicate::first_argument_type,
        typename _Predicate::second_argument_type, bool>
    {
    protected:
      _Predicate _M_pred;

    public:
     
      explicit
      binary_negate(const _Predicate& __x) : _M_pred(__x) { }

     
      bool
      operator()(const typename _Predicate::first_argument_type& __x,
   const typename _Predicate::second_argument_type& __y) const
      { return !_M_pred(__x, __y); }
    };


  template<typename _Predicate>
   
    inline binary_negate<_Predicate>
    not2(const _Predicate& __pred)
    { return binary_negate<_Predicate>(__pred); }
# 818 "/usr/include/c++/5/bits/stl_function.h" 3
  template<typename _Arg, typename _Result>
    class pointer_to_unary_function : public unary_function<_Arg, _Result>
    {
    protected:
      _Result (*_M_ptr)(_Arg);

    public:
      pointer_to_unary_function() { }

      explicit
      pointer_to_unary_function(_Result (*__x)(_Arg))
      : _M_ptr(__x) { }

      _Result
      operator()(_Arg __x) const
      { return _M_ptr(__x); }
    };


  template<typename _Arg, typename _Result>
    inline pointer_to_unary_function<_Arg, _Result>
    ptr_fun(_Result (*__x)(_Arg))
    { return pointer_to_unary_function<_Arg, _Result>(__x); }


  template<typename _Arg1, typename _Arg2, typename _Result>
    class pointer_to_binary_function
    : public binary_function<_Arg1, _Arg2, _Result>
    {
    protected:
      _Result (*_M_ptr)(_Arg1, _Arg2);

    public:
      pointer_to_binary_function() { }

      explicit
      pointer_to_binary_function(_Result (*__x)(_Arg1, _Arg2))
      : _M_ptr(__x) { }

      _Result
      operator()(_Arg1 __x, _Arg2 __y) const
      { return _M_ptr(__x, __y); }
    };


  template<typename _Arg1, typename _Arg2, typename _Result>
    inline pointer_to_binary_function<_Arg1, _Arg2, _Result>
    ptr_fun(_Result (*__x)(_Arg1, _Arg2))
    { return pointer_to_binary_function<_Arg1, _Arg2, _Result>(__x); }


  template<typename _Tp>
    struct _Identity
    : public unary_function<_Tp,_Tp>
    {
      _Tp&
      operator()(_Tp& __x) const
      { return __x; }

      const _Tp&
      operator()(const _Tp& __x) const
      { return __x; }
    };

  template<typename _Pair>
    struct _Select1st
    : public unary_function<_Pair, typename _Pair::first_type>
    {
      typename _Pair::first_type&
      operator()(_Pair& __x) const
      { return __x.first; }

      const typename _Pair::first_type&
      operator()(const _Pair& __x) const
      { return __x.first; }
# 905 "/usr/include/c++/5/bits/stl_function.h" 3
    };

  template<typename _Pair>
    struct _Select2nd
    : public unary_function<_Pair, typename _Pair::second_type>
    {
      typename _Pair::second_type&
      operator()(_Pair& __x) const
      { return __x.second; }

      const typename _Pair::second_type&
      operator()(const _Pair& __x) const
      { return __x.second; }
    };
# 938 "/usr/include/c++/5/bits/stl_function.h" 3
  template<typename _Ret, typename _Tp>
    class mem_fun_t : public unary_function<_Tp*, _Ret>
    {
    public:
      explicit
      mem_fun_t(_Ret (_Tp::*__pf)())
      : _M_f(__pf) { }

      _Ret
      operator()(_Tp* __p) const
      { return (__p->*_M_f)(); }

    private:
      _Ret (_Tp::*_M_f)();
    };



  template<typename _Ret, typename _Tp>
    class const_mem_fun_t : public unary_function<const _Tp*, _Ret>
    {
    public:
      explicit
      const_mem_fun_t(_Ret (_Tp::*__pf)() const)
      : _M_f(__pf) { }

      _Ret
      operator()(const _Tp* __p) const
      { return (__p->*_M_f)(); }

    private:
      _Ret (_Tp::*_M_f)() const;
    };



  template<typename _Ret, typename _Tp>
    class mem_fun_ref_t : public unary_function<_Tp, _Ret>
    {
    public:
      explicit
      mem_fun_ref_t(_Ret (_Tp::*__pf)())
      : _M_f(__pf) { }

      _Ret
      operator()(_Tp& __r) const
      { return (__r.*_M_f)(); }

    private:
      _Ret (_Tp::*_M_f)();
  };



  template<typename _Ret, typename _Tp>
    class const_mem_fun_ref_t : public unary_function<_Tp, _Ret>
    {
    public:
      explicit
      const_mem_fun_ref_t(_Ret (_Tp::*__pf)() const)
      : _M_f(__pf) { }

      _Ret
      operator()(const _Tp& __r) const
      { return (__r.*_M_f)(); }

    private:
      _Ret (_Tp::*_M_f)() const;
    };



  template<typename _Ret, typename _Tp, typename _Arg>
    class mem_fun1_t : public binary_function<_Tp*, _Arg, _Ret>
    {
    public:
      explicit
      mem_fun1_t(_Ret (_Tp::*__pf)(_Arg))
      : _M_f(__pf) { }

      _Ret
      operator()(_Tp* __p, _Arg __x) const
      { return (__p->*_M_f)(__x); }

    private:
      _Ret (_Tp::*_M_f)(_Arg);
    };



  template<typename _Ret, typename _Tp, typename _Arg>
    class const_mem_fun1_t : public binary_function<const _Tp*, _Arg, _Ret>
    {
    public:
      explicit
      const_mem_fun1_t(_Ret (_Tp::*__pf)(_Arg) const)
      : _M_f(__pf) { }

      _Ret
      operator()(const _Tp* __p, _Arg __x) const
      { return (__p->*_M_f)(__x); }

    private:
      _Ret (_Tp::*_M_f)(_Arg) const;
    };



  template<typename _Ret, typename _Tp, typename _Arg>
    class mem_fun1_ref_t : public binary_function<_Tp, _Arg, _Ret>
    {
    public:
      explicit
      mem_fun1_ref_t(_Ret (_Tp::*__pf)(_Arg))
      : _M_f(__pf) { }

      _Ret
      operator()(_Tp& __r, _Arg __x) const
      { return (__r.*_M_f)(__x); }

    private:
      _Ret (_Tp::*_M_f)(_Arg);
    };



  template<typename _Ret, typename _Tp, typename _Arg>
    class const_mem_fun1_ref_t : public binary_function<_Tp, _Arg, _Ret>
    {
    public:
      explicit
      const_mem_fun1_ref_t(_Ret (_Tp::*__pf)(_Arg) const)
      : _M_f(__pf) { }

      _Ret
      operator()(const _Tp& __r, _Arg __x) const
      { return (__r.*_M_f)(__x); }

    private:
      _Ret (_Tp::*_M_f)(_Arg) const;
    };



  template<typename _Ret, typename _Tp>
    inline mem_fun_t<_Ret, _Tp>
    mem_fun(_Ret (_Tp::*__f)())
    { return mem_fun_t<_Ret, _Tp>(__f); }

  template<typename _Ret, typename _Tp>
    inline const_mem_fun_t<_Ret, _Tp>
    mem_fun(_Ret (_Tp::*__f)() const)
    { return const_mem_fun_t<_Ret, _Tp>(__f); }

  template<typename _Ret, typename _Tp>
    inline mem_fun_ref_t<_Ret, _Tp>
    mem_fun_ref(_Ret (_Tp::*__f)())
    { return mem_fun_ref_t<_Ret, _Tp>(__f); }

  template<typename _Ret, typename _Tp>
    inline const_mem_fun_ref_t<_Ret, _Tp>
    mem_fun_ref(_Ret (_Tp::*__f)() const)
    { return const_mem_fun_ref_t<_Ret, _Tp>(__f); }

  template<typename _Ret, typename _Tp, typename _Arg>
    inline mem_fun1_t<_Ret, _Tp, _Arg>
    mem_fun(_Ret (_Tp::*__f)(_Arg))
    { return mem_fun1_t<_Ret, _Tp, _Arg>(__f); }

  template<typename _Ret, typename _Tp, typename _Arg>
    inline const_mem_fun1_t<_Ret, _Tp, _Arg>
    mem_fun(_Ret (_Tp::*__f)(_Arg) const)
    { return const_mem_fun1_t<_Ret, _Tp, _Arg>(__f); }

  template<typename _Ret, typename _Tp, typename _Arg>
    inline mem_fun1_ref_t<_Ret, _Tp, _Arg>
    mem_fun_ref(_Ret (_Tp::*__f)(_Arg))
    { return mem_fun1_ref_t<_Ret, _Tp, _Arg>(__f); }

  template<typename _Ret, typename _Tp, typename _Arg>
    inline const_mem_fun1_ref_t<_Ret, _Tp, _Arg>
    mem_fun_ref(_Ret (_Tp::*__f)(_Arg) const)
    { return const_mem_fun1_ref_t<_Ret, _Tp, _Arg>(__f); }




}


# 1 "/usr/include/c++/5/backward/binders.h" 1 3
# 60 "/usr/include/c++/5/backward/binders.h" 3
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

namespace std __attribute__ ((__visibility__ ("default")))
{

# 107 "/usr/include/c++/5/backward/binders.h" 3
  template<typename _Operation>
    class binder1st
    : public unary_function<typename _Operation::second_argument_type,
       typename _Operation::result_type>
    {
    protected:
      _Operation op;
      typename _Operation::first_argument_type value;

    public:
      binder1st(const _Operation& __x,
  const typename _Operation::first_argument_type& __y)
      : op(__x), value(__y) { }

      typename _Operation::result_type
      operator()(const typename _Operation::second_argument_type& __x) const
      { return op(value, __x); }



      typename _Operation::result_type
      operator()(typename _Operation::second_argument_type& __x) const
      { return op(value, __x); }
    } ;


  template<typename _Operation, typename _Tp>
    inline binder1st<_Operation>
    bind1st(const _Operation& __fn, const _Tp& __x)
    {
      typedef typename _Operation::first_argument_type _Arg1_type;
      return binder1st<_Operation>(__fn, _Arg1_type(__x));
    }


  template<typename _Operation>
    class binder2nd
    : public unary_function<typename _Operation::first_argument_type,
       typename _Operation::result_type>
    {
    protected:
      _Operation op;
      typename _Operation::second_argument_type value;

    public:
      binder2nd(const _Operation& __x,
  const typename _Operation::second_argument_type& __y)
      : op(__x), value(__y) { }

      typename _Operation::result_type
      operator()(const typename _Operation::first_argument_type& __x) const
      { return op(__x, value); }



      typename _Operation::result_type
      operator()(typename _Operation::first_argument_type& __x) const
      { return op(__x, value); }
    } ;


  template<typename _Operation, typename _Tp>
    inline binder2nd<_Operation>
    bind2nd(const _Operation& __fn, const _Tp& __x)
    {
      typedef typename _Operation::second_argument_type _Arg2_type;
      return binder2nd<_Operation>(__fn, _Arg2_type(__x));
    }



}

#pragma GCC diagnostic pop
# 1129 "/usr/include/c++/5/bits/stl_function.h" 2 3
# 49 "/usr/include/c++/5/string" 2 3


# 1 "/usr/include/c++/5/bits/range_access.h" 1 3
# 33 "/usr/include/c++/5/bits/range_access.h" 3
       
# 34 "/usr/include/c++/5/bits/range_access.h" 3
# 52 "/usr/include/c++/5/string" 2 3
# 1 "/usr/include/c++/5/bits/basic_string.h" 1 3
# 37 "/usr/include/c++/5/bits/basic_string.h" 3
       
# 38 "/usr/include/c++/5/bits/basic_string.h" 3

# 1 "/usr/include/c++/5/ext/atomicity.h" 1 3
# 32 "/usr/include/c++/5/ext/atomicity.h" 3
       
# 33 "/usr/include/c++/5/ext/atomicity.h" 3


# 1 "/usr/include/x86_64-linux-gnu/c++/5/bits/gthr.h" 1 3
# 30 "/usr/include/x86_64-linux-gnu/c++/5/bits/gthr.h" 3
#pragma GCC visibility push(default)
# 148 "/usr/include/x86_64-linux-gnu/c++/5/bits/gthr.h" 3
# 1 "/usr/include/x86_64-linux-gnu/c++/5/bits/gthr-default.h" 1 3
# 47 "/usr/include/x86_64-linux-gnu/c++/5/bits/gthr-default.h" 3
typedef pthread_t __gthread_t;
typedef pthread_key_t __gthread_key_t;
typedef pthread_once_t __gthread_once_t;
typedef pthread_mutex_t __gthread_mutex_t;
typedef pthread_mutex_t __gthread_recursive_mutex_t;
typedef pthread_cond_t __gthread_cond_t;
typedef struct timespec __gthread_time_t;
# 101 "/usr/include/x86_64-linux-gnu/c++/5/bits/gthr-default.h" 3
static __typeof(pthread_once) __gthrw_pthread_once __attribute__ ((__weakref__("pthread_once")));
static __typeof(pthread_getspecific) __gthrw_pthread_getspecific __attribute__ ((__weakref__("pthread_getspecific")));
static __typeof(pthread_setspecific) __gthrw_pthread_setspecific __attribute__ ((__weakref__("pthread_setspecific")));

static __typeof(pthread_create) __gthrw_pthread_create __attribute__ ((__weakref__("pthread_create")));
static __typeof(pthread_join) __gthrw_pthread_join __attribute__ ((__weakref__("pthread_join")));
static __typeof(pthread_equal) __gthrw_pthread_equal __attribute__ ((__weakref__("pthread_equal")));
static __typeof(pthread_self) __gthrw_pthread_self __attribute__ ((__weakref__("pthread_self")));
static __typeof(pthread_detach) __gthrw_pthread_detach __attribute__ ((__weakref__("pthread_detach")));

static __typeof(pthread_cancel) __gthrw_pthread_cancel __attribute__ ((__weakref__("pthread_cancel")));

static __typeof(sched_yield) __gthrw_sched_yield __attribute__ ((__weakref__("sched_yield")));

static __typeof(pthread_mutex_lock) __gthrw_pthread_mutex_lock __attribute__ ((__weakref__("pthread_mutex_lock")));
static __typeof(pthread_mutex_trylock) __gthrw_pthread_mutex_trylock __attribute__ ((__weakref__("pthread_mutex_trylock")));

static __typeof(pthread_mutex_timedlock) __gthrw_pthread_mutex_timedlock __attribute__ ((__weakref__("pthread_mutex_timedlock")));

static __typeof(pthread_mutex_unlock) __gthrw_pthread_mutex_unlock __attribute__ ((__weakref__("pthread_mutex_unlock")));
static __typeof(pthread_mutex_init) __gthrw_pthread_mutex_init __attribute__ ((__weakref__("pthread_mutex_init")));
static __typeof(pthread_mutex_destroy) __gthrw_pthread_mutex_destroy __attribute__ ((__weakref__("pthread_mutex_destroy")));

static __typeof(pthread_cond_init) __gthrw_pthread_cond_init __attribute__ ((__weakref__("pthread_cond_init")));
static __typeof(pthread_cond_broadcast) __gthrw_pthread_cond_broadcast __attribute__ ((__weakref__("pthread_cond_broadcast")));
static __typeof(pthread_cond_signal) __gthrw_pthread_cond_signal __attribute__ ((__weakref__("pthread_cond_signal")));
static __typeof(pthread_cond_wait) __gthrw_pthread_cond_wait __attribute__ ((__weakref__("pthread_cond_wait")));
static __typeof(pthread_cond_timedwait) __gthrw_pthread_cond_timedwait __attribute__ ((__weakref__("pthread_cond_timedwait")));
static __typeof(pthread_cond_destroy) __gthrw_pthread_cond_destroy __attribute__ ((__weakref__("pthread_cond_destroy")));

static __typeof(pthread_key_create) __gthrw_pthread_key_create __attribute__ ((__weakref__("pthread_key_create")));
static __typeof(pthread_key_delete) __gthrw_pthread_key_delete __attribute__ ((__weakref__("pthread_key_delete")));
static __typeof(pthread_mutexattr_init) __gthrw_pthread_mutexattr_init __attribute__ ((__weakref__("pthread_mutexattr_init")));
static __typeof(pthread_mutexattr_settype) __gthrw_pthread_mutexattr_settype __attribute__ ((__weakref__("pthread_mutexattr_settype")));
static __typeof(pthread_mutexattr_destroy) __gthrw_pthread_mutexattr_destroy __attribute__ ((__weakref__("pthread_mutexattr_destroy")));
# 236 "/usr/include/x86_64-linux-gnu/c++/5/bits/gthr-default.h" 3
static __typeof(pthread_key_create) __gthrw___pthread_key_create __attribute__ ((__weakref__("__pthread_key_create")));
# 246 "/usr/include/x86_64-linux-gnu/c++/5/bits/gthr-default.h" 3
static inline int
__gthread_active_p (void)
{
  static void *const __gthread_active_ptr
    = __extension__ (void *) &__gthrw___pthread_key_create;
  return __gthread_active_ptr != 0;
}
# 658 "/usr/include/x86_64-linux-gnu/c++/5/bits/gthr-default.h" 3
static inline int
__gthread_create (__gthread_t *__threadid, void *(*__func) (void*),
    void *__args)
{
  return __gthrw_pthread_create (__threadid, __null, __func, __args);
}

static inline int
__gthread_join (__gthread_t __threadid, void **__value_ptr)
{
  return __gthrw_pthread_join (__threadid, __value_ptr);
}

static inline int
__gthread_detach (__gthread_t __threadid)
{
  return __gthrw_pthread_detach (__threadid);
}

static inline int
__gthread_equal (__gthread_t __t1, __gthread_t __t2)
{
  return __gthrw_pthread_equal (__t1, __t2);
}

static inline __gthread_t
__gthread_self (void)
{
  return __gthrw_pthread_self ();
}

static inline int
__gthread_yield (void)
{
  return __gthrw_sched_yield ();
}

static inline int
__gthread_once (__gthread_once_t *__once, void (*__func) (void))
{
  if (__gthread_active_p ())
    return __gthrw_pthread_once (__once, __func);
  else
    return -1;
}

static inline int
__gthread_key_create (__gthread_key_t *__key, void (*__dtor) (void *))
{
  return __gthrw_pthread_key_create (__key, __dtor);
}

static inline int
__gthread_key_delete (__gthread_key_t __key)
{
  return __gthrw_pthread_key_delete (__key);
}

static inline void *
__gthread_getspecific (__gthread_key_t __key)
{
  return __gthrw_pthread_getspecific (__key);
}

static inline int
__gthread_setspecific (__gthread_key_t __key, const void *__ptr)
{
  return __gthrw_pthread_setspecific (__key, __ptr);
}

static inline void
__gthread_mutex_init_function (__gthread_mutex_t *__mutex)
{
  if (__gthread_active_p ())
    __gthrw_pthread_mutex_init (__mutex, __null);
}

static inline int
__gthread_mutex_destroy (__gthread_mutex_t *__mutex)
{
  if (__gthread_active_p ())
    return __gthrw_pthread_mutex_destroy (__mutex);
  else
    return 0;
}

static inline int
__gthread_mutex_lock (__gthread_mutex_t *__mutex)
{
  if (__gthread_active_p ())
    return __gthrw_pthread_mutex_lock (__mutex);
  else
    return 0;
}

static inline int
__gthread_mutex_trylock (__gthread_mutex_t *__mutex)
{
  if (__gthread_active_p ())
    return __gthrw_pthread_mutex_trylock (__mutex);
  else
    return 0;
}


static inline int
__gthread_mutex_timedlock (__gthread_mutex_t *__mutex,
      const __gthread_time_t *__abs_timeout)
{
  if (__gthread_active_p ())
    return __gthrw_pthread_mutex_timedlock (__mutex, __abs_timeout);
  else
    return 0;
}


static inline int
__gthread_mutex_unlock (__gthread_mutex_t *__mutex)
{
  if (__gthread_active_p ())
    return __gthrw_pthread_mutex_unlock (__mutex);
  else
    return 0;
}
# 807 "/usr/include/x86_64-linux-gnu/c++/5/bits/gthr-default.h" 3
static inline int
__gthread_recursive_mutex_lock (__gthread_recursive_mutex_t *__mutex)
{
  return __gthread_mutex_lock (__mutex);
}

static inline int
__gthread_recursive_mutex_trylock (__gthread_recursive_mutex_t *__mutex)
{
  return __gthread_mutex_trylock (__mutex);
}


static inline int
__gthread_recursive_mutex_timedlock (__gthread_recursive_mutex_t *__mutex,
         const __gthread_time_t *__abs_timeout)
{
  return __gthread_mutex_timedlock (__mutex, __abs_timeout);
}


static inline int
__gthread_recursive_mutex_unlock (__gthread_recursive_mutex_t *__mutex)
{
  return __gthread_mutex_unlock (__mutex);
}

static inline int
__gthread_recursive_mutex_destroy (__gthread_recursive_mutex_t *__mutex)
{
  return __gthread_mutex_destroy (__mutex);
}
# 849 "/usr/include/x86_64-linux-gnu/c++/5/bits/gthr-default.h" 3
static inline int
__gthread_cond_broadcast (__gthread_cond_t *__cond)
{
  return __gthrw_pthread_cond_broadcast (__cond);
}

static inline int
__gthread_cond_signal (__gthread_cond_t *__cond)
{
  return __gthrw_pthread_cond_signal (__cond);
}

static inline int
__gthread_cond_wait (__gthread_cond_t *__cond, __gthread_mutex_t *__mutex)
{
  return __gthrw_pthread_cond_wait (__cond, __mutex);
}

static inline int
__gthread_cond_timedwait (__gthread_cond_t *__cond, __gthread_mutex_t *__mutex,
     const __gthread_time_t *__abs_timeout)
{
  return __gthrw_pthread_cond_timedwait (__cond, __mutex, __abs_timeout);
}

static inline int
__gthread_cond_wait_recursive (__gthread_cond_t *__cond,
          __gthread_recursive_mutex_t *__mutex)
{
  return __gthread_cond_wait (__cond, __mutex);
}

static inline int
__gthread_cond_destroy (__gthread_cond_t* __cond)
{
  return __gthrw_pthread_cond_destroy (__cond);
}
# 149 "/usr/include/x86_64-linux-gnu/c++/5/bits/gthr.h" 2 3


#pragma GCC visibility pop
# 36 "/usr/include/c++/5/ext/atomicity.h" 2 3
# 1 "/usr/include/x86_64-linux-gnu/c++/5/bits/atomic_word.h" 1 3
# 32 "/usr/include/x86_64-linux-gnu/c++/5/bits/atomic_word.h" 3
typedef int _Atomic_word;
# 37 "/usr/include/c++/5/ext/atomicity.h" 2 3

namespace __gnu_cxx __attribute__ ((__visibility__ ("default")))
{







  static inline _Atomic_word
  __exchange_and_add(volatile _Atomic_word* __mem, int __val)
  { return __atomic_fetch_add(__mem, __val, 4); }

  static inline void
  __atomic_add(volatile _Atomic_word* __mem, int __val)
  { __atomic_fetch_add(__mem, __val, 4); }
# 64 "/usr/include/c++/5/ext/atomicity.h" 3
  static inline _Atomic_word
  __exchange_and_add_single(_Atomic_word* __mem, int __val)
  {
    _Atomic_word __result = *__mem;
    *__mem += __val;
    return __result;
  }

  static inline void
  __atomic_add_single(_Atomic_word* __mem, int __val)
  { *__mem += __val; }

  static inline _Atomic_word
  __attribute__ ((__unused__))
  __exchange_and_add_dispatch(_Atomic_word* __mem, int __val)
  {

    if (__gthread_active_p())
      return __exchange_and_add(__mem, __val);
    else
      return __exchange_and_add_single(__mem, __val);



  }

  static inline void
  __attribute__ ((__unused__))
  __atomic_add_dispatch(_Atomic_word* __mem, int __val)
  {

    if (__gthread_active_p())
      __atomic_add(__mem, __val);
    else
      __atomic_add_single(__mem, __val);



  }


}
# 40 "/usr/include/c++/5/bits/basic_string.h" 2 3
# 1 "/usr/include/c++/5/ext/alloc_traits.h" 1 3
# 32 "/usr/include/c++/5/ext/alloc_traits.h" 3
       
# 33 "/usr/include/c++/5/ext/alloc_traits.h" 3
# 41 "/usr/include/c++/5/ext/alloc_traits.h" 3
namespace __gnu_cxx __attribute__ ((__visibility__ ("default")))
{

# 94 "/usr/include/c++/5/ext/alloc_traits.h" 3
template<typename _Alloc>
  struct __alloc_traits



  {
    typedef _Alloc allocator_type;
# 172 "/usr/include/c++/5/ext/alloc_traits.h" 3
    typedef typename _Alloc::pointer pointer;
    typedef typename _Alloc::const_pointer const_pointer;
    typedef typename _Alloc::value_type value_type;
    typedef typename _Alloc::reference reference;
    typedef typename _Alloc::const_reference const_reference;
    typedef typename _Alloc::size_type size_type;
    typedef typename _Alloc::difference_type difference_type;

    static pointer
    allocate(_Alloc& __a, size_type __n)
    { return __a.allocate(__n); }

    static void deallocate(_Alloc& __a, pointer __p, size_type __n)
    { __a.deallocate(__p, __n); }

    template<typename _Tp>
      static void construct(_Alloc& __a, pointer __p, const _Tp& __arg)
      { __a.construct(__p, __arg); }

    static void destroy(_Alloc& __a, pointer __p)
    { __a.destroy(__p); }

    static size_type max_size(const _Alloc& __a)
    { return __a.max_size(); }

    static const _Alloc& _S_select_on_copy(const _Alloc& __a) { return __a; }

    static void _S_on_swap(_Alloc& __a, _Alloc& __b)
    {


      std::__alloc_swap<_Alloc>::_S_do_it(__a, __b);
    }

    template<typename _Tp>
      struct rebind
      { typedef typename _Alloc::template rebind<_Tp>::other other; };

  };


}
# 41 "/usr/include/c++/5/bits/basic_string.h" 2 3





namespace std __attribute__ ((__visibility__ ("default")))
{



namespace __cxx11 {
# 70 "/usr/include/c++/5/bits/basic_string.h" 3
  template<typename _CharT, typename _Traits, typename _Alloc>
    class basic_string
    {
      typedef typename __gnu_cxx::__alloc_traits<_Alloc>::template
 rebind<_CharT>::other _Char_alloc_type;
      typedef __gnu_cxx::__alloc_traits<_Char_alloc_type> _Alloc_traits;


    public:
      typedef _Traits traits_type;
      typedef typename _Traits::char_type value_type;
      typedef _Char_alloc_type allocator_type;
      typedef typename _Alloc_traits::size_type size_type;
      typedef typename _Alloc_traits::difference_type difference_type;
      typedef typename _Alloc_traits::reference reference;
      typedef typename _Alloc_traits::const_reference const_reference;
      typedef typename _Alloc_traits::pointer pointer;
      typedef typename _Alloc_traits::const_pointer const_pointer;
      typedef __gnu_cxx::__normal_iterator<pointer, basic_string> iterator;
      typedef __gnu_cxx::__normal_iterator<const_pointer, basic_string>
       const_iterator;
      typedef std::reverse_iterator<const_iterator> const_reverse_iterator;
      typedef std::reverse_iterator<iterator> reverse_iterator;


      static const size_type npos = static_cast<size_type>(-1);

    private:


      typedef iterator __const_iterator;





      struct _Alloc_hider : allocator_type
      {
 _Alloc_hider(pointer __dat, const _Alloc& __a = _Alloc())
 : allocator_type(__a), _M_p(__dat) { }

 pointer _M_p;
      };

      _Alloc_hider _M_dataplus;
      size_type _M_string_length;

      enum { _S_local_capacity = 15 / sizeof(_CharT) };

      union
      {
 _CharT _M_local_buf[_S_local_capacity + 1];
 size_type _M_allocated_capacity;
      };

      void
      _M_data(pointer __p)
      { _M_dataplus._M_p = __p; }

      void
      _M_length(size_type __length)
      { _M_string_length = __length; }

      pointer
      _M_data() const
      { return _M_dataplus._M_p; }

      pointer
      _M_local_data()
      {



 return pointer(_M_local_buf);

      }

      const_pointer
      _M_local_data() const
      {



 return const_pointer(_M_local_buf);

      }

      void
      _M_capacity(size_type __capacity)
      { _M_allocated_capacity = __capacity; }

      void
      _M_set_length(size_type __n)
      {
 _M_length(__n);
 traits_type::assign(_M_data()[__n], _CharT());
      }

      bool
      _M_is_local() const
      { return _M_data() == _M_local_data(); }


      pointer
      _M_create(size_type&, size_type);

      void
      _M_dispose()
      {
 if (!_M_is_local())
   _M_destroy(_M_allocated_capacity);
      }

      void
      _M_destroy(size_type __size) throw()
      { _Alloc_traits::deallocate(_M_get_allocator(), _M_data(), __size + 1); }



      template<typename _InIterator>
        void
        _M_construct_aux(_InIterator __beg, _InIterator __end,
    std::__false_type)
 {
          typedef typename iterator_traits<_InIterator>::iterator_category _Tag;
          _M_construct(__beg, __end, _Tag());
 }



      template<typename _Integer>
        void
        _M_construct_aux(_Integer __beg, _Integer __end, std::__true_type)
 { _M_construct_aux_2(static_cast<size_type>(__beg), __end); }

      void
      _M_construct_aux_2(size_type __req, _CharT __c)
      { _M_construct(__req, __c); }

      template<typename _InIterator>
        void
        _M_construct(_InIterator __beg, _InIterator __end)
 {
   typedef typename std::__is_integer<_InIterator>::__type _Integral;
   _M_construct_aux(__beg, __end, _Integral());
        }


      template<typename _InIterator>
        void
        _M_construct(_InIterator __beg, _InIterator __end,
       std::input_iterator_tag);



      template<typename _FwdIterator>
        void
        _M_construct(_FwdIterator __beg, _FwdIterator __end,
       std::forward_iterator_tag);

      void
      _M_construct(size_type __req, _CharT __c);

      allocator_type&
      _M_get_allocator()
      { return _M_dataplus; }

      const allocator_type&
      _M_get_allocator() const
      { return _M_dataplus; }

    private:
# 257 "/usr/include/c++/5/bits/basic_string.h" 3
      size_type
      _M_check(size_type __pos, const char* __s) const
      {
 if (__pos > this->size())
   __throw_out_of_range_fmt(("%s: __pos (which is %zu) > " "this->size() (which is %zu)")
                                         ,
       __s, __pos, this->size());
 return __pos;
      }

      void
      _M_check_length(size_type __n1, size_type __n2, const char* __s) const
      {
 if (this->max_size() - (this->size() - __n1) < __n2)
   __throw_length_error((__s));
      }



      size_type
      _M_limit(size_type __pos, size_type __off) const
      {
 const bool __testoff = __off < this->size() - __pos;
 return __testoff ? __off : this->size() - __pos;
      }


      bool
      _M_disjunct(const _CharT* __s) const
      {
 return (less<const _CharT*>()(__s, _M_data())
  || less<const _CharT*>()(_M_data() + this->size(), __s));
      }



      static void
      _S_copy(_CharT* __d, const _CharT* __s, size_type __n)
      {
 if (__n == 1)
   traits_type::assign(*__d, *__s);
 else
   traits_type::copy(__d, __s, __n);
      }

      static void
      _S_move(_CharT* __d, const _CharT* __s, size_type __n)
      {
 if (__n == 1)
   traits_type::assign(*__d, *__s);
 else
   traits_type::move(__d, __s, __n);
      }

      static void
      _S_assign(_CharT* __d, size_type __n, _CharT __c)
      {
 if (__n == 1)
   traits_type::assign(*__d, __c);
 else
   traits_type::assign(__d, __n, __c);
      }



      template<class _Iterator>
        static void
        _S_copy_chars(_CharT* __p, _Iterator __k1, _Iterator __k2)
        {
   for (; __k1 != __k2; ++__k1, ++__p)
     traits_type::assign(*__p, *__k1);
 }

      static void
      _S_copy_chars(_CharT* __p, iterator __k1, iterator __k2)
      { _S_copy_chars(__p, __k1.base(), __k2.base()); }

      static void
      _S_copy_chars(_CharT* __p, const_iterator __k1, const_iterator __k2)
     
      { _S_copy_chars(__p, __k1.base(), __k2.base()); }

      static void
      _S_copy_chars(_CharT* __p, _CharT* __k1, _CharT* __k2)
      { _S_copy(__p, __k1, __k2 - __k1); }

      static void
      _S_copy_chars(_CharT* __p, const _CharT* __k1, const _CharT* __k2)
     
      { _S_copy(__p, __k1, __k2 - __k1); }

      static int
      _S_compare(size_type __n1, size_type __n2)
      {
 const difference_type __d = difference_type(__n1 - __n2);

 if (__d > __gnu_cxx::__numeric_traits<int>::__max)
   return __gnu_cxx::__numeric_traits<int>::__max;
 else if (__d < __gnu_cxx::__numeric_traits<int>::__min)
   return __gnu_cxx::__numeric_traits<int>::__min;
 else
   return int(__d);
      }

      void
      _M_assign(const basic_string& __rcs);

      void
      _M_mutate(size_type __pos, size_type __len1, const _CharT* __s,
  size_type __len2);

      void
      _M_erase(size_type __pos, size_type __n);

    public:







      basic_string()



      : _M_dataplus(_M_local_data())
      { _M_set_length(0); }




      explicit
      basic_string(const _Alloc& __a)
      : _M_dataplus(_M_local_data(), __a)
      { _M_set_length(0); }





      basic_string(const basic_string& __str)
      : _M_dataplus(_M_local_data(), __str._M_get_allocator())
      { _M_construct(__str._M_data(), __str._M_data() + __str.length()); }
# 410 "/usr/include/c++/5/bits/basic_string.h" 3
      basic_string(const basic_string& __str, size_type __pos,
     size_type __n = npos)
      : _M_dataplus(_M_local_data())
      {
 const _CharT* __start = __str._M_data()
   + __str._M_check(__pos, "basic_string::basic_string");
 _M_construct(__start, __start + __str._M_limit(__pos, __n));
      }
# 426 "/usr/include/c++/5/bits/basic_string.h" 3
      basic_string(const basic_string& __str, size_type __pos,
     size_type __n, const _Alloc& __a)
      : _M_dataplus(_M_local_data(), __a)
      {
 const _CharT* __start
   = __str._M_data() + __str._M_check(__pos, "string::string");
 _M_construct(__start, __start + __str._M_limit(__pos, __n));
      }
# 444 "/usr/include/c++/5/bits/basic_string.h" 3
      basic_string(const _CharT* __s, size_type __n,
     const _Alloc& __a = _Alloc())
      : _M_dataplus(_M_local_data(), __a)
      { _M_construct(__s, __s + __n); }






      basic_string(const _CharT* __s, const _Alloc& __a = _Alloc())
      : _M_dataplus(_M_local_data(), __a)
      { _M_construct(__s, __s ? __s + traits_type::length(__s) : __s+npos); }







      basic_string(size_type __n, _CharT __c, const _Alloc& __a = _Alloc())
      : _M_dataplus(_M_local_data(), __a)
      { _M_construct(__n, __c); }
# 532 "/usr/include/c++/5/bits/basic_string.h" 3
      template<typename _InputIterator>

        basic_string(_InputIterator __beg, _InputIterator __end,
       const _Alloc& __a = _Alloc())
 : _M_dataplus(_M_local_data(), __a)
 { _M_construct(__beg, __end); }




      ~basic_string()
      { _M_dispose(); }





      basic_string&
      operator=(const basic_string& __str)
      { return this->assign(__str); }





      basic_string&
      operator=(const _CharT* __s)
      { return this->assign(__s); }
# 568 "/usr/include/c++/5/bits/basic_string.h" 3
      basic_string&
      operator=(_CharT __c)
      {
 this->assign(1, __c);
 return *this;
      }
# 610 "/usr/include/c++/5/bits/basic_string.h" 3
      iterator
      begin()
      { return iterator(_M_data()); }





      const_iterator
      begin() const
      { return const_iterator(_M_data()); }





      iterator
      end()
      { return iterator(_M_data() + this->size()); }





      const_iterator
      end() const
      { return const_iterator(_M_data() + this->size()); }






      reverse_iterator
      rbegin()
      { return reverse_iterator(this->end()); }






      const_reverse_iterator
      rbegin() const
      { return const_reverse_iterator(this->end()); }






      reverse_iterator
      rend()
      { return reverse_iterator(this->begin()); }






      const_reverse_iterator
      rend() const
      { return const_reverse_iterator(this->begin()); }
# 710 "/usr/include/c++/5/bits/basic_string.h" 3
    public:



      size_type
      size() const
      { return _M_string_length; }



      size_type
      length() const
      { return _M_string_length; }


      size_type
      max_size() const
      { return (_Alloc_traits::max_size(_M_get_allocator()) - 1) / 2; }
# 739 "/usr/include/c++/5/bits/basic_string.h" 3
      void
      resize(size_type __n, _CharT __c);
# 752 "/usr/include/c++/5/bits/basic_string.h" 3
      void
      resize(size_type __n)
      { this->resize(__n, _CharT()); }
# 777 "/usr/include/c++/5/bits/basic_string.h" 3
      size_type
      capacity() const
      {
 return _M_is_local() ? size_type(_S_local_capacity)
                      : _M_allocated_capacity;
      }
# 801 "/usr/include/c++/5/bits/basic_string.h" 3
      void
      reserve(size_type __res_arg = 0);




      void
      clear()
      { _M_set_length(0); }





      bool
      empty() const
      { return this->size() == 0; }
# 830 "/usr/include/c++/5/bits/basic_string.h" 3
      const_reference
      operator[] (size_type __pos) const
      {
 ;
 return _M_data()[__pos];
      }
# 847 "/usr/include/c++/5/bits/basic_string.h" 3
      reference
      operator[](size_type __pos)
      {


 ;

 ;
 return _M_data()[__pos];
      }
# 868 "/usr/include/c++/5/bits/basic_string.h" 3
      const_reference
      at(size_type __n) const
      {
 if (__n >= this->size())
   __throw_out_of_range_fmt(("basic_string::at: __n " "(which is %zu) >= this->size() " "(which is %zu)")

                            ,
       __n, this->size());
 return _M_data()[__n];
      }
# 889 "/usr/include/c++/5/bits/basic_string.h" 3
      reference
      at(size_type __n)
      {
 if (__n >= size())
   __throw_out_of_range_fmt(("basic_string::at: __n " "(which is %zu) >= this->size() " "(which is %zu)")

                            ,
       __n, this->size());
 return _M_data()[__n];
      }
# 940 "/usr/include/c++/5/bits/basic_string.h" 3
      basic_string&
      operator+=(const basic_string& __str)
      { return this->append(__str); }






      basic_string&
      operator+=(const _CharT* __s)
      { return this->append(__s); }






      basic_string&
      operator+=(_CharT __c)
      {
 this->push_back(__c);
 return *this;
      }
# 981 "/usr/include/c++/5/bits/basic_string.h" 3
      basic_string&
      append(const basic_string& __str)
      { return _M_append(__str._M_data(), __str.size()); }
# 998 "/usr/include/c++/5/bits/basic_string.h" 3
      basic_string&
      append(const basic_string& __str, size_type __pos, size_type __n)
      { return _M_append(__str._M_data()
    + __str._M_check(__pos, "basic_string::append"),
    __str._M_limit(__pos, __n)); }







      basic_string&
      append(const _CharT* __s, size_type __n)
      {
 ;
 _M_check_length(size_type(0), __n, "basic_string::append");
 return _M_append(__s, __n);
      }






      basic_string&
      append(const _CharT* __s)
      {
 ;
 const size_type __n = traits_type::length(__s);
 _M_check_length(size_type(0), __n, "basic_string::append");
 return _M_append(__s, __n);
      }
# 1040 "/usr/include/c++/5/bits/basic_string.h" 3
      basic_string&
      append(size_type __n, _CharT __c)
      { return _M_replace_aux(this->size(), size_type(0), __n, __c); }
# 1067 "/usr/include/c++/5/bits/basic_string.h" 3
      template<class _InputIterator>

        basic_string&
        append(_InputIterator __first, _InputIterator __last)
        { return this->replace(end(), end(), __first, __last); }





      void
      push_back(_CharT __c)
      {
 const size_type __size = this->size();
 if (__size + 1 > this->capacity())
   this->_M_mutate(__size, size_type(0), 0, size_type(1));
 traits_type::assign(this->_M_data()[__size], __c);
 this->_M_set_length(__size + 1);
      }






      basic_string&
      assign(const basic_string& __str)
      {
 this->_M_assign(__str);
 return *this;
      }
# 1130 "/usr/include/c++/5/bits/basic_string.h" 3
      basic_string&
      assign(const basic_string& __str, size_type __pos, size_type __n)
      { return _M_replace(size_type(0), this->size(), __str._M_data()
     + __str._M_check(__pos, "basic_string::assign"),
     __str._M_limit(__pos, __n)); }
# 1146 "/usr/include/c++/5/bits/basic_string.h" 3
      basic_string&
      assign(const _CharT* __s, size_type __n)
      {
 ;
 return _M_replace(size_type(0), this->size(), __s, __n);
      }
# 1162 "/usr/include/c++/5/bits/basic_string.h" 3
      basic_string&
      assign(const _CharT* __s)
      {
 ;
 return _M_replace(size_type(0), this->size(), __s,
     traits_type::length(__s));
      }
# 1179 "/usr/include/c++/5/bits/basic_string.h" 3
      basic_string&
      assign(size_type __n, _CharT __c)
      { return _M_replace_aux(size_type(0), this->size(), __n, __c); }
# 1195 "/usr/include/c++/5/bits/basic_string.h" 3
      template<class _InputIterator>

        basic_string&
        assign(_InputIterator __first, _InputIterator __last)
        { return this->replace(begin(), end(), __first, __last); }
# 1250 "/usr/include/c++/5/bits/basic_string.h" 3
      void
      insert(iterator __p, size_type __n, _CharT __c)
      { this->replace(__p, __p, __n, __c); }
# 1293 "/usr/include/c++/5/bits/basic_string.h" 3
      template<class _InputIterator>
        void
        insert(iterator __p, _InputIterator __beg, _InputIterator __end)
        { this->replace(__p, __p, __beg, __end); }
# 1326 "/usr/include/c++/5/bits/basic_string.h" 3
      basic_string&
      insert(size_type __pos1, const basic_string& __str)
      { return this->replace(__pos1, size_type(0),
        __str._M_data(), __str.size()); }
# 1349 "/usr/include/c++/5/bits/basic_string.h" 3
      basic_string&
      insert(size_type __pos1, const basic_string& __str,
      size_type __pos2, size_type __n)
      { return this->replace(__pos1, size_type(0), __str._M_data()
        + __str._M_check(__pos2, "basic_string::insert"),
        __str._M_limit(__pos2, __n)); }
# 1372 "/usr/include/c++/5/bits/basic_string.h" 3
      basic_string&
      insert(size_type __pos, const _CharT* __s, size_type __n)
      { return this->replace(__pos, size_type(0), __s, __n); }
# 1391 "/usr/include/c++/5/bits/basic_string.h" 3
      basic_string&
      insert(size_type __pos, const _CharT* __s)
      {
 ;
 return this->replace(__pos, size_type(0), __s,
        traits_type::length(__s));
      }
# 1415 "/usr/include/c++/5/bits/basic_string.h" 3
      basic_string&
      insert(size_type __pos, size_type __n, _CharT __c)
      { return _M_replace_aux(_M_check(__pos, "basic_string::insert"),
         size_type(0), __n, __c); }
# 1433 "/usr/include/c++/5/bits/basic_string.h" 3
      iterator
      insert(__const_iterator __p, _CharT __c)
      {
 ;
 const size_type __pos = __p - begin();
 _M_replace_aux(__pos, size_type(0), size_type(1), __c);
 return iterator(_M_data() + __pos);
      }
# 1457 "/usr/include/c++/5/bits/basic_string.h" 3
      basic_string&
      erase(size_type __pos = 0, size_type __n = npos)
      {
 this->_M_erase(_M_check(__pos, "basic_string::erase"),
         _M_limit(__pos, __n));
 return *this;
      }
# 1473 "/usr/include/c++/5/bits/basic_string.h" 3
      iterator
      erase(__const_iterator __position)
      {

                           ;
 const size_type __pos = __position - begin();
 this->_M_erase(__pos, size_type(1));
 return iterator(_M_data() + __pos);
      }
# 1492 "/usr/include/c++/5/bits/basic_string.h" 3
      iterator
      erase(__const_iterator __first, __const_iterator __last)
      {

                        ;
        const size_type __pos = __first - begin();
 this->_M_erase(__pos, __last - __first);
 return iterator(this->_M_data() + __pos);
      }
# 1530 "/usr/include/c++/5/bits/basic_string.h" 3
      basic_string&
      replace(size_type __pos, size_type __n, const basic_string& __str)
      { return this->replace(__pos, __n, __str._M_data(), __str.size()); }
# 1552 "/usr/include/c++/5/bits/basic_string.h" 3
      basic_string&
      replace(size_type __pos1, size_type __n1, const basic_string& __str,
       size_type __pos2, size_type __n2)
      { return this->replace(__pos1, __n1, __str._M_data()
        + __str._M_check(__pos2, "basic_string::replace"),
        __str._M_limit(__pos2, __n2)); }
# 1577 "/usr/include/c++/5/bits/basic_string.h" 3
      basic_string&
      replace(size_type __pos, size_type __n1, const _CharT* __s,
       size_type __n2)
      {
 ;
 return _M_replace(_M_check(__pos, "basic_string::replace"),
     _M_limit(__pos, __n1), __s, __n2);
      }
# 1602 "/usr/include/c++/5/bits/basic_string.h" 3
      basic_string&
      replace(size_type __pos, size_type __n1, const _CharT* __s)
      {
 ;
 return this->replace(__pos, __n1, __s, traits_type::length(__s));
      }
# 1626 "/usr/include/c++/5/bits/basic_string.h" 3
      basic_string&
      replace(size_type __pos, size_type __n1, size_type __n2, _CharT __c)
      { return _M_replace_aux(_M_check(__pos, "basic_string::replace"),
         _M_limit(__pos, __n1), __n2, __c); }
# 1644 "/usr/include/c++/5/bits/basic_string.h" 3
      basic_string&
      replace(__const_iterator __i1, __const_iterator __i2,
       const basic_string& __str)
      { return this->replace(__i1, __i2, __str._M_data(), __str.size()); }
# 1664 "/usr/include/c++/5/bits/basic_string.h" 3
      basic_string&
      replace(__const_iterator __i1, __const_iterator __i2,
       const _CharT* __s, size_type __n)
      {

                      ;
 return this->replace(__i1 - begin(), __i2 - __i1, __s, __n);
      }
# 1686 "/usr/include/c++/5/bits/basic_string.h" 3
      basic_string&
      replace(__const_iterator __i1, __const_iterator __i2, const _CharT* __s)
      {
 ;
 return this->replace(__i1, __i2, __s, traits_type::length(__s));
      }
# 1707 "/usr/include/c++/5/bits/basic_string.h" 3
      basic_string&
      replace(__const_iterator __i1, __const_iterator __i2, size_type __n,
       _CharT __c)
      {

                      ;
 return _M_replace_aux(__i1 - begin(), __i2 - __i1, __n, __c);
      }
# 1745 "/usr/include/c++/5/bits/basic_string.h" 3
      template<class _InputIterator>



        basic_string&

        replace(iterator __i1, iterator __i2,
  _InputIterator __k1, _InputIterator __k2)
        {
  
                        ;
   ;
   typedef typename std::__is_integer<_InputIterator>::__type _Integral;
   return _M_replace_dispatch(__i1, __i2, __k1, __k2, _Integral());
 }




      basic_string&
      replace(__const_iterator __i1, __const_iterator __i2,
       _CharT* __k1, _CharT* __k2)
      {

                      ;
 ;
 return this->replace(__i1 - begin(), __i2 - __i1,
        __k1, __k2 - __k1);
      }

      basic_string&
      replace(__const_iterator __i1, __const_iterator __i2,
       const _CharT* __k1, const _CharT* __k2)
      {

                      ;
 ;
 return this->replace(__i1 - begin(), __i2 - __i1,
        __k1, __k2 - __k1);
      }

      basic_string&
      replace(__const_iterator __i1, __const_iterator __i2,
       iterator __k1, iterator __k2)
      {

                      ;
 ;
 return this->replace(__i1 - begin(), __i2 - __i1,
        __k1.base(), __k2 - __k1);
      }

      basic_string&
      replace(__const_iterator __i1, __const_iterator __i2,
       const_iterator __k1, const_iterator __k2)
      {

                      ;
 ;
 return this->replace(__i1 - begin(), __i2 - __i1,
        __k1.base(), __k2 - __k1);
      }
# 1828 "/usr/include/c++/5/bits/basic_string.h" 3
    private:
      template<class _Integer>
 basic_string&
 _M_replace_dispatch(const_iterator __i1, const_iterator __i2,
       _Integer __n, _Integer __val, __true_type)
        { return _M_replace_aux(__i1 - begin(), __i2 - __i1, __n, __val); }

      template<class _InputIterator>
 basic_string&
 _M_replace_dispatch(const_iterator __i1, const_iterator __i2,
       _InputIterator __k1, _InputIterator __k2,
       __false_type);

      basic_string&
      _M_replace_aux(size_type __pos1, size_type __n1, size_type __n2,
       _CharT __c);

      basic_string&
      _M_replace(size_type __pos, size_type __len1, const _CharT* __s,
   const size_type __len2);

      basic_string&
      _M_append(const _CharT* __s, size_type __n);

    public:
# 1866 "/usr/include/c++/5/bits/basic_string.h" 3
      size_type
      copy(_CharT* __s, size_type __n, size_type __pos = 0) const;
# 1876 "/usr/include/c++/5/bits/basic_string.h" 3
      void
      swap(basic_string& __s) ;
# 1886 "/usr/include/c++/5/bits/basic_string.h" 3
      const _CharT*
      c_str() const
      { return _M_data(); }







      const _CharT*
      data() const
      { return _M_data(); }




      allocator_type
      get_allocator() const
      { return _M_get_allocator(); }
# 1919 "/usr/include/c++/5/bits/basic_string.h" 3
      size_type
      find(const _CharT* __s, size_type __pos, size_type __n) const;
# 1932 "/usr/include/c++/5/bits/basic_string.h" 3
      size_type
      find(const basic_string& __str, size_type __pos = 0) const

      { return this->find(__str.data(), __pos, __str.size()); }
# 1947 "/usr/include/c++/5/bits/basic_string.h" 3
      size_type
      find(const _CharT* __s, size_type __pos = 0) const
      {
 ;
 return this->find(__s, __pos, traits_type::length(__s));
      }
# 1964 "/usr/include/c++/5/bits/basic_string.h" 3
      size_type
      find(_CharT __c, size_type __pos = 0) const ;
# 1977 "/usr/include/c++/5/bits/basic_string.h" 3
      size_type
      rfind(const basic_string& __str, size_type __pos = npos) const

      { return this->rfind(__str.data(), __pos, __str.size()); }
# 1994 "/usr/include/c++/5/bits/basic_string.h" 3
      size_type
      rfind(const _CharT* __s, size_type __pos, size_type __n) const;
# 2007 "/usr/include/c++/5/bits/basic_string.h" 3
      size_type
      rfind(const _CharT* __s, size_type __pos = npos) const
      {
 ;
 return this->rfind(__s, __pos, traits_type::length(__s));
      }
# 2024 "/usr/include/c++/5/bits/basic_string.h" 3
      size_type
      rfind(_CharT __c, size_type __pos = npos) const ;
# 2038 "/usr/include/c++/5/bits/basic_string.h" 3
      size_type
      find_first_of(const basic_string& __str, size_type __pos = 0) const

      { return this->find_first_of(__str.data(), __pos, __str.size()); }
# 2055 "/usr/include/c++/5/bits/basic_string.h" 3
      size_type
      find_first_of(const _CharT* __s, size_type __pos, size_type __n) const;
# 2068 "/usr/include/c++/5/bits/basic_string.h" 3
      size_type
      find_first_of(const _CharT* __s, size_type __pos = 0) const
      {
 ;
 return this->find_first_of(__s, __pos, traits_type::length(__s));
      }
# 2087 "/usr/include/c++/5/bits/basic_string.h" 3
      size_type
      find_first_of(_CharT __c, size_type __pos = 0) const
      { return this->find(__c, __pos); }
# 2102 "/usr/include/c++/5/bits/basic_string.h" 3
      size_type
      find_last_of(const basic_string& __str, size_type __pos = npos) const

      { return this->find_last_of(__str.data(), __pos, __str.size()); }
# 2119 "/usr/include/c++/5/bits/basic_string.h" 3
      size_type
      find_last_of(const _CharT* __s, size_type __pos, size_type __n) const;
# 2132 "/usr/include/c++/5/bits/basic_string.h" 3
      size_type
      find_last_of(const _CharT* __s, size_type __pos = npos) const
      {
 ;
 return this->find_last_of(__s, __pos, traits_type::length(__s));
      }
# 2151 "/usr/include/c++/5/bits/basic_string.h" 3
      size_type
      find_last_of(_CharT __c, size_type __pos = npos) const
      { return this->rfind(__c, __pos); }
# 2165 "/usr/include/c++/5/bits/basic_string.h" 3
      size_type
      find_first_not_of(const basic_string& __str, size_type __pos = 0) const

      { return this->find_first_not_of(__str.data(), __pos, __str.size()); }
# 2182 "/usr/include/c++/5/bits/basic_string.h" 3
      size_type
      find_first_not_of(const _CharT* __s, size_type __pos,
   size_type __n) const;
# 2196 "/usr/include/c++/5/bits/basic_string.h" 3
      size_type
      find_first_not_of(const _CharT* __s, size_type __pos = 0) const
      {
 ;
 return this->find_first_not_of(__s, __pos, traits_type::length(__s));
      }
# 2213 "/usr/include/c++/5/bits/basic_string.h" 3
      size_type
      find_first_not_of(_CharT __c, size_type __pos = 0) const
 ;
# 2228 "/usr/include/c++/5/bits/basic_string.h" 3
      size_type
      find_last_not_of(const basic_string& __str, size_type __pos = npos) const

      { return this->find_last_not_of(__str.data(), __pos, __str.size()); }
# 2245 "/usr/include/c++/5/bits/basic_string.h" 3
      size_type
      find_last_not_of(const _CharT* __s, size_type __pos,
         size_type __n) const;
# 2259 "/usr/include/c++/5/bits/basic_string.h" 3
      size_type
      find_last_not_of(const _CharT* __s, size_type __pos = npos) const
      {
 ;
 return this->find_last_not_of(__s, __pos, traits_type::length(__s));
      }
# 2276 "/usr/include/c++/5/bits/basic_string.h" 3
      size_type
      find_last_not_of(_CharT __c, size_type __pos = npos) const
 ;
# 2292 "/usr/include/c++/5/bits/basic_string.h" 3
      basic_string
      substr(size_type __pos = 0, size_type __n = npos) const
      { return basic_string(*this,
       _M_check(__pos, "basic_string::substr"), __n); }
# 2311 "/usr/include/c++/5/bits/basic_string.h" 3
      int
      compare(const basic_string& __str) const
      {
 const size_type __size = this->size();
 const size_type __osize = __str.size();
 const size_type __len = std::min(__size, __osize);

 int __r = traits_type::compare(_M_data(), __str.data(), __len);
 if (!__r)
   __r = _S_compare(__size, __osize);
 return __r;
      }
# 2343 "/usr/include/c++/5/bits/basic_string.h" 3
      int
      compare(size_type __pos, size_type __n, const basic_string& __str) const;
# 2369 "/usr/include/c++/5/bits/basic_string.h" 3
      int
      compare(size_type __pos1, size_type __n1, const basic_string& __str,
       size_type __pos2, size_type __n2) const;
# 2387 "/usr/include/c++/5/bits/basic_string.h" 3
      int
      compare(const _CharT* __s) const;
# 2411 "/usr/include/c++/5/bits/basic_string.h" 3
      int
      compare(size_type __pos, size_type __n1, const _CharT* __s) const;
# 2438 "/usr/include/c++/5/bits/basic_string.h" 3
      int
      compare(size_type __pos, size_type __n1, const _CharT* __s,
       size_type __n2) const;
  };
}
# 4781 "/usr/include/c++/5/bits/basic_string.h" 3
  template<typename _CharT, typename _Traits, typename _Alloc>
    basic_string<_CharT, _Traits, _Alloc>
    operator+(const basic_string<_CharT, _Traits, _Alloc>& __lhs,
       const basic_string<_CharT, _Traits, _Alloc>& __rhs)
    {
      basic_string<_CharT, _Traits, _Alloc> __str(__lhs);
      __str.append(__rhs);
      return __str;
    }







  template<typename _CharT, typename _Traits, typename _Alloc>
    basic_string<_CharT,_Traits,_Alloc>
    operator+(const _CharT* __lhs,
       const basic_string<_CharT,_Traits,_Alloc>& __rhs);







  template<typename _CharT, typename _Traits, typename _Alloc>
    basic_string<_CharT,_Traits,_Alloc>
    operator+(_CharT __lhs, const basic_string<_CharT,_Traits,_Alloc>& __rhs);







  template<typename _CharT, typename _Traits, typename _Alloc>
    inline basic_string<_CharT, _Traits, _Alloc>
    operator+(const basic_string<_CharT, _Traits, _Alloc>& __lhs,
       const _CharT* __rhs)
    {
      basic_string<_CharT, _Traits, _Alloc> __str(__lhs);
      __str.append(__rhs);
      return __str;
    }







  template<typename _CharT, typename _Traits, typename _Alloc>
    inline basic_string<_CharT, _Traits, _Alloc>
    operator+(const basic_string<_CharT, _Traits, _Alloc>& __lhs, _CharT __rhs)
    {
      typedef basic_string<_CharT, _Traits, _Alloc> __string_type;
      typedef typename __string_type::size_type __size_type;
      __string_type __str(__lhs);
      __str.append(__size_type(1), __rhs);
      return __str;
    }
# 4902 "/usr/include/c++/5/bits/basic_string.h" 3
  template<typename _CharT, typename _Traits, typename _Alloc>
    inline bool
    operator==(const basic_string<_CharT, _Traits, _Alloc>& __lhs,
        const basic_string<_CharT, _Traits, _Alloc>& __rhs)
    { return __lhs.compare(__rhs) == 0; }

  template<typename _CharT>
    inline
    typename __gnu_cxx::__enable_if<__is_char<_CharT>::__value, bool>::__type
    operator==(const basic_string<_CharT>& __lhs,
        const basic_string<_CharT>& __rhs)
    { return (__lhs.size() == __rhs.size()
       && !std::char_traits<_CharT>::compare(__lhs.data(), __rhs.data(),
          __lhs.size())); }







  template<typename _CharT, typename _Traits, typename _Alloc>
    inline bool
    operator==(const _CharT* __lhs,
        const basic_string<_CharT, _Traits, _Alloc>& __rhs)
    { return __rhs.compare(__lhs) == 0; }







  template<typename _CharT, typename _Traits, typename _Alloc>
    inline bool
    operator==(const basic_string<_CharT, _Traits, _Alloc>& __lhs,
        const _CharT* __rhs)
    { return __lhs.compare(__rhs) == 0; }
# 4948 "/usr/include/c++/5/bits/basic_string.h" 3
  template<typename _CharT, typename _Traits, typename _Alloc>
    inline bool
    operator!=(const basic_string<_CharT, _Traits, _Alloc>& __lhs,
        const basic_string<_CharT, _Traits, _Alloc>& __rhs)
    { return !(__lhs == __rhs); }







  template<typename _CharT, typename _Traits, typename _Alloc>
    inline bool
    operator!=(const _CharT* __lhs,
        const basic_string<_CharT, _Traits, _Alloc>& __rhs)
    { return !(__lhs == __rhs); }







  template<typename _CharT, typename _Traits, typename _Alloc>
    inline bool
    operator!=(const basic_string<_CharT, _Traits, _Alloc>& __lhs,
        const _CharT* __rhs)
    { return !(__lhs == __rhs); }
# 4985 "/usr/include/c++/5/bits/basic_string.h" 3
  template<typename _CharT, typename _Traits, typename _Alloc>
    inline bool
    operator<(const basic_string<_CharT, _Traits, _Alloc>& __lhs,
       const basic_string<_CharT, _Traits, _Alloc>& __rhs)
    { return __lhs.compare(__rhs) < 0; }







  template<typename _CharT, typename _Traits, typename _Alloc>
    inline bool
    operator<(const basic_string<_CharT, _Traits, _Alloc>& __lhs,
       const _CharT* __rhs)
    { return __lhs.compare(__rhs) < 0; }







  template<typename _CharT, typename _Traits, typename _Alloc>
    inline bool
    operator<(const _CharT* __lhs,
       const basic_string<_CharT, _Traits, _Alloc>& __rhs)
    { return __rhs.compare(__lhs) > 0; }
# 5022 "/usr/include/c++/5/bits/basic_string.h" 3
  template<typename _CharT, typename _Traits, typename _Alloc>
    inline bool
    operator>(const basic_string<_CharT, _Traits, _Alloc>& __lhs,
       const basic_string<_CharT, _Traits, _Alloc>& __rhs)
    { return __lhs.compare(__rhs) > 0; }







  template<typename _CharT, typename _Traits, typename _Alloc>
    inline bool
    operator>(const basic_string<_CharT, _Traits, _Alloc>& __lhs,
       const _CharT* __rhs)
    { return __lhs.compare(__rhs) > 0; }







  template<typename _CharT, typename _Traits, typename _Alloc>
    inline bool
    operator>(const _CharT* __lhs,
       const basic_string<_CharT, _Traits, _Alloc>& __rhs)
    { return __rhs.compare(__lhs) < 0; }
# 5059 "/usr/include/c++/5/bits/basic_string.h" 3
  template<typename _CharT, typename _Traits, typename _Alloc>
    inline bool
    operator<=(const basic_string<_CharT, _Traits, _Alloc>& __lhs,
        const basic_string<_CharT, _Traits, _Alloc>& __rhs)
    { return __lhs.compare(__rhs) <= 0; }







  template<typename _CharT, typename _Traits, typename _Alloc>
    inline bool
    operator<=(const basic_string<_CharT, _Traits, _Alloc>& __lhs,
        const _CharT* __rhs)
    { return __lhs.compare(__rhs) <= 0; }







  template<typename _CharT, typename _Traits, typename _Alloc>
    inline bool
    operator<=(const _CharT* __lhs,
        const basic_string<_CharT, _Traits, _Alloc>& __rhs)
    { return __rhs.compare(__lhs) >= 0; }
# 5096 "/usr/include/c++/5/bits/basic_string.h" 3
  template<typename _CharT, typename _Traits, typename _Alloc>
    inline bool
    operator>=(const basic_string<_CharT, _Traits, _Alloc>& __lhs,
        const basic_string<_CharT, _Traits, _Alloc>& __rhs)
    { return __lhs.compare(__rhs) >= 0; }







  template<typename _CharT, typename _Traits, typename _Alloc>
    inline bool
    operator>=(const basic_string<_CharT, _Traits, _Alloc>& __lhs,
        const _CharT* __rhs)
    { return __lhs.compare(__rhs) >= 0; }







  template<typename _CharT, typename _Traits, typename _Alloc>
    inline bool
    operator>=(const _CharT* __lhs,
      const basic_string<_CharT, _Traits, _Alloc>& __rhs)
    { return __rhs.compare(__lhs) <= 0; }
# 5133 "/usr/include/c++/5/bits/basic_string.h" 3
  template<typename _CharT, typename _Traits, typename _Alloc>
    inline void
    swap(basic_string<_CharT, _Traits, _Alloc>& __lhs,
  basic_string<_CharT, _Traits, _Alloc>& __rhs)
    { __lhs.swap(__rhs); }
# 5152 "/usr/include/c++/5/bits/basic_string.h" 3
  template<typename _CharT, typename _Traits, typename _Alloc>
    basic_istream<_CharT, _Traits>&
    operator>>(basic_istream<_CharT, _Traits>& __is,
        basic_string<_CharT, _Traits, _Alloc>& __str);

  template<>
    basic_istream<char>&
    operator>>(basic_istream<char>& __is, basic_string<char>& __str);
# 5170 "/usr/include/c++/5/bits/basic_string.h" 3
  template<typename _CharT, typename _Traits, typename _Alloc>
    inline basic_ostream<_CharT, _Traits>&
    operator<<(basic_ostream<_CharT, _Traits>& __os,
        const basic_string<_CharT, _Traits, _Alloc>& __str)
    {


      return __ostream_insert(__os, __str.data(), __str.size());
    }
# 5193 "/usr/include/c++/5/bits/basic_string.h" 3
  template<typename _CharT, typename _Traits, typename _Alloc>
    basic_istream<_CharT, _Traits>&
    getline(basic_istream<_CharT, _Traits>& __is,
     basic_string<_CharT, _Traits, _Alloc>& __str, _CharT __delim);
# 5210 "/usr/include/c++/5/bits/basic_string.h" 3
  template<typename _CharT, typename _Traits, typename _Alloc>
    inline basic_istream<_CharT, _Traits>&
    getline(basic_istream<_CharT, _Traits>& __is,
     basic_string<_CharT, _Traits, _Alloc>& __str)
    { return std::getline(__is, __str, __is.widen('\n')); }
# 5232 "/usr/include/c++/5/bits/basic_string.h" 3
  template<>
    basic_istream<char>&
    getline(basic_istream<char>& __in, basic_string<char>& __str,
     char __delim);


  template<>
    basic_istream<wchar_t>&
    getline(basic_istream<wchar_t>& __in, basic_string<wchar_t>& __str,
     wchar_t __delim);



}
# 53 "/usr/include/c++/5/string" 2 3
# 1 "/usr/include/c++/5/bits/basic_string.tcc" 1 3
# 42 "/usr/include/c++/5/bits/basic_string.tcc" 3
       
# 43 "/usr/include/c++/5/bits/basic_string.tcc" 3



namespace std __attribute__ ((__visibility__ ("default")))
{




  template<typename _CharT, typename _Traits, typename _Alloc>
    const typename basic_string<_CharT, _Traits, _Alloc>::size_type
    basic_string<_CharT, _Traits, _Alloc>::npos;

  template<typename _CharT, typename _Traits, typename _Alloc>
    void
    basic_string<_CharT, _Traits, _Alloc>::
    swap(basic_string& __s)
    {
      if (this == &__s)
 return;




      std::__alloc_swap<allocator_type>::_S_do_it(_M_get_allocator(),
        __s._M_get_allocator());

      if (_M_is_local())
 if (__s._M_is_local())
   {
     if (length() && __s.length())
       {
  _CharT __tmp_data[_S_local_capacity + 1];
  traits_type::copy(__tmp_data, __s._M_local_buf,
      _S_local_capacity + 1);
  traits_type::copy(__s._M_local_buf, _M_local_buf,
      _S_local_capacity + 1);
  traits_type::copy(_M_local_buf, __tmp_data,
      _S_local_capacity + 1);
       }
     else if (__s.length())
       {
  traits_type::copy(_M_local_buf, __s._M_local_buf,
      _S_local_capacity + 1);
  _M_length(__s.length());
  __s._M_set_length(0);
  return;
       }
     else if (length())
       {
  traits_type::copy(__s._M_local_buf, _M_local_buf,
      _S_local_capacity + 1);
  __s._M_length(length());
  _M_set_length(0);
  return;
       }
   }
 else
   {
     const size_type __tmp_capacity = __s._M_allocated_capacity;
     traits_type::copy(__s._M_local_buf, _M_local_buf,
         _S_local_capacity + 1);
     _M_data(__s._M_data());
     __s._M_data(__s._M_local_buf);
     _M_capacity(__tmp_capacity);
   }
      else
 {
   const size_type __tmp_capacity = _M_allocated_capacity;
   if (__s._M_is_local())
     {
       traits_type::copy(_M_local_buf, __s._M_local_buf,
    _S_local_capacity + 1);
       __s._M_data(_M_data());
       _M_data(_M_local_buf);
     }
   else
     {
       pointer __tmp_ptr = _M_data();
       _M_data(__s._M_data());
       __s._M_data(__tmp_ptr);
       _M_capacity(__s._M_allocated_capacity);
     }
   __s._M_capacity(__tmp_capacity);
 }

      const size_type __tmp_length = length();
      _M_length(__s.length());
      __s._M_length(__tmp_length);
    }

  template<typename _CharT, typename _Traits, typename _Alloc>
    typename basic_string<_CharT, _Traits, _Alloc>::pointer
    basic_string<_CharT, _Traits, _Alloc>::
    _M_create(size_type& __capacity, size_type __old_capacity)
    {


      if (__capacity > max_size())
 std::__throw_length_error(("basic_string::_M_create"));




      if (__capacity > __old_capacity && __capacity < 2 * __old_capacity)
 {
   __capacity = 2 * __old_capacity;

   if (__capacity > max_size())
     __capacity = max_size();
 }



      return _Alloc_traits::allocate(_M_get_allocator(), __capacity + 1);
    }





  template<typename _CharT, typename _Traits, typename _Alloc>
    template<typename _InIterator>
      void
      basic_string<_CharT, _Traits, _Alloc>::
      _M_construct(_InIterator __beg, _InIterator __end,
     std::input_iterator_tag)
      {
 size_type __len = 0;
 size_type __capacity = size_type(_S_local_capacity);

 while (__beg != __end && __len < __capacity)
   {
     _M_data()[__len++] = *__beg;
     ++__beg;
   }

 try
   {
     while (__beg != __end)
       {
  if (__len == __capacity)
    {

      __capacity = __len + 1;
      pointer __another = _M_create(__capacity, __len);
      this->_S_copy(__another, _M_data(), __len);
      _M_dispose();
      _M_data(__another);
      _M_capacity(__capacity);
    }
  _M_data()[__len++] = *__beg;
  ++__beg;
       }
   }
 catch(...)
   {
     _M_dispose();
     throw;
   }

 _M_set_length(__len);
      }

  template<typename _CharT, typename _Traits, typename _Alloc>
    template<typename _InIterator>
      void
      basic_string<_CharT, _Traits, _Alloc>::
      _M_construct(_InIterator __beg, _InIterator __end,
     std::forward_iterator_tag)
      {

 if (__gnu_cxx::__is_null_pointer(__beg) && __beg != __end)
   std::__throw_logic_error(("basic_string::" "_M_construct null not valid")
                                         );

 size_type __dnew = static_cast<size_type>(std::distance(__beg, __end));

 if (__dnew > size_type(_S_local_capacity))
   {
     _M_data(_M_create(__dnew, size_type(0)));
     _M_capacity(__dnew);
   }


 try
   { this->_S_copy_chars(_M_data(), __beg, __end); }
 catch(...)
   {
     _M_dispose();
     throw;
   }

 _M_set_length(__dnew);
      }

  template<typename _CharT, typename _Traits, typename _Alloc>
    void
    basic_string<_CharT, _Traits, _Alloc>::
    _M_construct(size_type __n, _CharT __c)
    {
      if (__n > size_type(_S_local_capacity))
 {
   _M_data(_M_create(__n, size_type(0)));
   _M_capacity(__n);
 }

      if (__n)
 this->_S_assign(_M_data(), __n, __c);

      _M_set_length(__n);
    }

  template<typename _CharT, typename _Traits, typename _Alloc>
    void
    basic_string<_CharT, _Traits, _Alloc>::
    _M_assign(const basic_string& __str)
    {
      if (this != &__str)
 {
   const size_type __rsize = __str.length();
   const size_type __capacity = capacity();

   if (__rsize > __capacity)
     {
       size_type __new_capacity = __rsize;
       pointer __tmp = _M_create(__new_capacity, __capacity);
       _M_dispose();
       _M_data(__tmp);
       _M_capacity(__new_capacity);
     }

   if (__rsize)
     this->_S_copy(_M_data(), __str._M_data(), __rsize);

   _M_set_length(__rsize);
 }
    }

  template<typename _CharT, typename _Traits, typename _Alloc>
    void
    basic_string<_CharT, _Traits, _Alloc>::
    reserve(size_type __res)
    {

      if (__res < length())
 __res = length();

      const size_type __capacity = capacity();
      if (__res != __capacity)
 {
   if (__res > __capacity
       || __res > size_type(_S_local_capacity))
     {
       pointer __tmp = _M_create(__res, __capacity);
       this->_S_copy(__tmp, _M_data(), length() + 1);
       _M_dispose();
       _M_data(__tmp);
       _M_capacity(__res);
     }
   else if (!_M_is_local())
     {
       this->_S_copy(_M_local_data(), _M_data(), length() + 1);
       _M_destroy(__capacity);
       _M_data(_M_local_data());
     }
 }
    }

  template<typename _CharT, typename _Traits, typename _Alloc>
    void
    basic_string<_CharT, _Traits, _Alloc>::
    _M_mutate(size_type __pos, size_type __len1, const _CharT* __s,
       size_type __len2)
    {
      const size_type __how_much = length() - __pos - __len1;

      size_type __new_capacity = length() + __len2 - __len1;
      pointer __r = _M_create(__new_capacity, capacity());

      if (__pos)
 this->_S_copy(__r, _M_data(), __pos);
      if (__s && __len2)
 this->_S_copy(__r + __pos, __s, __len2);
      if (__how_much)
 this->_S_copy(__r + __pos + __len2,
        _M_data() + __pos + __len1, __how_much);

      _M_dispose();
      _M_data(__r);
      _M_capacity(__new_capacity);
    }

  template<typename _CharT, typename _Traits, typename _Alloc>
    void
    basic_string<_CharT, _Traits, _Alloc>::
    _M_erase(size_type __pos, size_type __n)
    {
      const size_type __how_much = length() - __pos - __n;

      if (__how_much && __n)
 this->_S_move(_M_data() + __pos, _M_data() + __pos + __n, __how_much);

      _M_set_length(length() - __n);
    }

  template<typename _CharT, typename _Traits, typename _Alloc>
    void
    basic_string<_CharT, _Traits, _Alloc>::
    resize(size_type __n, _CharT __c)
    {
      const size_type __size = this->size();
      if (__size < __n)
 this->append(__n - __size, __c);
      else if (__n < __size)
 this->_M_erase(__n, __size - __n);
    }

  template<typename _CharT, typename _Traits, typename _Alloc>
    basic_string<_CharT, _Traits, _Alloc>&
    basic_string<_CharT, _Traits, _Alloc>::
    _M_append(const _CharT* __s, size_type __n)
    {
      const size_type __len = __n + this->size();

      if (__len <= this->capacity())
 {
   if (__n)
     this->_S_copy(this->_M_data() + this->size(), __s, __n);
 }
      else
 this->_M_mutate(this->size(), size_type(0), __s, __n);

      this->_M_set_length(__len);
      return *this;
    }

  template<typename _CharT, typename _Traits, typename _Alloc>
    template<typename _InputIterator>
      basic_string<_CharT, _Traits, _Alloc>&
      basic_string<_CharT, _Traits, _Alloc>::
      _M_replace_dispatch(const_iterator __i1, const_iterator __i2,
     _InputIterator __k1, _InputIterator __k2,
     std::__false_type)
      {
 const basic_string __s(__k1, __k2);
 const size_type __n1 = __i2 - __i1;
 return _M_replace(__i1 - begin(), __n1, __s._M_data(),
     __s.size());
      }

  template<typename _CharT, typename _Traits, typename _Alloc>
    basic_string<_CharT, _Traits, _Alloc>&
    basic_string<_CharT, _Traits, _Alloc>::
    _M_replace_aux(size_type __pos1, size_type __n1, size_type __n2,
     _CharT __c)
    {
      _M_check_length(__n1, __n2, "basic_string::_M_replace_aux");

      const size_type __old_size = this->size();
      const size_type __new_size = __old_size + __n2 - __n1;

      if (__new_size <= this->capacity())
 {
   _CharT* __p = this->_M_data() + __pos1;

   const size_type __how_much = __old_size - __pos1 - __n1;
   if (__how_much && __n1 != __n2)
     this->_S_move(__p + __n2, __p + __n1, __how_much);
 }
      else
 this->_M_mutate(__pos1, __n1, 0, __n2);

      if (__n2)
 this->_S_assign(this->_M_data() + __pos1, __n2, __c);

      this->_M_set_length(__new_size);
      return *this;
    }

  template<typename _CharT, typename _Traits, typename _Alloc>
    basic_string<_CharT, _Traits, _Alloc>&
    basic_string<_CharT, _Traits, _Alloc>::
    _M_replace(size_type __pos, size_type __len1, const _CharT* __s,
        const size_type __len2)
    {
      _M_check_length(__len1, __len2, "basic_string::_M_replace");

      const size_type __old_size = this->size();
      const size_type __new_size = __old_size + __len2 - __len1;

      if (__new_size <= this->capacity())
 {
   _CharT* __p = this->_M_data() + __pos;

   const size_type __how_much = __old_size - __pos - __len1;
   if (_M_disjunct(__s))
     {
       if (__how_much && __len1 != __len2)
  this->_S_move(__p + __len2, __p + __len1, __how_much);
       if (__len2)
  this->_S_copy(__p, __s, __len2);
     }
   else
     {

       if (__len2 && __len2 <= __len1)
  this->_S_move(__p, __s, __len2);
       if (__how_much && __len1 != __len2)
  this->_S_move(__p + __len2, __p + __len1, __how_much);
       if (__len2 > __len1)
  {
    if (__s + __len2 <= __p + __len1)
      this->_S_move(__p, __s, __len2);
    else if (__s >= __p + __len1)
      this->_S_copy(__p, __s + __len2 - __len1, __len2);
    else
      {
        const size_type __nleft = (__p + __len1) - __s;
        this->_S_move(__p, __s, __nleft);
        this->_S_copy(__p + __nleft, __p + __len2,
        __len2 - __nleft);
      }
  }
     }
 }
      else
 this->_M_mutate(__pos, __len1, __s, __len2);

      this->_M_set_length(__new_size);
      return *this;
    }

  template<typename _CharT, typename _Traits, typename _Alloc>
    typename basic_string<_CharT, _Traits, _Alloc>::size_type
    basic_string<_CharT, _Traits, _Alloc>::
    copy(_CharT* __s, size_type __n, size_type __pos) const
    {
      _M_check(__pos, "basic_string::copy");
      __n = _M_limit(__pos, __n);
      ;
      if (__n)
 _S_copy(__s, _M_data() + __pos, __n);

      return __n;
    }
# 1149 "/usr/include/c++/5/bits/basic_string.tcc" 3
  template<typename _CharT, typename _Traits, typename _Alloc>
    basic_string<_CharT, _Traits, _Alloc>
    operator+(const _CharT* __lhs,
       const basic_string<_CharT, _Traits, _Alloc>& __rhs)
    {
      ;
      typedef basic_string<_CharT, _Traits, _Alloc> __string_type;
      typedef typename __string_type::size_type __size_type;
      const __size_type __len = _Traits::length(__lhs);
      __string_type __str;
      __str.reserve(__len + __rhs.size());
      __str.append(__lhs, __len);
      __str.append(__rhs);
      return __str;
    }

  template<typename _CharT, typename _Traits, typename _Alloc>
    basic_string<_CharT, _Traits, _Alloc>
    operator+(_CharT __lhs, const basic_string<_CharT, _Traits, _Alloc>& __rhs)
    {
      typedef basic_string<_CharT, _Traits, _Alloc> __string_type;
      typedef typename __string_type::size_type __size_type;
      __string_type __str;
      const __size_type __len = __rhs.size();
      __str.reserve(__len + 1);
      __str.append(__size_type(1), __lhs);
      __str.append(__rhs);
      return __str;
    }

  template<typename _CharT, typename _Traits, typename _Alloc>
    typename basic_string<_CharT, _Traits, _Alloc>::size_type
    basic_string<_CharT, _Traits, _Alloc>::
    find(const _CharT* __s, size_type __pos, size_type __n) const
    {
      ;
      const size_type __size = this->size();
      const _CharT* __data = _M_data();

      if (__n == 0)
 return __pos <= __size ? __pos : npos;

      if (__n <= __size)
 {
   for (; __pos <= __size - __n; ++__pos)
     if (traits_type::eq(__data[__pos], __s[0])
  && traits_type::compare(__data + __pos + 1,
     __s + 1, __n - 1) == 0)
       return __pos;
 }
      return npos;
    }

  template<typename _CharT, typename _Traits, typename _Alloc>
    typename basic_string<_CharT, _Traits, _Alloc>::size_type
    basic_string<_CharT, _Traits, _Alloc>::
    find(_CharT __c, size_type __pos) const
    {
      size_type __ret = npos;
      const size_type __size = this->size();
      if (__pos < __size)
 {
   const _CharT* __data = _M_data();
   const size_type __n = __size - __pos;
   const _CharT* __p = traits_type::find(__data + __pos, __n, __c);
   if (__p)
     __ret = __p - __data;
 }
      return __ret;
    }

  template<typename _CharT, typename _Traits, typename _Alloc>
    typename basic_string<_CharT, _Traits, _Alloc>::size_type
    basic_string<_CharT, _Traits, _Alloc>::
    rfind(const _CharT* __s, size_type __pos, size_type __n) const
    {
      ;
      const size_type __size = this->size();
      if (__n <= __size)
 {
   __pos = std::min(size_type(__size - __n), __pos);
   const _CharT* __data = _M_data();
   do
     {
       if (traits_type::compare(__data + __pos, __s, __n) == 0)
  return __pos;
     }
   while (__pos-- > 0);
 }
      return npos;
    }

  template<typename _CharT, typename _Traits, typename _Alloc>
    typename basic_string<_CharT, _Traits, _Alloc>::size_type
    basic_string<_CharT, _Traits, _Alloc>::
    rfind(_CharT __c, size_type __pos) const
    {
      size_type __size = this->size();
      if (__size)
 {
   if (--__size > __pos)
     __size = __pos;
   for (++__size; __size-- > 0; )
     if (traits_type::eq(_M_data()[__size], __c))
       return __size;
 }
      return npos;
    }

  template<typename _CharT, typename _Traits, typename _Alloc>
    typename basic_string<_CharT, _Traits, _Alloc>::size_type
    basic_string<_CharT, _Traits, _Alloc>::
    find_first_of(const _CharT* __s, size_type __pos, size_type __n) const
    {
      ;
      for (; __n && __pos < this->size(); ++__pos)
 {
   const _CharT* __p = traits_type::find(__s, __n, _M_data()[__pos]);
   if (__p)
     return __pos;
 }
      return npos;
    }

  template<typename _CharT, typename _Traits, typename _Alloc>
    typename basic_string<_CharT, _Traits, _Alloc>::size_type
    basic_string<_CharT, _Traits, _Alloc>::
    find_last_of(const _CharT* __s, size_type __pos, size_type __n) const
    {
      ;
      size_type __size = this->size();
      if (__size && __n)
 {
   if (--__size > __pos)
     __size = __pos;
   do
     {
       if (traits_type::find(__s, __n, _M_data()[__size]))
  return __size;
     }
   while (__size-- != 0);
 }
      return npos;
    }

  template<typename _CharT, typename _Traits, typename _Alloc>
    typename basic_string<_CharT, _Traits, _Alloc>::size_type
    basic_string<_CharT, _Traits, _Alloc>::
    find_first_not_of(const _CharT* __s, size_type __pos, size_type __n) const
    {
      ;
      for (; __pos < this->size(); ++__pos)
 if (!traits_type::find(__s, __n, _M_data()[__pos]))
   return __pos;
      return npos;
    }

  template<typename _CharT, typename _Traits, typename _Alloc>
    typename basic_string<_CharT, _Traits, _Alloc>::size_type
    basic_string<_CharT, _Traits, _Alloc>::
    find_first_not_of(_CharT __c, size_type __pos) const
    {
      for (; __pos < this->size(); ++__pos)
 if (!traits_type::eq(_M_data()[__pos], __c))
   return __pos;
      return npos;
    }

  template<typename _CharT, typename _Traits, typename _Alloc>
    typename basic_string<_CharT, _Traits, _Alloc>::size_type
    basic_string<_CharT, _Traits, _Alloc>::
    find_last_not_of(const _CharT* __s, size_type __pos, size_type __n) const
    {
      ;
      size_type __size = this->size();
      if (__size)
 {
   if (--__size > __pos)
     __size = __pos;
   do
     {
       if (!traits_type::find(__s, __n, _M_data()[__size]))
  return __size;
     }
   while (__size--);
 }
      return npos;
    }

  template<typename _CharT, typename _Traits, typename _Alloc>
    typename basic_string<_CharT, _Traits, _Alloc>::size_type
    basic_string<_CharT, _Traits, _Alloc>::
    find_last_not_of(_CharT __c, size_type __pos) const
    {
      size_type __size = this->size();
      if (__size)
 {
   if (--__size > __pos)
     __size = __pos;
   do
     {
       if (!traits_type::eq(_M_data()[__size], __c))
  return __size;
     }
   while (__size--);
 }
      return npos;
    }

  template<typename _CharT, typename _Traits, typename _Alloc>
    int
    basic_string<_CharT, _Traits, _Alloc>::
    compare(size_type __pos, size_type __n, const basic_string& __str) const
    {
      _M_check(__pos, "basic_string::compare");
      __n = _M_limit(__pos, __n);
      const size_type __osize = __str.size();
      const size_type __len = std::min(__n, __osize);
      int __r = traits_type::compare(_M_data() + __pos, __str.data(), __len);
      if (!__r)
 __r = _S_compare(__n, __osize);
      return __r;
    }

  template<typename _CharT, typename _Traits, typename _Alloc>
    int
    basic_string<_CharT, _Traits, _Alloc>::
    compare(size_type __pos1, size_type __n1, const basic_string& __str,
     size_type __pos2, size_type __n2) const
    {
      _M_check(__pos1, "basic_string::compare");
      __str._M_check(__pos2, "basic_string::compare");
      __n1 = _M_limit(__pos1, __n1);
      __n2 = __str._M_limit(__pos2, __n2);
      const size_type __len = std::min(__n1, __n2);
      int __r = traits_type::compare(_M_data() + __pos1,
         __str.data() + __pos2, __len);
      if (!__r)
 __r = _S_compare(__n1, __n2);
      return __r;
    }

  template<typename _CharT, typename _Traits, typename _Alloc>
    int
    basic_string<_CharT, _Traits, _Alloc>::
    compare(const _CharT* __s) const
    {
      ;
      const size_type __size = this->size();
      const size_type __osize = traits_type::length(__s);
      const size_type __len = std::min(__size, __osize);
      int __r = traits_type::compare(_M_data(), __s, __len);
      if (!__r)
 __r = _S_compare(__size, __osize);
      return __r;
    }

  template<typename _CharT, typename _Traits, typename _Alloc>
    int
    basic_string <_CharT, _Traits, _Alloc>::
    compare(size_type __pos, size_type __n1, const _CharT* __s) const
    {
      ;
      _M_check(__pos, "basic_string::compare");
      __n1 = _M_limit(__pos, __n1);
      const size_type __osize = traits_type::length(__s);
      const size_type __len = std::min(__n1, __osize);
      int __r = traits_type::compare(_M_data() + __pos, __s, __len);
      if (!__r)
 __r = _S_compare(__n1, __osize);
      return __r;
    }

  template<typename _CharT, typename _Traits, typename _Alloc>
    int
    basic_string <_CharT, _Traits, _Alloc>::
    compare(size_type __pos, size_type __n1, const _CharT* __s,
     size_type __n2) const
    {
      ;
      _M_check(__pos, "basic_string::compare");
      __n1 = _M_limit(__pos, __n1);
      const size_type __len = std::min(__n1, __n2);
      int __r = traits_type::compare(_M_data() + __pos, __s, __len);
      if (!__r)
 __r = _S_compare(__n1, __n2);
      return __r;
    }


  template<typename _CharT, typename _Traits, typename _Alloc>
    basic_istream<_CharT, _Traits>&
    operator>>(basic_istream<_CharT, _Traits>& __in,
        basic_string<_CharT, _Traits, _Alloc>& __str)
    {
      typedef basic_istream<_CharT, _Traits> __istream_type;
      typedef basic_string<_CharT, _Traits, _Alloc> __string_type;
      typedef typename __istream_type::ios_base __ios_base;
      typedef typename __istream_type::int_type __int_type;
      typedef typename __string_type::size_type __size_type;
      typedef ctype<_CharT> __ctype_type;
      typedef typename __ctype_type::ctype_base __ctype_base;

      __size_type __extracted = 0;
      typename __ios_base::iostate __err = __ios_base::goodbit;
      typename __istream_type::sentry __cerb(__in, false);
      if (__cerb)
 {
   try
     {

       __str.erase();
       _CharT __buf[128];
       __size_type __len = 0;
       const streamsize __w = __in.width();
       const __size_type __n = __w > 0 ? static_cast<__size_type>(__w)
                                : __str.max_size();
       const __ctype_type& __ct = use_facet<__ctype_type>(__in.getloc());
       const __int_type __eof = _Traits::eof();
       __int_type __c = __in.rdbuf()->sgetc();

       while (__extracted < __n
       && !_Traits::eq_int_type(__c, __eof)
       && !__ct.is(__ctype_base::space,
     _Traits::to_char_type(__c)))
  {
    if (__len == sizeof(__buf) / sizeof(_CharT))
      {
        __str.append(__buf, sizeof(__buf) / sizeof(_CharT));
        __len = 0;
      }
    __buf[__len++] = _Traits::to_char_type(__c);
    ++__extracted;
    __c = __in.rdbuf()->snextc();
  }
       __str.append(__buf, __len);

       if (_Traits::eq_int_type(__c, __eof))
  __err |= __ios_base::eofbit;
       __in.width(0);
     }
   catch(__cxxabiv1::__forced_unwind&)
     {
       __in._M_setstate(__ios_base::badbit);
       throw;
     }
   catch(...)
     {



       __in._M_setstate(__ios_base::badbit);
     }
 }

      if (!__extracted)
 __err |= __ios_base::failbit;
      if (__err)
 __in.setstate(__err);
      return __in;
    }

  template<typename _CharT, typename _Traits, typename _Alloc>
    basic_istream<_CharT, _Traits>&
    getline(basic_istream<_CharT, _Traits>& __in,
     basic_string<_CharT, _Traits, _Alloc>& __str, _CharT __delim)
    {
      typedef basic_istream<_CharT, _Traits> __istream_type;
      typedef basic_string<_CharT, _Traits, _Alloc> __string_type;
      typedef typename __istream_type::ios_base __ios_base;
      typedef typename __istream_type::int_type __int_type;
      typedef typename __string_type::size_type __size_type;

      __size_type __extracted = 0;
      const __size_type __n = __str.max_size();
      typename __ios_base::iostate __err = __ios_base::goodbit;
      typename __istream_type::sentry __cerb(__in, true);
      if (__cerb)
 {
   try
     {
       __str.erase();
       const __int_type __idelim = _Traits::to_int_type(__delim);
       const __int_type __eof = _Traits::eof();
       __int_type __c = __in.rdbuf()->sgetc();

       while (__extracted < __n
       && !_Traits::eq_int_type(__c, __eof)
       && !_Traits::eq_int_type(__c, __idelim))
  {
    __str += _Traits::to_char_type(__c);
    ++__extracted;
    __c = __in.rdbuf()->snextc();
  }

       if (_Traits::eq_int_type(__c, __eof))
  __err |= __ios_base::eofbit;
       else if (_Traits::eq_int_type(__c, __idelim))
  {
    ++__extracted;
    __in.rdbuf()->sbumpc();
  }
       else
  __err |= __ios_base::failbit;
     }
   catch(__cxxabiv1::__forced_unwind&)
     {
       __in._M_setstate(__ios_base::badbit);
       throw;
     }
   catch(...)
     {



       __in._M_setstate(__ios_base::badbit);
     }
 }
      if (!__extracted)
 __err |= __ios_base::failbit;
      if (__err)
 __in.setstate(__err);
      return __in;
    }




  extern template class basic_string<char>;
  extern template
    basic_istream<char>&
    operator>>(basic_istream<char>&, string&);
  extern template
    basic_ostream<char>&
    operator<<(basic_ostream<char>&, const string&);
  extern template
    basic_istream<char>&
    getline(basic_istream<char>&, string&, char);
  extern template
    basic_istream<char>&
    getline(basic_istream<char>&, string&);


  extern template class basic_string<wchar_t>;
  extern template
    basic_istream<wchar_t>&
    operator>>(basic_istream<wchar_t>&, wstring&);
  extern template
    basic_ostream<wchar_t>&
    operator<<(basic_ostream<wchar_t>&, const wstring&);
  extern template
    basic_istream<wchar_t>&
    getline(basic_istream<wchar_t>&, wstring&, wchar_t);
  extern template
    basic_istream<wchar_t>&
    getline(basic_istream<wchar_t>&, wstring&);




}
# 54 "/usr/include/c++/5/string" 2 3
# 37 "./nvtx3.hpp" 2
# 517 "./nvtx3.hpp"

# 517 "./nvtx3.hpp"
namespace nvtx3 {
namespace detail {
# 528 "./nvtx3.hpp"
template <typename T>
constexpr auto has_name_member() noexcept -> decltype(T::name, bool())
{
  return (std::is_same<char const*, typename std::decay<decltype(T::name)>::type>::value or
          std::is_same<wchar_t const*, typename std::decay<decltype(T::name)>::type>::value);
}
}
# 590 "./nvtx3.hpp"
class domain {
 public:
  domain(domain const&) = delete;
  domain& operator=(domain const&) = delete;
  domain(domain&&) = delete;
  domain& operator=(domain&&) = delete;
# 641 "./nvtx3.hpp"
  template <typename DomainName>
  static domain const& get()
  {
    static_assert(detail::has_name_member<DomainName>(),
                  "Type used to identify a domain must contain a name member of"
                  "type const char* or const wchar_t*");
    static domain const d{DomainName::name};
    return d;
  }







  operator nvtxDomainHandle_t() const noexcept { return _domain; }
# 670 "./nvtx3.hpp"
  struct global {
  };

 private:
# 682 "./nvtx3.hpp"
  explicit domain(char const* name) noexcept : _domain{nvtxDomainCreateA(name)} {}
# 692 "./nvtx3.hpp"
  explicit domain(wchar_t const* name) noexcept : _domain{nvtxDomainCreateW(name)} {}
# 702 "./nvtx3.hpp"
  explicit domain(std::string const& name) noexcept : domain{name.c_str()} {}
# 712 "./nvtx3.hpp"
  explicit domain(std::wstring const& name) noexcept : domain{name.c_str()} {}
# 722 "./nvtx3.hpp"
  domain() = default;





  ~domain() noexcept { nvtxDomainDestroy(_domain); }

 private:
  nvtxDomainHandle_t const _domain{};
};
# 747 "./nvtx3.hpp"
template <>
inline domain const& domain::get<domain::global>()
{
  static domain const d{};
  return d;
}






struct rgb {

  using component_type = uint8_t;
# 773 "./nvtx3.hpp"
  constexpr rgb(component_type red_, component_type green_, component_type blue_) noexcept
    : red{red_}, green{green_}, blue{blue_}
  {
  }

  component_type const red{};
  component_type const green{};
  component_type const blue{};
};






struct argb final : rgb {
# 801 "./nvtx3.hpp"
  constexpr argb(component_type alpha_,
                 component_type red_,
                 component_type green_,
                 component_type blue_) noexcept
    : rgb{red_, green_, blue_}, alpha{alpha_}
  {
  }

  component_type const alpha{};
};
# 821 "./nvtx3.hpp"
class color {
 public:

  using value_type = uint32_t;
# 843 "./nvtx3.hpp"
  constexpr explicit color(value_type hex_code) noexcept : _value{hex_code} {}







  constexpr color(argb argb) noexcept
    : color{from_bytes_msb_to_lsb(argb.alpha, argb.red, argb.green, argb.blue)}
  {
  }
# 864 "./nvtx3.hpp"
  constexpr color(rgb rgb) noexcept
    : color{from_bytes_msb_to_lsb(0xFF, rgb.red, rgb.green, rgb.blue)}
  {
  }





  constexpr value_type get_value() const noexcept { return _value; }





  constexpr nvtxColorType_t get_type() const noexcept { return _type; }

  color() = delete;
  ~color() = default;
  color(color const&) = default;
  color& operator=(color const&) = default;
  color(color&&) = default;
  color& operator=(color&&) = default;

 private:





  constexpr static value_type from_bytes_msb_to_lsb(uint8_t byte3,
                                                    uint8_t byte2,
                                                    uint8_t byte1,
                                                    uint8_t byte0) noexcept
  {
    return uint32_t{byte3} << 24 | uint32_t{byte2} << 16 | uint32_t{byte1} << 8 | uint32_t{byte0};
  }

  value_type const _value{};
  nvtxColorType_t const _type{NVTX_COLOR_ARGB};
};
# 927 "./nvtx3.hpp"
class category {
 public:

  using id_type = uint32_t;
# 941 "./nvtx3.hpp"
  constexpr explicit category(id_type id) noexcept : id_{id} {}





  constexpr id_type get_id() const noexcept { return id_; }

  category() = delete;
  ~category() = default;
  category(category const&) = default;
  category& operator=(category const&) = default;
  category(category&&) = default;
  category& operator=(category&&) = default;

 private:
  id_type const id_{};
};
# 1009 "./nvtx3.hpp"
template <typename D = domain::global>
class named_category final : public category {
 public:
# 1046 "./nvtx3.hpp"
  template <typename C>
  static named_category<D> const& get() noexcept
  {
    static_assert(detail::has_name_member<C>(),
                  "Type used to name a category must contain a name member.");
    static named_category<D> const category{C::id, C::name};
    return category;
  }
# 1064 "./nvtx3.hpp"
  named_category(id_type id, char const* name) noexcept : category{id}
  {
    nvtxDomainNameCategoryA(domain::get<D>(), get_id(), name);
  };
# 1079 "./nvtx3.hpp"
  named_category(id_type id, wchar_t const* name) noexcept : category{id}
  {
    nvtxDomainNameCategoryW(domain::get<D>(), get_id(), name);
  };
};
# 1131 "./nvtx3.hpp"
template <typename D = domain::global>
class registered_string {
 public:
# 1167 "./nvtx3.hpp"
  template <typename M>
  static registered_string<D> const& get() noexcept
  {
    static registered_string<D> const registered_string{M::message};
    return registered_string;
  }
# 1185 "./nvtx3.hpp"
  explicit registered_string(char const* msg) noexcept
    : handle_{nvtxDomainRegisterStringA(domain::get<D>(), msg)}
  {
  }
# 1201 "./nvtx3.hpp"
  explicit registered_string(std::string const& msg) noexcept : registered_string{msg.c_str()} {}
# 1214 "./nvtx3.hpp"
  explicit registered_string(wchar_t const* msg) noexcept
    : handle_{nvtxDomainRegisterStringW(domain::get<D>(), msg)}
  {
  }
# 1230 "./nvtx3.hpp"
  explicit registered_string(std::wstring const& msg) noexcept : registered_string{msg.c_str()} {}





  nvtxStringHandle_t get_handle() const noexcept { return handle_; }

  registered_string() = delete;
  ~registered_string() = default;
  registered_string(registered_string const&) = default;
  registered_string& operator=(registered_string const&) = default;
  registered_string(registered_string&&) = default;
  registered_string& operator=(registered_string&&) = default;

 private:
  nvtxStringHandle_t const handle_{};

};
# 1287 "./nvtx3.hpp"
class message {
 public:
  using value_type = nvtxMessageValue_t;






  message(char const* msg) noexcept : type_{NVTX_MESSAGE_TYPE_ASCII}
  {
    value_.ascii = msg;
  }






  message(std::string const& msg) noexcept : message{msg.c_str()} {}
# 1316 "./nvtx3.hpp"
  message(std::string&&) = delete;






  message(wchar_t const* msg) noexcept : type_{NVTX_MESSAGE_TYPE_UNICODE}
  {
    value_.unicode = msg;
  }






  message(std::wstring const& msg) noexcept : message{msg.c_str()} {}
# 1343 "./nvtx3.hpp"
  message(std::wstring&&) = delete;
# 1353 "./nvtx3.hpp"
  template <typename D>
  message(registered_string<D> const& msg) noexcept
    : type_{NVTX_MESSAGE_TYPE_REGISTERED}
  {
    value_.registered = msg.get_handle();
  }





  value_type get_value() const noexcept { return value_; }





  nvtxMessageType_t get_type() const noexcept { return type_; }

 private:
  nvtxMessageType_t const type_{};
  nvtxMessageValue_t value_{};
};
# 1394 "./nvtx3.hpp"
class payload {
 public:
  using value_type = typename nvtxEventAttributes_v2::payload_t;






  explicit payload(int64_t value) noexcept
    : type_{NVTX_PAYLOAD_TYPE_INT64}, value_{}
  {
    value_.llValue = value;
  }






  explicit payload(int32_t value) noexcept
    : type_{NVTX_PAYLOAD_TYPE_INT32}, value_{}
  {
    value_.iValue = value;
  }






  explicit payload(uint64_t value) noexcept
    : type_{NVTX_PAYLOAD_TYPE_UNSIGNED_INT64}, value_{}
  {
    value_.ullValue = value;
  }






  explicit payload(uint32_t value) noexcept
    : type_{NVTX_PAYLOAD_TYPE_UNSIGNED_INT32}, value_{}
  {
    value_.uiValue = value;
  }







  explicit payload(float value) noexcept
    : type_{NVTX_PAYLOAD_TYPE_FLOAT}, value_{}
  {
    value_.fValue = value;
  }







  explicit payload(double value) noexcept
    : type_{NVTX_PAYLOAD_TYPE_DOUBLE}, value_{}
  {
    value_.dValue = value;
  }





  value_type get_value() const noexcept { return value_; }





  nvtxPayloadType_t get_type() const noexcept { return type_; }

 private:
  nvtxPayloadType_t const type_;
  value_type value_;
};
# 1544 "./nvtx3.hpp"
class event_attributes {
 public:
  using value_type = nvtxEventAttributes_t;





  constexpr event_attributes() noexcept
    : attributes_{
        3,
        sizeof(nvtxEventAttributes_t),
        0,
        NVTX_COLOR_UNKNOWN,
        0,
        NVTX_PAYLOAD_UNKNOWN,
        0,
        0,
        NVTX_MESSAGE_UNKNOWN,
        0
      }
  {
  }
# 1575 "./nvtx3.hpp"
  template <typename... Args>
  explicit event_attributes(category const& c, Args const&... args) noexcept
    : event_attributes(args...)
  {
    attributes_.category = c.get_id();
  }
# 1589 "./nvtx3.hpp"
  template <typename... Args>
  explicit event_attributes(color const& c, Args const&... args) noexcept
    : event_attributes(args...)
  {
    attributes_.color = c.get_value();
    attributes_.colorType = c.get_type();
  }
# 1604 "./nvtx3.hpp"
  template <typename... Args>
  explicit event_attributes(payload const& p, Args const&... args) noexcept
    : event_attributes(args...)
  {
    attributes_.payload = p.get_value();
    attributes_.payloadType = p.get_type();
  }
# 1619 "./nvtx3.hpp"
  template <typename... Args>
  explicit event_attributes(message const& m, Args const&... args) noexcept
    : event_attributes(args...)
  {
    attributes_.message = m.get_value();
    attributes_.messageType = m.get_type();
  }

  ~event_attributes() = default;
  event_attributes(event_attributes const&) = default;
  event_attributes& operator=(event_attributes const&) = default;
  event_attributes(event_attributes&&) = default;
  event_attributes& operator=(event_attributes&&) = default;





  constexpr value_type const* get() const noexcept { return &attributes_; }

 private:
  value_type attributes_{};
};
# 1690 "./nvtx3.hpp"
template <class D = domain::global>
class domain_thread_range {
 public:
# 1708 "./nvtx3.hpp"
  explicit domain_thread_range(event_attributes const& attr) noexcept
  {
    nvtxDomainRangePushEx(domain::get<D>(), attr.get());
  }
# 1740 "./nvtx3.hpp"
  template <typename First,
            typename... Args,
            typename = typename std::enable_if<
              not std::is_same<event_attributes, typename std::decay<First>>::value>>
  explicit domain_thread_range(First const& first, Args const&... args) noexcept
    : domain_thread_range{event_attributes{first, args...}}
  {
  }






  domain_thread_range() : domain_thread_range{event_attributes{}} {}

  domain_thread_range(domain_thread_range const&) = delete;
  domain_thread_range& operator=(domain_thread_range const&) = delete;
  domain_thread_range(domain_thread_range&&) = delete;
  domain_thread_range& operator=(domain_thread_range&&) = delete;




  ~domain_thread_range() noexcept { nvtxDomainRangePop(domain::get<D>()); }
};





using thread_range = domain_thread_range<>;





struct range_handle {

  using value_type = nvtxRangeId_t;





  constexpr range_handle(value_type id) noexcept : _range_id{id} {}






  constexpr value_type get_value() const noexcept { return _range_id; }

 private:
  value_type _range_id{};
};
# 1823 "./nvtx3.hpp"
template <typename D = domain::global>
range_handle start_range(event_attributes const& attr) noexcept
{
  return range_handle{nvtxDomainRangeStartEx(domain::get<D>(), attr.get())};
}
# 1857 "./nvtx3.hpp"
template <typename First,
          typename... Args,
          typename = typename std::enable_if<
            not std::is_same<event_attributes, typename std::decay<First>>::value>>
range_handle start_range(First const& first, Args const&... args) noexcept
{
  return start_range(event_attributes{first, args...});
}
# 1878 "./nvtx3.hpp"
void end_range(range_handle r) { nvtxRangeEnd(r.get_value()); }
# 1899 "./nvtx3.hpp"
template <typename D = domain::global>
class domain_process_range {
 public:





  explicit domain_process_range(event_attributes const& attr) noexcept : handle_{start_range(attr)}
  {
  }







  template <typename First,
            typename... Args,
            typename = typename std::enable_if<
              not std::is_same<event_attributes, typename std::decay<First>>::value>>
  explicit domain_process_range(First const& first, Args const&... args) noexcept
    : domain_process_range{event_attributes{first, args...}}
  {
  }





  constexpr domain_process_range() noexcept : domain_process_range{event_attributes{}} {}





  ~domain_process_range() noexcept
  {
    if (not moved_from_) { end_range(handle_); }
  }







  domain_process_range(domain_process_range&& other) noexcept : handle_{other.handle_}
  {
    other.moved_from_ = true;
  }
# 1959 "./nvtx3.hpp"
  domain_process_range& operator=(domain_process_range&& other) noexcept
  {
    handle_ = other.handle_;
    other.moved_from_ = true;
  }



  domain_process_range(domain_process_range const&) = delete;



  domain_process_range& operator=(domain_process_range const&) = delete;

 private:
  range_handle handle_;

  bool moved_from_{false};



};





using process_range = domain_process_range<>;
# 2009 "./nvtx3.hpp"
template <typename D = nvtx3::domain::global>
inline void mark(event_attributes const& attr) noexcept
{
  nvtxDomainMarkEx(domain::get<D>(), attr.get());
}

}
# 2 "./main.cpp" 2

int main(){

}
