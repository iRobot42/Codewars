std::string seriesSum( int n ) {
  double d{ .005 };
  while ( n-- ) d += 1. / ( 3 * n + 1 );
  return std::to_string( d ).substr( 0, 4 );
}
