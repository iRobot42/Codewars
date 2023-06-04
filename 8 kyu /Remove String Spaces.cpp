std::string no_space( const std::string& x ) {
  std::string s;
  for ( const char c : x )
    if ( c != ' ' ) s += c;
  return s;
}
