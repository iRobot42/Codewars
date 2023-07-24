#include <cmath>
int friends( int n ) {
  return n > 2 ? log2( --n ) : 0;
}
