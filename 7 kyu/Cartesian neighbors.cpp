std::vector< std::vector<int>> cartesianNeighbor( int x, int y ) {
  return { { x-1, y-1 }, { x, y-1 }, { x+1, y-1 }, { x-1, y },
           { x+1, y }, { x-1, y+1 }, { x, y+1 }, { x+1, y+1 } };
}
