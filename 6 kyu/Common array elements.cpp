#include <numeric>
int common( std::vector< int > a, std::vector< int > b, std::vector< int > c ) {
# define FMAP( v ) std::unordered_map< int, int > m##v; for ( const int i : v ) ++m##v[ i ];
  FMAP( a ); FMAP( b ); FMAP( c ); // initialized frequency maps: ma, mb, mc
  return accumulate( ma.cbegin(), ma.cend(), 0, [ & ]( const int acc, const auto& p ) {
    return acc + p.first * std::min( p.second, std::min( mb[ p.first ], mc[ p.first ] )); });
} // TC: O(n)
