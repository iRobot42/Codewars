#include <queue>
int addAll( const std::vector< int >& numbers ) {
  std::priority_queue q{ std::greater{}, numbers };
  int cost{};
  while ( q.size() > 1 ) {
    int sum{ q.top() };
    q.pop(), cost += sum += q.top();
    q.pop(), q.push( sum );
  }
  return cost;
}
