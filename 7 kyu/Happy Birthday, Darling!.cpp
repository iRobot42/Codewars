#include <fmt/format.h>
std::string womens_age( unsigned n ) {
  return fmt::format( "{}? That's just 2{}, in base {}!", n, n & 1, n / 2 );
}
