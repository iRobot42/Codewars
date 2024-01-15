#include <cmath>
int growingPlant( int u, int d, int f ) {
  return f > u ? ceil(( 1. * f - d ) / ( u - d )) : 1;
}
