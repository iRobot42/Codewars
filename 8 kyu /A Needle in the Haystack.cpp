#include <fmt/format.h>
#include <range/v3/algorithm/find.hpp>
std::string findNeedle( const std::vector< std::string >& v ) {
  return fmt::format( "found the needle at position {}",
    distance( v.cbegin(), ranges::find( v, "needle" )));
}
