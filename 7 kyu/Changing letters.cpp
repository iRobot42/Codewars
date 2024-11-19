std::string swap( std::string str ) {
  for ( char& c : str ) switch ( c ) {
    case 'a': case 'e': case 'i': case 'o': case 'u': c ^= 32;
  }
  return str;
}
