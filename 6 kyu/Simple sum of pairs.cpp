int solve( long n ) {
  auto dsum{ []( long n ){ int sum{};
    while ( n ) sum += n % 10, n /= 10;
    return sum; }};
  long a{};
  while ( a <= n ) a = a * 10 + 9;
  return a /= 10, dsum( a ) + dsum( n - a );
}
