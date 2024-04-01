#include <cmath>
double circle_diameter( unsigned sides, unsigned length ) {
  return length / tan( M_PI / sides );
}
