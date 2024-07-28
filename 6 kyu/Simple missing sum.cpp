#include <numeric>
int solve( std::vector< int > v ) {
  return sort( v.begin(), v.end() ), accumulate( v.cbegin(), v.cend(), 1,
    []( int acc, const int num ) { return acc + num * ( num <= acc ); });
}
