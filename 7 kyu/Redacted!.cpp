bool redacted( const std::string& d1, const std::string& d2 ) {
  if ( d1.size() != d2.size() ) return false;
  for ( size_t i{}; i < d1.size(); ++i )
    if ( d1[ i ] != d2[ i ] && ( d1[ i ] != 'X' || d2[ i ] == '\n' ))
      return false;
  return true;
}
