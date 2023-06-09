std::string testit( std::string s ) {
  std::string r;
  for ( size_t i{}; i + 1 < s.size(); i += 2 )
    r += ( s[ i ] + s[ i + 1 ] ) / 2;
  return s.size() & 1 ? r += s.back() : r;
}
