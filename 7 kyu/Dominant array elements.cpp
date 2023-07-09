std::vector<int> solve( std::vector< int > a ) {
  std::vector< int > v{ a.back() };
  for ( auto i{ ++a.crbegin() }; i < a.crend(); ++i ) // O(n)
    if ( *i > v.back() ) v.push_back( *i );
  return { v.crbegin(), v.crend() };
}
