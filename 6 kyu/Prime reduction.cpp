#include <cmath>
#include <unordered_set>
int solve( int a, int b ) {
  int count{};
  auto is_prime{ []( const int n ){
    for ( int f( sqrt( n )); f > 1; --f )
      if (!( n % f )) return false;
    return n > 1; }};
  do if ( is_prime( a )) {
    int num{ a };
    std::unordered_set sums{ 1 };
    do { int sum{};
      do sum += pow( num % 10, 2 );
      while ( num /= 10 );
      if (( num = sum ) == 1 ) ++count;
    } while ( sums.insert( num ).second );
  } while ( ++a < b );
  return count;
}
