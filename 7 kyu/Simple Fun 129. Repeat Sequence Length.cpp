#include <cmath>
int repeat_sequence_len( int a ) {
  do { int sum{};
    do sum += pow( a % 10, 2 );
    while ( a /= 10 );
    if ( sum == 1 ) return 1;
    a = sum;
  } while ( a > 9 );
  return 8;
}
