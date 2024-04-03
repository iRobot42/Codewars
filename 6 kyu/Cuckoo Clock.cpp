#include <fmt/format.h>
std::string cuckooClock( const std::string initial_time, int chimes ) {
  int h{ stoi( initial_time.substr( 0, 2 )) };
  int m{( stoi( initial_time.substr( 3 )) + 14 ) / 15 * 15 - 15 };
  do if (( m += 15 ) > 59 ) m = 0, ++h > 12 ? h = 1 : 1;
  while (( chimes -= m ? 1 : h ) > 0 );
  return fmt::format( "{:02}:{:02}", h, m );
}
