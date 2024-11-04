#include <unordered_set>
#include <range/v3/numeric/accumulate.hpp>
int solve( const std::vector< std::vector< int >>& data ) {
  return ranges::accumulate( data, 1, []( const int acc, const auto& v ){
    return acc * std::unordered_set< int >( v.cbegin(), v.cend() ).size(); });
}
