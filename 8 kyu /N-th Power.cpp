#include <cmath>
int index( const std::vector< int >& vector, int n ) {
  return vector.size() > size_t( n ) ? pow( vector[ n ], n ) : -1;
}
