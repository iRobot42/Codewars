#include <numeric>
int sum( std::vector< int > n ) {
  const auto [ min, max ]{ minmax_element( n.cbegin(), n.cend() ) };
  return n.size() < 2 ? 0 : accumulate( n.cbegin(), n.cend(), 0 ) - *min - *max;
}
