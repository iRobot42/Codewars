#include <cmath>
double stack_height_3d( int l ) {
  return l ? --l * sqrt( 2/3. ) + 1 : 0;
}
