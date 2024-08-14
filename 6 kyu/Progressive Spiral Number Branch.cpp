#include <cmath>
int branch( int n ) {
  if ( n < 4 ) return 0;
  const int m( ceil(( sqrt( n ) - 1 ) / 2 ) * 2 );
  return ( n - pow( m - 1, 2 ) - 1 ) / m;
}
