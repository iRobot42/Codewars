#include <numeric>
int sum( std::vector< int > nums ) {
  return accumulate( nums.cbegin(), nums.cend(), 0 );
}
