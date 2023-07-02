#include <numeric>
int maxGap( std::vector< int > n ) {
  sort( n.begin(), n.end() );
  adjacent_difference( n.cbegin(), n.cend(), n.begin() );
  return *max_element( n.cbegin(), n.cend() );
}
