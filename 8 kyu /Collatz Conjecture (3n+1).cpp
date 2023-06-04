unsigned int hotpo( unsigned int n ) {
  unsigned int c{};
  while ( n != 1 ) n = n & 1 ? 3 * n + 1 : n / 2, ++c;
  return c;
}
