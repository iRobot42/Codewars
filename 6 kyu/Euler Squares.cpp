using Square_t = std::vector< std::vector< int >>;
std::vector<Square_t> createEulerSquare( size_t n ) {
  Square_t a( n, std::vector< int >( n )), b{ a };
  for ( size_t row{}; row < n; ++row )
    for ( size_t col{}; col < n; ++col )
      a[ row ][ col ] = ( row + col ) % n + 1,
      b[ row ][ col ] = ( a[ row ][ col ] + row ) % n + 1;
  return { a, b };
}
