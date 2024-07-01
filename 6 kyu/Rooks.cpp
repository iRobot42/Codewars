unsigned long long rooks( int n, int k ) {
  return k ? rooks( n-1, k-1 ) * n * n / k : 1;
}
