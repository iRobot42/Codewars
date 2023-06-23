std::vector<int> split_by_value( int k, std::vector< int > e ) {
  return stable_partition( e.begin(), e.end(), [ k ]( int i ){ return i < k; }), e;
}
