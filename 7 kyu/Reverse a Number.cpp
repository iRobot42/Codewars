long long reverseNumber( long long n ) {
  long long r{};
  do r = r * 10 + n % 10;
  while ( n /= 10 );
  return r;
}
