unsigned reverse_bits( unsigned n ) {
  unsigned r{};
  do ( r <<= 1 ) |= ( n & 1 );
  while ( n >>= 1 );
  return r;
}
