int tram( int stops, const std::vector< int >& a, const std::vector< int >& b ) {
  int r{};
  for ( int i{}, c{}; i < stops; ++i )
    r = std::max( r, c += b[ i ] - a[ i ] );
  return r;
}
