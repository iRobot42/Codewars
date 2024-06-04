#include <numeric>
using Vec_t = std::vector< unsigned long long >;
Vec_t partsSum( const Vec_t& ls ) {
  Vec_t vs( ls.size() + 1 );
  partial_sum( ls.crbegin(), ls.crend(), ++vs.rbegin() );
  return vs;
}
