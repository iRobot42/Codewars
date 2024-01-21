#include <cmath>
int minimumPerimeter( int area ) {
  int side( sqrt( area ));
  while ( area % side ) --side;
  return 2 * ( side + area / side );
}
