std::pair<int, int> splitNumbers( int n ) {
  int a{}, b{}, i{};
  while ( i < 31 ) ( a > b ? b : a ) |= n & 1 << i++;
  return { a, b };
}
