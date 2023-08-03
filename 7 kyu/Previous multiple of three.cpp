int prev_mult_of_three( int n ) {
  while ( n % 3 ) n /= 10;
  return n ? n : -1;
}
