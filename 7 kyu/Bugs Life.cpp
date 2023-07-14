#include <cmath>
double shortestDistance( double x, double y, double z ) {
  const double d{ fmax( x, fmax( y, z ))};
  return hypot( d, x + y + z - d );
}
