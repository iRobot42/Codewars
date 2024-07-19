long long solve( long long n ) {
  if ( n < 10 ) return n;
  long long tmp{ n }, pos{ 1 };
  while ( tmp > 9 ) tmp /= 10, pos *= 10;
  tmp = ++tmp * pos - 1, pos = 1;
  while ( tmp - pos > n ) pos *= 10;
  return tmp - pos;
}
