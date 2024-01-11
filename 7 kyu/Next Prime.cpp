#include <cmath>
bool isPrime( int number ) {
  const int root( sqrt( number ));
  for ( int factor{ 2 }; factor <= root; ++factor )
    if (!( number % factor )) return false;
  return number > 1;
}
int nextPrime( int number ) {
  while ( !isPrime( ++number ));
  return number;
}
