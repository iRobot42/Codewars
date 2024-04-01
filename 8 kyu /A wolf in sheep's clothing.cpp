#include <fmt/format.h>
std::string warn_the_sheep( const std::vector< std::string >& queue ) {
  const auto wpos{ find( queue.crbegin(), queue.crend(), "wolf" ) - queue.crbegin() };
  return !wpos ? "Pls go away and stop eating my sheep" :
    fmt::format( "Oi! Sheep number {}! You are about to be eaten by a wolf!", wpos );
}
