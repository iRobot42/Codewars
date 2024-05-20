#include <numeric>
double ideal_trader( const std::vector< double >& prices ) {
  return inner_product( ++prices.cbegin(), prices.cend(), prices.cbegin(), 1.,
    std::multiplies(), []( auto a, auto b ) { return std::max( a / b, 1. ); });
}
