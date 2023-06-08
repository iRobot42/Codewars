std::string pattern( int n ) {
  if ( n <= 0 ) return {};
  std::string s;
  for ( int i{}; i < n; ++i, s += '\n' )
    for ( int j{ n }; j >= n - i; --j )
      s += std::to_string( j );
  return { s.cbegin(), s.cend() - 1 };
}
