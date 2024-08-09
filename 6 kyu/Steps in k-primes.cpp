#include <cmath>
namespace KStep {
  using VP_t = std::vector< std::pair< long, long >>;
  VP_t kprimesStep( int k, int s, long long l, long long r ) {
    auto is_kprime{ [ k ]( auto n ) {
      int c{ k };
      for ( long long f{ 2 }, lim( sqrt( n )); f <= lim; ++f )
        while (!( n % f )) --c, n /= f;
      return c == n > 1; }};
    VP_t v;
    for ( long long n{ l + s }; n <= r; ++n )
      if ( is_kprime( n - s ) && is_kprime( n ))
        v.push_back({ n - s, n });
    return v;
  }
}
