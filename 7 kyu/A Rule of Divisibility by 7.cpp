namespace DivSeven {
  static std::pair< long long, long long> seven( long long m ) {
    long long n{};
    while ( m > 99 ) m = m / 10 - 2 * ( m % 10 ), ++n;
    return std::make_pair( m, n );
  }
}
