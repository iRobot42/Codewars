int last_digit( long n ) {
  static constexpr int d[]{ 1, 1, 2, 6, 4, 2, 2, 4, 2, 8 };
  return n > 9 ? ( n / 10 & 1 ? 4 : 6 ) * last_digit( n / 5 ) * d[ n % 10 ] % 10 : d[ n ];
}
