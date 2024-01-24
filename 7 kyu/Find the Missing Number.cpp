#include <numeric>
int missingNo( std::vector< int > v ) {
  return 5050 - accumulate( v.cbegin(), v.cend(), 0 );
}
