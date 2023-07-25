bool shared_bits( long a, long b ) {
  return __builtin_popcount( a & b ) > 1;
}
