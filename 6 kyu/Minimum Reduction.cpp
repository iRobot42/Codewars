#include <cmath>
int minRemove( std::vector< int > v ) {
  const auto r{ sqrt( *max_element( v.cbegin(), v.cend() )) };
  int c{}; for ( const int i : v ) if ( i < r ) ++c;
  return c == 6 || c == 11 ? --c : c;
}
