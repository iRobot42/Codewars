int microWorld( std::vector< int > bacteria, int k ) {
  sort( bacteria.begin(), bacteria.end() );
  int r{}, x{ 1 };
  for ( size_t i{ 1 }; i < bacteria.size(); ++i, ++x ) {
    if ( bacteria[ i ] - bacteria[ i-1 ] > k ) r += x;
    if ( bacteria[ i ] > bacteria[ i-1 ] ) x = 0;
  }
  return r + x;
}
