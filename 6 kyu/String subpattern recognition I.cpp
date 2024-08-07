bool hasSubpattern( const std::string& str ) {
  return ( str + str ).find( str, 1 ) != str.size();
}
