unsigned countConsonants( const std::string& s ) {
  bool a[ 26 ]{};
  for ( const char c : s ) if ( isalpha( c )) a[ tolower( c )-'a' ] = true;
  return std::count( a + 1, a + 26, true ) - a[ 4 ] - a[ 8 ] - a[ 14 ] - a[ 20 ];
}
