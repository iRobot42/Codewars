#include <cmath>
std::pair<double, double> laser_coord( double h, double a, double l ) {
  const double x{ fmod( cos( a *= M_PI / 180 ) * l, 2 ) }, y{ fmod( sin( a ) * l + h, 2 ) };
  return std::make_pair( std::min( 2 - x , x ), std::min( 2 - y, y ));
}
