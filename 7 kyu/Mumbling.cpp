#include <fmt/format.h>
struct Accumul {
  static std::string accum( const std::string& s ) {
    std::string r;
    for ( int i{}; const char c : s ) r += fmt::format( "{:c}{}-",
      toupper( c ), std::string( i++, tolower( c )));
    return r.pop_back(), r;
  }
};
