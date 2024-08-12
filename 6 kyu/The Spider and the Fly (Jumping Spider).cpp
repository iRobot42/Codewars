#include <cmath>
double spider_to_fly( const std::string& spider, const std::string& fly ) {
  const auto a{ stod( spider.substr( 1 ))}, b{ stod( fly.substr( 1 ))}; // for rings > 9
  const auto angle{ M_PI / 4 * abs( spider.front() - fly.front() )}; // in radians
  return sqrt( a * a + b * b - 2 * a * b * cos( angle )); // law of cosines
}
