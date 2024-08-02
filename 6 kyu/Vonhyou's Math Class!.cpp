#include <unordered_set>
int countPoints( std::vector< std::pair< int, int >> arr ) {
  std::unordered_set< double > x; // unique x coordinates, y = 0
  for ( const auto& [ k, b ] : arr ) if ( k ) x.insert( -b / double( k ));
  return x.size();
}
