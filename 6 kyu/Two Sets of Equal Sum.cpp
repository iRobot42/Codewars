std::vector< std::vector<int>> createTwoSetsOfEqualSum( int n ) {
  std::vector< std::vector< int >> sets( 2 );
  long ap_sum{ n * ( n + 1l ) / 2 }, lim{ ap_sum / 2 }, sum{};
  if ( ap_sum & 1 ) return sets;
  for ( int i{ n }; i; --i )
    if ( sum + i > lim ) sets.back().push_back( i );
    else sets.front().push_back( i ), sum += i;
  return sets;
}
