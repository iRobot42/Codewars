#include <numeric>
std::string hasSubpattern( const std::string& str ) {
  constexpr int L{ '0' }, R{ 'z' + 1 };
  int a[ R ]{}; for ( const int i : str ) ++a[ i ];
  const int gcd{ std::reduce( a + L, a + R, 0, std::gcd< int, int >) };
  std::string pattern;
  for ( int i{}; i < R; ++i ) pattern.append( a[ i ] / gcd, i );
  return pattern;
}
