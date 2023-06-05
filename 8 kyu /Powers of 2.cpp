std::vector<uint64_t> powers_of_two( int n ) {
  std::vector< uint64_t > v;
  for ( int i{}; i <= n; ++i )
    v.push_back( uint64_t( 1 ) << i );
  return v;
}
