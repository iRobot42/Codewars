using Point = std::pair< int, int >;
Point symmetricPoint( const Point& p, const Point& q ) {
  return { 2 * q.first - p.first, 2 * q.second - p.second };
}
