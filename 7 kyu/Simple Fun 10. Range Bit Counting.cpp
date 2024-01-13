unsigned rangeBitCount( unsigned a, unsigned b ) {
  unsigned c{};
  do c += __builtin_popcount( a );
  while ( ++a <= b );
  return c;
}
