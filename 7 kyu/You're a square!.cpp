#include <cmath>
bool is_square( int n ) {
  return !fmod( sqrt( n ), 1 );
}
