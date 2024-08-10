#include <numeric>
std::string countFeelings( std::string_view s, std::vector< std::string > a ) {
  int smap[ 123 ]{}; for ( const int c : s ) ++smap[ c ];
  const int n{ accumulate( a.cbegin(), a.cend(), 0, [ & ]( int x, const auto& f ) {
    int fmap[ 123 ]{}; for ( const int c : f ) ++fmap[ c ];
    return x + all_of( f.cbegin(), f.cend(), [ & ]( const int c ) {
      return smap[ c ] >= fmap[ c ]; }); })};
  return ( std::to_string( n ) + " feeling" ).append( n != 1, 's' ) + '.';
}
