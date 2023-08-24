#include <numeric>
#include <set>
int maxTriSum( std::vector< int > numbers ) {
  const std::set s( numbers.cbegin(), numbers.cend() );
  return accumulate( prev( s.cend(), 3 ), s.cend(), 0 );
}
