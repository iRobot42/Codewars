std::string to_alternating_case( std::string s ) {
  for ( char& c : s ) c = islower( c ) ? toupper( c ) : tolower( c );
  return s;
}
