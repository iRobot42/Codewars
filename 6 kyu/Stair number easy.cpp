#include <numeric>
unsigned long long solution( int n ) {
  constexpr int M( 1e9+7 );
  std::vector< int > dp( 10, 1 );
  while ( --n ) {
    std::vector< int > dpt( 10 );
    dpt.front() = dp[ 1 ], dpt.back() = dp[ 8 ];
    for ( size_t i{ 1 }; i < 9; ++i )
      dpt[ i ] = ( dp[ i-1 ] + dp[ i+1 ] ) % M;
    dp = move( dpt );
  }
  return accumulate( ++dp.cbegin(), dp.cend(), 0ull ) % M;
}
