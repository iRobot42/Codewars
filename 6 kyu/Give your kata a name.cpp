int name( const std::vector< std::string > s ) {
  const size_t n{ s.size() };
  std::vector< int > v( n );
  for ( size_t i{}; i < n; ++i )
    for ( const char c : s[ i ] )
      v[ i ] += c - 96;
  int max_len{};
  for ( size_t m{}; m < 1 << n; ++m ) {
    int len{}, tval{};
    for ( size_t i{}; 1 << i <= m; ++i )
      if ( m & 1 << i )
        len += s[ i ].size(), tval += v[ i ];
    if ( len > max_len && tval <= len * 10 )
      max_len = len;
  }
  return max_len;
}
