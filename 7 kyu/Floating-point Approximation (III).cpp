#include <cmath>
double quadratic( double a, double b, double c ) {
  return -2 * c / ( b + sqrt( b * b - 4 * a * c ));
}
