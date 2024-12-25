#include <cmath>
int step( int x, int y ) {
  return std::max( 0, static_cast< int >( sqrt( 4. * ( y - x ) - 1 )));
}
