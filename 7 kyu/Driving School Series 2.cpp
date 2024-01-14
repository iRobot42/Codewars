#include <cmath>
unsigned cost( unsigned n ) {
  return 30 + ( n > 65 ) * ceil(( n - 65 ) / 30. ) * 10;
}
