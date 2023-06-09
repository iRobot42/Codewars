bool prime( const unsigned n ) {
  if ( n < 2 ) return false;
  for ( unsigned f{ 3 }; f * f <= n; f += 2 )
    if ( !( n % f ) ) return false;
  return true;
}
unsigned oddNotPrime( unsigned n ) {
  unsigned c{ 1 };
  for ( unsigned i{ 3 }; i <= n; i += 2 )
    if ( !prime( i ) ) ++c;
  return c;
}
