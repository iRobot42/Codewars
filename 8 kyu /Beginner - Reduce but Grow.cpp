#include <numeric>
int grow( std::vector< int > nums ) {
  return accumulate( nums.cbegin(), nums.cend(), 1, std::multiplies<>() );
}
