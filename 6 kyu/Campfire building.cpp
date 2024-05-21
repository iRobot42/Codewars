#include <cmath>
bool is_constructable( long a ) {
  for ( long n( sqrt( a )); n; --n )
    if ( !fmod( sqrt( a - n * n ), 1. ))
      return true;
  return false;
}
