std::string doubles( std::string s ) {
  std::string r;
  for ( char c : s ) r.back() == c ?
    r.pop_back() : r.push_back( c );
  return r;
}
