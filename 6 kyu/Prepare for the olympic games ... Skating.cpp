#include <numeric>
std::tuple< double, double, double, double> getskater( const std::vector< double >& v ) {
  std::vector< double > m{ 0, 0, 0, 1, 1, 1, 1, 1, 1, 1, 1, 1 }, all; all.reserve( 220 );
  do all.push_back( inner_product( v.cbegin(), v.cend(), m.cbegin(), 0.0 ) / 9 );
  while ( next_permutation( m.begin(), m.end() ));
  sort( all.begin(), all.end() );
  return std::make_tuple( all.front(), reduce( all.cbegin(), all.cend() ) / 220,
                        ( all[ 109 ] + all[ 110 ] ) / 2, all.back() );
}
