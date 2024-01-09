std::array< int, 10> paint_letterboxes( int start, int end ) {
  std::array< int, 10 > frequency{};
  for ( start; start <= end; ++start )
    for ( int number{ start }; number; number /= 10 )
      ++frequency[ number % 10 ];
  return frequency;
}
