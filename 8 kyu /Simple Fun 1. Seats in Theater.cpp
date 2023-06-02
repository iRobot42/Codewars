int seats_in_theater( int total_col, int total_row, int col, int row ) {
  return ( total_row - row ) * ( total_col - col + 1 );
}
