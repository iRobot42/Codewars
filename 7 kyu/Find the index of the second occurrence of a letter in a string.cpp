int secondSymbol( const std::string& s, char c ) {
  return s.find( c, s.find( c ) + 1 );
}
