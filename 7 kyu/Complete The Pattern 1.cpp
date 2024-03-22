std::string pattern( int n ) {
  std::string s;
  for ( int i{ 1 }; i <= n; ++i, s += '\n' )
    for ( int j{}; j < i; ++j )
      s += std::to_string( i );
  if ( !s.empty() ) s.pop_back();
  return s;
}
