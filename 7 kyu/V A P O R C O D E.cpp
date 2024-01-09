std::string vaporcode( const std::string& s ) {
  std::string r;
  for ( const char c : s )
    if ( c != ' ' ) r += toupper( c ), r += "  ";
  return r.erase( r.size() - 2 );
}
