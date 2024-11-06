#include <unordered_set>
vector<double> cartesianNeighborsDistance(
    [[ maybe_unused ]] int x,
    [[ maybe_unused ]] int y,
    int range ) {
  std::unordered_set< double > dist;
  for ( int dx{ 1 }; dx <= range; ++dx )
    for ( int dy{}; dy <= dx; ++dy )
      dist.insert( hypot( dx, dy ));
  return { dist.cbegin(), dist.cend() };
}
