#include <range/v3/numeric/accumulate.hpp>
int solve( int a, int b ) {
  std::unordered_map< double, std::vector< int >> m;
  constexpr auto ratio{ []( const int num ){
    double div_sum( num );
    for ( int div{ num / 2 }; div; --div )
      if (!( num % div )) div_sum += div;
    return div_sum / num; }};
  while ( a < b ) m[ ratio( a ) ].push_back( a ), ++a;
  return ranges::accumulate( m, 0, []( int acc, const auto& p ){
    return acc + ( p.second.size() > 1 ) * p.second.front(); });
}
