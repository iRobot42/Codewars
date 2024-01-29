#include <cmath>
int findDigit( int num, int nth ) {
  return nth > 0 ? abs( num /= pow( 10, --nth )) % 10 : -1;
}
