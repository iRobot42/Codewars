#include <fmt/format.h>
namespace Printer {
  static std::string printerError( const std::string& s ) {
    return fmt::format( "{}/{}", count_if( s.cbegin(), s.cend(),
      []( char c ){ return c > 'm'; }), s.size() );
  }
};
