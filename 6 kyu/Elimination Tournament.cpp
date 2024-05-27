std::vector< std::vector<int>> tourney( const std::vector< int >& input ) {
  std::vector< std::vector< int >> rounds{ input };
  while ( rounds.back().size() > 1 ) {
    std::vector< int > round;
    if ( rounds.back().size() & 1 ) round.push_back( rounds.back().back() );
    for ( size_t i{ 1 }; i < rounds.back().size(); i += 2 )
      round.push_back( std::max( rounds.back()[ i ], rounds.back()[ i-1 ] ));
    rounds.push_back( round );
  }
  return rounds;
}
