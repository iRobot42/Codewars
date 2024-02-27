std::array< int, 3 > get_positions( int n ) {
  return { n % 3, n / 3 % 3, n / 9 % 3 };
}
