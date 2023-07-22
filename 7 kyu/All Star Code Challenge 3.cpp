std::string remove_vowels( const std::string& s ) {
  std::string r;
  for ( const char c : s )
    if ( std::string( "aeiou" ).find( c ) == s.npos )
      r.push_back( c );
  return r;
}
