#include <cmath>
int solve( int a, int b ) {
  constexpr auto prime{ []( int n ){
    const int lim( sqrt( n ));
    for ( int i{ 2 }; i <= lim; ++i )
      if (!( n % i )) return false;
    return n > 1; }};
  int sum{};
  for ( int num{ 3 }, pos{ 2 }; num <= b; num += 2 )
    if ( prime( num ) && prime( pos++ ) && num >= a )
      sum += num;
  return sum;
}
