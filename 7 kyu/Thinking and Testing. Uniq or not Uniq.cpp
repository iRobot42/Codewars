#include <set>
using Vi = std::vector< int >;
Vi testit( Vi a, Vi b ) {
  const std::set< int > A( a.cbegin(), a.cend() ), B( b.cbegin(), b.cend() ); Vi v;
  return merge( A.cbegin(), A.cend(), B.cbegin(), B.cend(), back_inserter( v )), v;
}
