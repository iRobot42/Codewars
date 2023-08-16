#include <cmath>
int pyramid( int n ) {
  return int( sqrt( 8 * n + 1 ) - 1 ) >> 1;
}
