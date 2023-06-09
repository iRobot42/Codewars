bool isSmooth( const std::vector< int >& a ) {
  size_t i{ a.size() / 2 };
  int mid{ a.size() & 1 ? a[ i ] : a[ i ] + a[ i - 1 ] };
  return a.front() == mid && mid == a.back();
}
