#include <cmath>
long solve( long n ) {
  for ( long i{ 1 }; i < n; ++i )
    if ( !fmod( sqrt( n + i * i ), 1 ))
      return i * i;
  return -1;
}
