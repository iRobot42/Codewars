bool best_friend( const std::string& txt, char a, char b ) {
  for ( const char& c : txt )
    if ( c == a && *std::next( &c ) != b )
      return false;
  return true;
}
