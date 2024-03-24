#include <cmath>
namespace Evaporator {
  static int evaporator( double с, double epd, double t ) {
    return log( t / 100 ) / log( 1 - epd / 100 ) + 1;
  }
}
