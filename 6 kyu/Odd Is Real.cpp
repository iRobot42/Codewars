#include <cmath>
uint64_t odd_isReal( uint64_t l, uint64_t r ) {
  auto sqr{ []( uint64_t n ) -> uint64_t { return sqrtl( n ); }};
  return --l, sqr( r ) - sqr( l ) + sqr( r / 2 ) - sqr( l / 2 );
}
