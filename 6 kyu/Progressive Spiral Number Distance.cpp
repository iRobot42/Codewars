#include <cmath>
int distance( int n ) {
  if ( n == 1 ) return 0;
  const int m( ceil( sqrt( n )) / 2 );
  return abs( int( n - pow( 2 * m - 1, 2 )) % ( 2 * m ) - m ) + m;
}
