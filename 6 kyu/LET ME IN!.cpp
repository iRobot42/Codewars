int get_in_line( std::vector< int >& line ) {
  enum { ME, KNOWN, MEMBER, DECOY, UNKNOWN };
  stable_sort( line.begin(), line.end(), []( int a, int b ){
    return a == KNOWN || ( a == MEMBER && b != KNOWN ); });
  int time{};
  do { auto left{ line.begin() }, right{ line.end() };
    while ( line.front() == KNOWN && ++left < --right )
      if ( *left != KNOWN && *left != DECOY && *right != DECOY )
        std::swap( *left, *right );
  } while ( ++time, *line.erase( line.begin() ) != ME );
  return ++time;
}
