#include <cmath>
int solve( std::vector< int > v ) {
  constexpr auto is_prime{ []( int n ){
    const int lim( sqrt( n ));
    for ( int f{ 2 }; f <= lim; ++f )
      if (!( n % f )) return false;
    return n > 1; }};
  int sum{};
  for ( size_t i{}; i < v.size(); ++i )
    if ( is_prime( i )) sum += v[ i ];
  return sum;
}
