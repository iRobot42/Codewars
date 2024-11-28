#include <range/v3/algorithm/count_if.hpp>
int countDeafRats( std::string_view town, bool f = true ) {
  return ranges::count_if( town, [ &f ]( const char c ) {
    return c != ' ' && ( f = !f ) && c == '~'; });
}
