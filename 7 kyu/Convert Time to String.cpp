#include <fmt/format.h>
std::string convertTime( int t ) {
  return fmt::format( "{} {} {} {}",
    t/86400, t%86400/3600, t%3600/60, t%60 );
}
