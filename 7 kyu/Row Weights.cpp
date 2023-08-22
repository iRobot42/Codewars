std::pair<int,int> rowWeights( const std::vector< int >& w ) {
  std::pair< int, int > t;
  for ( auto i{ 0u }; i < w.size(); i += 2 ) t.first += w[ i ];
  for ( auto i{ 1u }; i < w.size(); i += 2 ) t.second += w[ i ];
  return t;
}
