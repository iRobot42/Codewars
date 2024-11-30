#include <range/v3/action/remove.hpp>
std::string no_space( std::string s ) {
  return s |= ranges::actions::remove( 32 );
}
