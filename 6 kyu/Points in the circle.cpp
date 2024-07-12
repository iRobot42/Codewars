static int pointsNumber( int radius ) {
  radius *= radius;
  int count{}; // one quadrant
  for ( int i{ 1 }; i <= radius; i += 4 )
    count += radius / i - radius / ( i + 2 );
  return 4 * count + 1;
}
