#include <set>
std::vector<int> menFromBoys( std::vector< int > v ) {
  std::set< int > o, e;
  for ( const int i : v ) ( i & 1 ? o : e ).insert( i );
  std::vector< int > r( e.cbegin(), e.cend() );
  return r.insert( r.end(), o.crbegin(), o.crend() ), r;
}
