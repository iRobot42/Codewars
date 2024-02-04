#include <cmath>
unsigned alexMistakes( unsigned n, unsigned t ) {
  return log2(( t - n * 6 ) / 5 + 1 );
}
