std::string double_char( const std::string& str ) {
  std::string s;
  for ( const char c : str ) s.append( 2, c );
  return s;
}
