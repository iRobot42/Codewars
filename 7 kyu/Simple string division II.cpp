unsigned solve( const std::string& s, unsigned k ) {
  std::vector< std::string > v;
  std::string n;
  std::istringstream ss( s );
  while ( ss >> n ) v.push_back( n );
  unsigned c{};
  for ( auto i{ v.cbegin() }; i < v.cend(); ++i )
    for ( auto j{ next( i ) }; j < v.cend(); ++j )
      c += !( stol( *i + *j ) % k ) + !( stol( *j + *i ) % k );
  return c;
}
