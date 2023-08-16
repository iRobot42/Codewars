#include <unordered_set>
std::vector<int> solve( std::vector< int > v ) {
  const std::unordered_set s( v.crbegin(), v.crend() );
  return { s.cbegin(), s.cend() };
}
