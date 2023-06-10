std::vector<int> distribute( int m, int n ) {
  if ( n <= 0 ) return {}; m *= m > 0;
  std::vector< int > v( m % n, m / n + 1 );
  return v.resize( n, m / n ), v;
}
