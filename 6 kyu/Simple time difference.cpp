#include <set>
#include <fmt/format.h>
std::string solve( std::vector< std::string > times ) {
  std::set< int > tm;
  for ( const auto& time : times )
    tm.insert( stoi( time ) * 60 + stoi( time.substr( 3 )));
  int diff{ 1439 - *tm.crbegin() + *tm.cbegin() };
  for ( auto it{ next( tm.cbegin() )}; it != tm.cend(); ++it )
    diff = std::max( diff, *it - *prev( it ) - 1 );
  return fmt::format( "{:02}:{:02}", diff / 60, diff % 60 );
}
