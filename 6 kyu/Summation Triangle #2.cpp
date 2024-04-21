long long get_sum( unsigned n ) {
  return ( n & 1 ? -1l : 1l ) * ( n + 1 ) * ( n + 1.5 );
}
