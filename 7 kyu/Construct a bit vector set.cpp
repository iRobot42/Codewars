#include <numeric>
int sort_by_bit( const std::vector< int >& bits ) {
  return accumulate( bits.cbegin(), bits.cend(), 0,
    []( int acc, int i ){ return acc | 1 << i; } );
}
