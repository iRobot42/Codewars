std::pair<int, int> symmetricPoint( const std::pair<int, int>& p,
                                    const std::pair<int, int>& q ) {
  return { 2 * q.first - p.first, 2 * q.second - p.second };
}
