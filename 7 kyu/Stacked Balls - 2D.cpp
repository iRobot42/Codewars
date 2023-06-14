#include <cmath>
double stack_height_2d( int l ) {
  return l ? --l * sqrt( .75 ) + 1 : 0;
}
