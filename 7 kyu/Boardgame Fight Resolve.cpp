char fightResolve( char d, char a ) {
  const int i{ tolower( d ) - tolower( a )};
  return ( d < 84 && a < 84 ) || ( d > 96 && a > 96 ) ? -1
    : i == 10 || i == 3 || i == -18 || i == 5 ? d : a;
}
