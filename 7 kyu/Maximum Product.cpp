int adjacentElementsProduct( std::vector< int > v ) {
  int p{ v[ 0 ] * v[ 1 ] };
  for ( size_t i{ 2 }; i < v.size(); ++i )
    p = std::max( p, v[ i-1 ] * v[ i ] );
  return p;
}
