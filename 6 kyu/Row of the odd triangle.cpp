std::vector<unsigned long long> odd_row( unsigned int n ) {
  std::vector< unsigned long long > v;
  v.reserve( n );
  auto x{ n * ( n - 1ull ) - 1 };
  while ( n-- ) v.push_back( x += 2 );
  return v;
}
