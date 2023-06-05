std::string reverse_words( const std::string& str ) {
  std::string s, w;
  for ( const char c : str )
    if ( c != ' ' ) w += c;
    else s.insert( 0, ' ' + w ), w.clear();
  return w + s;
}
