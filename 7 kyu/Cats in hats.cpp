#include <cmath>
#include <iomanip>
struct Kata {
  std::string height( int n ) {
    std::ostringstream ss;
    ss << std::fixed << std::setprecision( 3 )
       << 2e7 * ( 1 - pow( 0.4, ++n )) / 6;
    return ss.str();
  }
};
