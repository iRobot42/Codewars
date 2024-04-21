#include <numeric>
std::vector<int> add( const std::vector< int >& a ) {
  std::vector< int > v( a.size() );
  inclusive_scan( a.cbegin(), a.cend(), v.begin() );
  return v;
}
