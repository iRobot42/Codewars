#include <cmath>
int solve( int n ) {
  constexpr auto has_prime{ []( int n ){
    do switch ( n % 10 ) {
      case 2: case 3: case 5: case 7: return true;
    } while ( n /= 10 );
    return false; }};
  constexpr auto is_prime{ []( int n ){
    for ( int f{ 2 }, lim( sqrt( n )); f <= lim; ++f )
      if (!( n % f )) return false;
    return true; }};
  int number;
  for ( int i{}, num{}; i < n; ++i, number = num )
    while ( has_prime( ++num ) || is_prime( num ));
  return number;
}
