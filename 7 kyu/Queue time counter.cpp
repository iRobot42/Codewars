long long queue( const std::vector< int >& q, int p ) {
  long long m{};
  for ( int i{}, s = q.size(); i < s; ++i )
    m += q[ i ] < q[ p ] ? q[ i ] : q[ p ] - ( i > p );
  return m;
}
