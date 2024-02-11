#include <numeric>

#define VARIANT 1
#define NUMBER n > 0 ? n-- : n++
#define RIGHT v.begin(), v.end()
#define LEFT v.rbegin(), v.rend()

std::vector<int> seqToOne( int n ) {
  std::vector< int > v( n > 0 ? n : 2 - n );
#if VARIANT == 1
  for ( int& i : v ) i = NUMBER;
#elif VARIANT == 2
  n > 0 ? iota( LEFT, 1 ) : iota( RIGHT, n );
#elif VARIANT == 3
  generate( RIGHT, [ & ](){ return NUMBER; });
#endif
  return v;
}
