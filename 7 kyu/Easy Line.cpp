#include <cmath>
struct EasyLine {
  static long long easyLine( int n ) {
    return lgamma( 2 * n + 1 ) - 2 * lgamma( n + 1 ) + .5;
  }
};
