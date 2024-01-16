#include <numeric>
int house_numbers_sum( const std::vector< int >& a ) {
  return accumulate( a.cbegin(), find( a.cbegin(), a.cend(), 0 ), 0 );
}
