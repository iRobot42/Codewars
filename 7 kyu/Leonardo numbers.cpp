std::vector<int> L( int n, int L0, int L1, int add ) {
  std::vector< int > v( n, L0 ); v[ 1 ] = L1;
  for ( int i{ 2 }; i < n; ++i )
    v[ i ] = v[ i - 1 ] + v[ i - 2 ] + add;
  return v;
}
