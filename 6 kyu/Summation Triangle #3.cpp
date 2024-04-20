namespace Triangle {
  static long getSum( int n ) {
    const int i{ 1 + n / 2 + n % 2 };
    return long( 1 - n / 2 - n % 2 * 2 ) * i * i;
  }
};
