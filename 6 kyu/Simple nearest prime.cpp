#include <cmath>
long long solve( long long number ) {
  constexpr auto is_prime{ []( const auto number ) {
    for ( long long factor( sqrt( number )); factor > 1; --factor )
      if (!( number % factor )) return false;
    return number > 1; }};
  for ( long long distance{}; distance < 1e10; ++distance )
    if ( is_prime( number - distance )) return number - distance;
    else if ( is_prime( number + distance )) return number + distance;
  throw;
}
