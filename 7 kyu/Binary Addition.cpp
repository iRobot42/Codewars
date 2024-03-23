#include <fmt/format.h>
std::string add_binary( uint64_t a, uint64_t b ) {
  return fmt::format( "{:b}", a + b );
}
