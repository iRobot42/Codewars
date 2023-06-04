#include <cmath>
double distance_between_two_points( const Point& a, const Point& b ) {
  return hypot( a.x - b.x, a.y - b.y );
}
