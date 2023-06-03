#include <numeric>
bool betterThanAverage( std::vector< int > c, int y ) {
  return y > int( reduce( c.cbegin(), c.cend() ) / c.size() );
}
