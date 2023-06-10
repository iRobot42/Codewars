std::vector<int> squareUp( int n ) {
  std::vector< int > v( n * n );
  for ( int i{ 1 }; i <= n; ++i )
    for ( int j{ i }; j <= n; ++j )
      v[ n * j - i ] = i;
  return v;
}
