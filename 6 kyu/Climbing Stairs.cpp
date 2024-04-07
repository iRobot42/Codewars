int climbing_stairs( const std::vector< int >& costs ) {
  int sum1{}, sum2{};
  for ( const auto cost : costs )
    std::swap( sum1, sum2 = cost + std::min( sum1, sum2 ));
  return std::min( sum1, sum2 );
}
