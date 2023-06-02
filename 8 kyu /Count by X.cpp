std::vector<int> countBy( int x, int n ) {
  std::vector< int > v;
  for ( int i{ 1 }; i <= n; ++i )
    v.push_back( x * i );
  return v;
}
