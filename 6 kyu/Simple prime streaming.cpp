#include <cmath>
std::string solve( int a, int b ) {
  constexpr auto is_prime{ []( const auto number ) {
    for ( int factor( sqrt( number )); factor > 1; --factor )
      if (!( number % factor )) return false;
    return true; }}; // number > 1
  std::string s;
  for ( size_t num{ 2 }, lim( a + b ); s.size() < lim; ++num )
    if ( is_prime( num )) s += std::to_string( num );
  return s.substr( a, b );
}
