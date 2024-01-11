#include <numeric>
bool invite_more_women( const std::vector< int >& v ) {
  return accumulate( v.cbegin(), v.cend(), 0 ) > 0;
}
