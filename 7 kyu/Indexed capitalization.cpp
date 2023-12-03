std::string capitalize( std::string s, std::vector< int > v ) {
  for ( const size_t i : v )
    if ( i < s.size() )
      s[ i ] = toupper( s[ i ] );
  return s;
}
