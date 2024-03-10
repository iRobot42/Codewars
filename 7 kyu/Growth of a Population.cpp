namespace Arge {
  static int nbYear( int p0, double percent, int aug, int p ) {
    percent /= 100;
    int y{};
    while ( p0 < p ) p0 += p0 * percent + aug, ++y;
    return y;
  }
}
