int elevator_distance( std::vector< int > floors ) {
  int distance{};
  for ( size_t i{ 1 }; i < floors.size(); ++i )
    distance += abs( floors[ i ] - floors[ i-1 ] );
  return distance;
}
