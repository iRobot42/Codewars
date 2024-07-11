std::vector<int> solve( std::vector< int > v ) {
  sort( v.begin(), v.end() );
  std::deque d{ v.front() };
  auto check( []( int a, int b ){ return a == b * 2 || a == b / 3; } );
  for ( size_t i{ 1 }; i < v.size(); ++i )
    if ( check( d.front(), v[ i ] )) d.push_front( v[ i ] );
    else if ( check( v[ i ], d.back() )) d.push_back( v[ i ] );
    else v.push_back( v[ i ] );
  return { d.cbegin(), d.cend() };
}
