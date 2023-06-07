std::vector<int> digitize( unsigned long n ) {
  std::vector< int > v;
  do v.push_back( n % 10 );
  while ( n /= 10 );
  return v;
}
