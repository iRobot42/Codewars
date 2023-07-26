#include <cmath>
std::string autoMorphic( int n ) {
  const int d = pow( 10, ceil( log10( n + 1 )));
  return n * n % d == n ? "Automorphic" : "Not!!";
}
