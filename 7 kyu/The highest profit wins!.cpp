#include <range/v3/algorithm/minmax_element.hpp>
std::pair<int, int> min_max( const std::vector< int >& arr ) {
  const auto [ min, max ]{ ranges::minmax_element( arr )};
  return std::make_pair( *min, *max );
}
