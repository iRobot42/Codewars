#include <cmath>
typedef const std::pair< double, double > Point;
Point barTriang( Point p1, Point p2, Point p3 ) {
  return { round( ( p1.first + p2.first + p3.first ) / 3 * 1e4 ) / 1e4,
           round( ( p1.second + p2.second + p3.second ) / 3 * 1e4 ) / 1e4 };
}
