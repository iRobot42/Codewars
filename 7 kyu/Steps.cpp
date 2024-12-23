#include <cmath>
int step( int x, int y ) {
  return ( y -= x ) ? static_cast< int >( sqrt( 4. * y - 1 )) : 0;
}
