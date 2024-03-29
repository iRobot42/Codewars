std::vector<int> digitize( int n ) {
  std::vector< int > v;
  do v.push_back( n % 10 );
  while ( n /= 10 );
  return { v.crbegin(), v.crend() };
}
