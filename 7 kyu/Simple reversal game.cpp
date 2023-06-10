int solve( int n, int k ) {
  return std::min( 2 * k + 1, 2 * ( --n - k ) );
}
