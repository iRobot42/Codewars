int pairs( std::vector< int > a ) {
  int c{};
  for ( size_t i{}; i < a.size(); i += 2 )
    if ( abs( a[ i ] - a[ i+1 ] ) == 1 ) ++c;
  return c;
}
