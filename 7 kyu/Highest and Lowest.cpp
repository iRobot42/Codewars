#include <fmt/format.h>
std::string highAndLow( const std::string& numbers ) {
  std::istringstream ss{ numbers };
  const auto& [ low, high ]{ minmax_element(
    std::istream_iterator< int >( ss ),
    std::istream_iterator< int >() )};
  return fmt::format( "{} {}", *high, *low );
}
