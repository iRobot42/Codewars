std::vector< std::vector<int>> make_latin_square( int n ) {
  std::vector latin_square( n, std::vector< int >( n ));
  for ( int row{}; row < n; ++row )
    for ( int col{}; col < n; ++col )
      latin_square[ row ][ col ] = ( row + col ) % n + 1;
  return latin_square;
}
