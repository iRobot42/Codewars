bool build_square( const std::vector< int >& blocks ) {
  int q[ 5 ]{}; for ( const int b : blocks ) ++q[ b ];
  return q[ 4 ] + std::min( q[ 3 ], q[ 1 ] )
     + ( q[ 2 ] + std::max( q[ 1 ] - q[ 3 ], 0 ) / 2 ) / 2 > 3;
}
