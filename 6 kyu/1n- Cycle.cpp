int cycle( int n ) {
  if (!( n % 2 ) || !( n % 5 )) return -1;
  for ( int i{ 1 }, r{ 1 }; i < n; ++i )
    if (( r = r * 10 % n ) == 1 ) n = i;
  return n;
}
