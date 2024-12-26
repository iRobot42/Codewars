#include <range/v3/numeric/iota.hpp>
std::vector<int> between( int start, int end ) {
  std::vector< int > v( end - start + 1 );
  return ranges::iota( v, start ), v;
}
