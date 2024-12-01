#include <range/v3/algorithm/count_if.hpp>
int countDeafRats( std::string_view town ) {
  return ranges::count_if( town, [ f{ 1 } ]( const char c ) mutable {
    return c != ' ' && ( f = !f ) && c == '~'; }); // lazy evaluation
}
