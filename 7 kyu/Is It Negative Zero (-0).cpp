#include <cmath>
bool isNegativeZero( float n ) {
  return !n && std::signbit( n );
}
