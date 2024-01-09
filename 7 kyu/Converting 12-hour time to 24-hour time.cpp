#include <fmt/format.h>
std::string to24HourTime( int h, int m, const std::string& p ) {
  return fmt::format( "{:02}{:02}", h % 12 + ( p == "pm" ) * 12, m );
}
