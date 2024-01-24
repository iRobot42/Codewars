int calc( const std::string& s ) {
  int n{};
  for ( const char c : s )
    n += ( c % 10 == 7 ) + ( c / 10 == 7 );
  return n * 6;
}
