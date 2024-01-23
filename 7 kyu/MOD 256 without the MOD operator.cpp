int mod256WithoutMod( int n ) {
  return n - n / 256 * 256;
}
