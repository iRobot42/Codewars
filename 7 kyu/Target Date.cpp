#include <fmt/format.h>
struct DateDays {
  static std::string dateNbDays( double a0, double a, double p ) {
    const time_t t( ceil( log( a / a0 ) / log( 1 + p / 36000 )) * 86400 - 2209075200 );
    tm d; gmtime_r( &t, &d );
    return fmt::format( "{}-{:02}-{:02}", d.tm_year + 2016, d.tm_mon + 1, d.tm_mday );
  }
};
