#include <numeric>
#include <set>
unsigned long long minValue( std::vector< int > v ) {
  const std::set< int > s{ v.cbegin(), v.cend() };
  return accumulate( s.cbegin(), s.cend(), 0ull,
    []( auto a, auto d ){ return a * 10 + d; });
}
