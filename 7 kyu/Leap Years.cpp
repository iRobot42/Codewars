bool IsLeapYear( int y ) {
  return !( y % 400 ) || y % 100 && !( y % 4 );
}
