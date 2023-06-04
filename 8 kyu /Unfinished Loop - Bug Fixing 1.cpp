std::vector< int > createVector( const int n ) {
  std::vector< int > res;
  for ( int i{ 1 }; i <= n; ++i )
    res.push_back( i );
  return res;
}
