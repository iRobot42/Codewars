bool loneliest( unsigned long number ) {
  const std::string s{ std::string( 9, '0' ) + std::to_string( number ) + std::string( 9, '0' )};
  for ( size_t i{ 9 }, lim{ s.size() - 9 }, lon_min{ 162 }; i < lim; ++i ) {
    size_t num( s[ i ] - '0' ), lon{ -num };
    for ( size_t j{ i - num }; j <= i + num; ++j ) lon += s[ j ] - '0';
    if ( lon < lon_min ) lon_min = lon, number = 0;
    if ( num == 1 && lon <= lon_min ) number = 1;
  }
  return static_cast< bool >( number );
}
