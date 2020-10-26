
#include <benchmark/benchmark.h>

#include <nvtx3/nvtx3.hpp>
#include "daniel.hpp"

/**
 * Measure cost of not reusing the same `event_attributes` object
 */
static void BM_no_attr_reuse(::benchmark::State& state)
{
  // This will construct a default initialized `event_attributes` every iteration
  for (auto _ : state) { nvtx3::thread_range r{}; }
}
BENCHMARK(BM_no_attr_reuse);

/**
 * Test range in the global domain
 */
static void BM_CXX_global_range(::benchmark::State& state)
{
  nvtx3::event_attributes attr{};
  for (auto _ : state) { nvtx3::thread_range r{attr}; }
}
BENCHMARK(BM_CXX_global_range);

static void BM_C_global_range(::benchmark::State& state)
{
  nvtx3::event_attributes attr{};
  for (auto _ : state) {
    nvtxDomainRangePushEx(nullptr, attr.get());
    nvtxDomainRangePop(nullptr);
  }
}
BENCHMARK(BM_C_global_range);

/**
 * Test range in a custom domain
 */
struct my_domain {
  static constexpr char const* name{"my_domain"};
};

static void BM_CXX_scoped_range(::benchmark::State& state)
{
  nvtx3::event_attributes attr{};
  for (auto _ : state) { nvtx3::domain_thread_range<my_domain> r{"this one is dynamic"}; }
}
BENCHMARK(BM_CXX_scoped_range);

NVTX3_DOMAIN( TEST );
static void BM_daniel_scoped_range(::benchmark::State& state)
{
  for (auto _ : state) { daniel::scoped_range tr( TEST, "this one is dynamic" ); }
}
BENCHMARK(BM_daniel_scoped_range);

static void BM_C_scoped_range(::benchmark::State& state)
{
  auto domain = nvtxDomainCreateA("my_domain");
  for (auto _ : state) {
    nvtx3::event_attributes attr{"this one is dynamic"};
    nvtxDomainRangePushEx(domain, attr.get());
    nvtxDomainRangePop(domain);
  }
  nvtxDomainDestroy(domain);
}
BENCHMARK(BM_C_scoped_range);

///< Measure cost of the func range macro
static void BM_func_range(::benchmark::State& state)
{
  for (auto _ : state) { NVTX3_FUNC_RANGE(); }
}
BENCHMARK(BM_func_range);
