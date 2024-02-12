#include <numeric>
uint64_t sum_differences_between_products_and_LCMs( const std::vector< std::pair< uint64_t, uint64_t >>& pairs ) {
  return accumulate( pairs.cbegin(), pairs.cend(), uint64_t(), []( auto acc, const auto& p ) {
                     return acc + p.first * p.second - std::lcm( p.first, p.second ); });
}
