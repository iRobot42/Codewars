#include <queue>
uint64_t descendingOrder( uint64_t n ) {
  std::priority_queue< int > q;
  while ( n ) q.push( n % 10 ), n /= 10;
  while ( !q.empty() ) n = n * 10 + q.top(), q.pop();
  return n;
}
