int solve( std::vector< int > v ) {
  sort( v.begin(), v.end() );
  return std::min( v[ 0 ] += v[ 1 ], v[ 0 ] + v[ 2 ] >> 1 );
}
