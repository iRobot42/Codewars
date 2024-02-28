#include <numeric>
unsigned long long sum_factorial( std::vector< int > v ) {
  return accumulate( v.cbegin(), v.cend(), 0ull, []( const auto& acc, int num ) {
    auto fact{ 1ull }; while ( num ) fact *= num--; return acc + fact; });
}
