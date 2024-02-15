#include <range/v3/numeric/accumulate.hpp>
#include <fmt/format.h>
std::string payCheese( std::vector< int > a ) {
  return fmt::format( "£{}", ranges::accumulate( a, 99 ) / 100 * 35 );
}
