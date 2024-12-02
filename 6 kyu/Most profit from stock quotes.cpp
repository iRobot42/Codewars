#include <numeric>
int most_profit( const std::vector< int >& quotes ) {
  return accumulate( quotes.crbegin(), quotes.crend(), 0,
    [ peak{ 0 } ]( const int acc, const int price ) mutable {
      return acc - price + ( peak = std::max( peak, price )); });
}
