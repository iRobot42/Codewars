int chuckPushUps( const std::string& s ) {
  int r{}, n{};
  for ( const char c : s )
    switch ( c ) {
      case '0': n <<= 1; break;
      case '1': ++( n <<= 1 ); break;
      case ' ': r = std::max( r, n ), n = 0;
    }
  return ( r = std::max( r, n )) ? r : -1;
}
