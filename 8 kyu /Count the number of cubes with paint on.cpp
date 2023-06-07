int countSquares( int cuts ) {
  return cuts ? 6 * cuts * cuts + 2 : 1;
}
