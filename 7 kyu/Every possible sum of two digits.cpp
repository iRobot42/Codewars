std::vector<int> digits( int n ) {
  std::vector< int > v;
  const std::string s{ std::to_string( n ) };
  for ( auto i{ s.cbegin() }; i != s.cend(); ++i )
    for ( auto j{ next( i ) }; j != s.cend(); ++j )
      v.push_back( *i + *j - 96 );
  return v;
}
