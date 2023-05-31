int persistence( long long n ) {
  int c{};
  for ( long long s{ 1 }; n > 9; ++c, n = s, s = 1 )
    do s *= n % 10; while ( n /= 10 );
  return c;
}
