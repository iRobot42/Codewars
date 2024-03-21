using i64_t = unsigned long long;
namespace Funij {
  static i64_t sumin( i64_t n ) { return n * ( n + 1 ) * ( 2 * n + 1 ) / 6; }
  static i64_t sumax( i64_t n ) { return n * ( n + 1 ) * ( 4 * n - 1 ) / 6; }
  static i64_t sumsum( i64_t n ) { return sumin( n ) + sumax( n ); }
}
