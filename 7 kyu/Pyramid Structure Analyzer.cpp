std::tuple<int, int, int, int> pyramid( int s ) {
  ( s -= 2 ) >>= 2;
  return { s + 1, s << 1, s + 1, s };
}
