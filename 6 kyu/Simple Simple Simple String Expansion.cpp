std::string string_expansion( const std::string& s ) {
  std::string expansion;
  for ( char digit{ '1' }; const char c : s )
    if ( isdigit( c )) digit = c;
    else expansion += std::string( digit-'0', c );
  return expansion;
}
