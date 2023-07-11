#include <numeric>
#include <set>
int solve( std::vector< int > v ) {
  const std::set s( v.cbegin(), v.cend() );
  return accumulate( s.cbegin(), s.cend(), 0 );
}
