long getJumps( const std::vector< int >& cycle, long long k ) {
  return cycle.size() / std::__gcd( cycle.size(), size_t( k ));
}
