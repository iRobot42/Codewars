#include <climits>
unsigned long findLowestInt( unsigned k ) {
  for ( unsigned long n{ 1 }; n < ULONG_MAX; ++n ) {
    auto nk1{ n * k }, nk2{ n * ( k + 1 )};
    int m[ 10 ]{};
    do ++m[ nk1 % 10 ]; while ( nk1 /= 10 );
    do --m[ nk2 % 10 ]; while ( nk2 /= 10 );
    for ( int i{}; i < 10 && !m[ i ]; ++i )
      if ( i == 9 ) return n;
  }
  return {};
}
