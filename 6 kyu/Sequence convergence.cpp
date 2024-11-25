int convergence( int test ) {
  constexpr auto calc_prod{ []( int num ){
    int prod{ 1 };
    do if ( num % 10 ) prod *= num % 10;
    while ( num /= 10 );
    return prod; }};
  int base{ 1 }, test_count{};
  while ( base != test )
    if ( base < test ) base += calc_prod( base );
    else ++test_count, test += calc_prod( test );
  return test_count;
}
