std::string reverse_words( std::string s ) {
  std::string r, w;
  for ( const char c : s )
    if ( c != ' ' ) w += c;
    else r += { w.crbegin(), w.crend() }, r += ' ', w.clear();
  return r += { w.crbegin(), w.crend() };
}
