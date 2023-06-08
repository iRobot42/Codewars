std::string pattern( int n ) {
  if ( n < 1 ) return {};
  std::string s;
  for ( int i{ 1 }; i < n; ++i ) {
    for ( int j{ i }; j <= n; ++j )
      s += std::to_string( j );
    s += '\n';
  }
  return s += std::to_string( n );
}
