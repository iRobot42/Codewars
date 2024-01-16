#include <fmt/format.h>
std::string to_time( unsigned s ) {
  return fmt::format( "{} hour(s) and {} minute(s)", s / 3600, s % 3600 / 60 );
}
