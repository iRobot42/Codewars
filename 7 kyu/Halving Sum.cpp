unsigned halving_sum( unsigned n ) {
  unsigned s{ n };
  while ( n /= 2 ) s += n;
  return s;
}
