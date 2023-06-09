std::vector<int> relativelyPrime( int n, std::vector< int > l ) {
  std::vector< int > v;
  for ( const int i : l )
    if ( std::__gcd( i, n ) == 1 )
      v.push_back( i );
  return v;
}
