#include <numeric>
unsigned number( const std::vector< std::pair< int, int >>& busStops ) {
  return accumulate( busStops.cbegin(), busStops.cend(), 0u,
    []( auto acc, const auto& p ){ return acc + p.first - p.second; });
}
