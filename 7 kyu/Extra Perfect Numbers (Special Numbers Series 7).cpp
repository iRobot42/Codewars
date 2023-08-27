std::vector<int> extraPerfect( int n ) {
  std::vector< int > v;
  v.reserve(( n + 1 ) / 2 );
  for ( int i{ 1 }; i <= n; i += 2 )
    v.push_back( i );
  return v;
}
