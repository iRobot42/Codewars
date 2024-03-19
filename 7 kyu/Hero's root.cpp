namespace IntSqRoot {
  static long long intRac( long long n, long long g ) {
    long long c{}, x{};
    do ++c, x = g, g = ( g + n / g ) / 2;
    while ( x != g );
    return c;
  }
}
