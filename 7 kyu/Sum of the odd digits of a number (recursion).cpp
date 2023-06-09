int sum_odd_digits( int n ) {
  return n ? sum_odd_digits( n / 10 ) + n % 2 * n % 10 : 0;
}
