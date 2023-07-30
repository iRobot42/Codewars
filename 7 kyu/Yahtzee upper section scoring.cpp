long yahtzee_upper( std::vector< int > roll ) {
  std::unordered_map< int, int > frequency;
  for ( const int dice : roll ) ++frequency[ dice ];
  long score{};
  for ( const auto& [ dice, count ] : frequency )
    score = std::max( score, long( dice ) * count );
  return score;
}
