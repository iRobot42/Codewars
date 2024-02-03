#include <fmt/format.h>
std::string correct( std::string time ) {
  unsigned hours, minutes, seconds;
  if ( sscanf( time.c_str(), "%u:%u:%u", &hours, &minutes, &seconds ) != 3 ) return {};
  else minutes += seconds > 59, hours += minutes > 59;
  return fmt::format( "{:02}:{:02}:{:02}", hours % 24, minutes % 60, seconds % 60 );
}
