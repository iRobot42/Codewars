unsigned long maxIntChain( unsigned long n ) {
  return n < 5 ? -1 : n * n - 1 >> 2;
}
