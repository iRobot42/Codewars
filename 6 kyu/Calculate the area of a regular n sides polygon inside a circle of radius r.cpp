#include <cmath>
double areaOfPolygonInsideCircle( double r, int n ) {
  return round( n * r * r * sin( 2 * M_PI / n ) * 5e2 ) / 1e3;
}
