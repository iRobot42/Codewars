std::vector< std::vector<int>> create_box( int m, int n ) {
  std::vector box( n, std::vector< int >( m ));
  for ( int row{}; row < n; ++row )
    for ( int col{}; col < m; ++col )
      box[ row ][ col ] = std::min({ row+1, n-row, col+1, m-col });
  return box;
}
