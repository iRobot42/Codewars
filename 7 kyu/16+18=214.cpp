unsigned add( unsigned x, unsigned y ) {
  unsigned ssum{}, mult{ 1 };
  while ( x || y ) {
    const unsigned sum{ x % 10 + y % 10 };
    ssum += sum * mult;
    mult *= sum > 9 ? 100 : 10;
    x /= 10, y /= 10;
  }
  return ssum;
}
