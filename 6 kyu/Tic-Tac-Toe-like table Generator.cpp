#include <fmt/format.h>
std::string displayBoard( const std::vector< char >& b, unsigned short w ) {
  std::string r, s{ '\n' + std::string( 4 * w - 1, '-' ) + '\n' };
  for ( size_t i{}; i < b.size(); )
    r += fmt::format( " {} {}", b[ i++ ], i == b.size() ? "" : i % w ? "|" : s );
  return r;
}
