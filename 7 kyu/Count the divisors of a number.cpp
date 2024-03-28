#include <cmath>
int divisors( int n ) {
  int r( sqrt( n )), c{};
  for ( int i{ 1 }; i <= r; ++i )
    if (!( n % i )) c += 2;
  return r * r == n ? --c : c;
}
