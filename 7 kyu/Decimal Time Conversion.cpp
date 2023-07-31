#include <cmath>
#include <fmt/format.h>
double toIndustrial( int time ) {
  return round( time / 60. * 100 ) / 100;
}
double toIndustrial( std::string time ) {
  return toIndustrial( stoi( time ) * 60 +
    stoi( time.substr( time.find( ':' ) + 1 )));
}
std::string toNormal( double time ) {
  const int t = round( time * 60 );
  return fmt::format( "{}:{:02}", t / 60, t % 60 );
}
