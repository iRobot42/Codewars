bool canEscape( const std::vector< std::pair< unsigned, unsigned >>& walls ) {
  for ( size_t step{}; step < walls.size(); ++step )
    if ( walls[ step ].first <= step + 1 || walls[ step ].second <= step + 1 )
      return false;
  return true;
}
