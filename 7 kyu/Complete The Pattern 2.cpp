std::string pattern( int n ) {
  if ( n < 1 ) return {};
  std::string s;
  for ( int r{ 1 }; r <= n; ++r, s += '\n' )
    for ( int c{ n }; c >= r; --c )
      s += std::to_string( c );
  return s.pop_back(), s;
}
