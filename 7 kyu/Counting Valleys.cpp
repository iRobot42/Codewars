int countValleys( const std::string& s ) {
  int level{}, vcount{};
  for ( const char c : s )
    if ( c == 'U' && !++level ) ++vcount;
    else if ( c == 'D' ) --level;
  return vcount;
}
