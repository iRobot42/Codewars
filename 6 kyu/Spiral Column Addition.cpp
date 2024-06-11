unsigned long long spiral_column( unsigned int n, unsigned int c ) {
  unsigned long long s{};
  while ( c < n ) s += ( 2ull * n - 1 ) * ( n - 1 ) + c, c = n-- - c;
  return n * ( 3ull * n - 1 ) / 2 + s;
}
