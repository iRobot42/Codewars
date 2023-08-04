std::string grid( int n ) {
  if ( n < 1 ) return {};
  std::string s;
  for ( int i{}; i < n; ++i, s.back() = '\n' )
    for ( int j{}; j < n; ++j, s += ' ' )
      s += 97 + ( i + j ) % 26;
  return s.pop_back(), s;
}
