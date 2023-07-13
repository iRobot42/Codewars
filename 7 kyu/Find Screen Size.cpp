#include <fmt/format.h>
std::string find_screen_height( int w, const std::string& r ) {
  return fmt::format( "{}x{}", w, w * stoi( r.substr( r.find( ':' )+1 )) / stoi( r ));
}
