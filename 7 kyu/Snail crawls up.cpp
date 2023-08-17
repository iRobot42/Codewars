int snail( int column, int day, int night ) {
  return ( --column - night ) / ( day - night ) + 1;
}
