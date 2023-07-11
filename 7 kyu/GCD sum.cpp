std::pair<int, int> solve( int s, int g ) {
  return s % g ? std::pair{ -1, -1 } : std::pair{ g, s-g };
}
