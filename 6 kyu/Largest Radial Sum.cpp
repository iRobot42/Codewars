#include <climits>
int largestRadialSum( std::vector< int > a, int d ) {
  int res{ INT_MIN };
  for ( size_t i{}, l{ a.size() / d }; i < l; ++i ) {
    int sum{};
    for ( size_t j{ i }; j < a.size(); j += l ) sum += a[ j ];
    if ( sum > res ) res = sum;
  }
  return res;
}
