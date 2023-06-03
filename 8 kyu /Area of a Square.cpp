#include <cmath>
double square_area( double a ) {
  return round( pow( 2 * a / M_PI, 2 ) * 100 ) / 100;
}
