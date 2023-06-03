std::string makeUpperCase( const std::string& input_str ) {
  std::string s;
  for ( const char c : input_str ) s += toupper( c );
  return s;
}
