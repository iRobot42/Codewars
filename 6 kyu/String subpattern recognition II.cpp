#include <numeric>
bool hasSubpattern( const std::string& str ) {
  constexpr int L{ '0' }, R{ 'z' + 1 };
  int a[ R ]{}; for ( const int i : str ) ++a[ i ];
  return std::reduce( a + L, a + R, 0, std::gcd< int, int >) != 1;
}
