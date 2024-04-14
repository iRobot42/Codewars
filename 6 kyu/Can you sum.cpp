unsigned long long f( unsigned long long n ) {
  auto m{ []( auto n ){ return n % 1'000'000'007; }};
  auto i{ n + 1 }, t{ 1ull }, p{ 2ull };
  do if ( i & 1 ) t = m( t * p );
  while ( p = m( p * p ), i /= 2 );
  return m( t * m( m( n ) * m( n - 2 ) + 3 )) - 6;
}
