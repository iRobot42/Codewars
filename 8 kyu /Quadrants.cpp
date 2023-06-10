int quadrant( int x, int y ) {
  return y > 0 ? x > 0 ? 1 : 2 : x < 0 ? 3 : 4;
}
