std::vector<int> climb( int n ) {
  std::vector< int > v; int b{};
  do b++; while ( n > 1 << b );
  while ( b-- ) v.push_back( n >> b );
  return v;
}
