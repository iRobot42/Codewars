#include <numeric>
std::string odd_or_even( const std::vector< int >& v ) {
  return accumulate( v.cbegin(), v.cend(), 0 ) & 1 ? "odd" : "even";
}
