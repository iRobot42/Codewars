#include <numeric>
double calcAverage( const std::vector< int >& v ) {
  return accumulate( v.cbegin(), v.cend(), 0.0 ) / v.size();
}
