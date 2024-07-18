#include <cmath>
bool prime( int n ) {
  for ( int i( sqrt( n )); i > 1; --i )
    if (!( n % i )) return false;
  return n > 1;
}
int nextPrime( int n ) {
  while ( !prime( ++n ));
  return n;
}
