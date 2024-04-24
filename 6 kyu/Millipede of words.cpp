bool solution( const std::vector< std::string >& words ) {
  std::vector< std::string > w{ words };
  sort( w.begin(), w.end() );
  auto comp{ []( const auto& a, const auto& b ){ return a.front() != b.back(); }};
  do if ( adjacent_find( w.cbegin(), w.cend(), comp ) == w.cend() ) return true;
  while ( next_permutation( w.begin(), w.end() ));
  return false;
}
