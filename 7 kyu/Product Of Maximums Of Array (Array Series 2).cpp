#include <numeric>
int maxProduct( std::vector< int > v, int k ) {
  nth_element( v.begin(), v.begin() + k, v.end(), std::greater() );
  return accumulate( v.cbegin(), v.cbegin() + k, 1, std::multiplies() );
}
