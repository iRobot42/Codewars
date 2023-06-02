std::string twoSort( std::vector< std::string > s ) {
  std::sort( s.begin(), s.end() );
  size_t i{ s[ 0 ].size() - 1 };
  while ( i ) s[ 0 ].insert( i--, "***" );
  return s[ 0 ];
}
