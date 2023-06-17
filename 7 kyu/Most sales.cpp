std::vector< std::string> top3(
    const std::vector< std::string >& p,
    const std::vector< int >& amounts,
    const std::vector< int >& prices ) {
  std::vector< std::pair< int, long >> v( 3, { 0, -1 } );
  for ( size_t i{}; i < p.size(); ++i ) { // O(n), one pass
    const long r{ amounts[ i ] * prices[ i ] }; // revenue
    if ( r > v[ 0 ].second ) v[ 2 ] = v[ 1 ], v[ 1 ] = v[ 0 ], v[ 0 ] = { i, r };
    else if ( r > v[ 1 ].second ) v[ 2 ] = v[ 1 ], v[ 1 ] = { i, r };
    else if ( r > v[ 2 ].second ) v[ 2 ] = { i, r }; }
  return { p[ v[ 0 ].first ], p[ v[ 1 ].first ], p[ v[ 2 ].first ] };
}
