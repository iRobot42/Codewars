#include <range/v3/algorithm/max_element.hpp>
using Vs_t = std::vector< std::string >;
Vs_t sort_the_pile( Vs_t pile, const std::vector< unsigned >& used ) {
  sort( pile.end() - *ranges::max_element( used ), pile.end(), std::greater() );
  return pile;
}
