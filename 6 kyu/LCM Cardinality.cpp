#include <cmath>
#include <numeric>
#include <unordered_set>
int64_t lcmCardinality( int64_t n ) {
  std::unordered_set< int64_t > f; // factors
  for ( int64_t i( sqrt( n )); i; --i )
    if (!( n % i )) f.insert( i ), f.insert( n / i );
  int64_t c{};
  for ( auto a{ f.cbegin() }; a != f.cend(); ++a )
    for ( auto b{ a }; b != f.cend(); ++b )
      if ( std::lcm( *a, *b ) == n ) ++c;
  return c;
}
