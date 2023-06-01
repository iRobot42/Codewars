#include <cmath>
bool approx_equals( double a, double b ) {
  return fabs( a - b ) < 1e-3;
}
