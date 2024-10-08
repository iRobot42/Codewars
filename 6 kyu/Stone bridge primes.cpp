#include <range/v3/algorithm/lower_bound.hpp>
int solve( int x, int y ) {
  constexpr std::array prime{ 2,3,5,7,13,17,19,37,73,97,109,163,193,257,433,487,577,769,
    1153,1297,1459,2593,2917,3457,3889,10369,12289,17497,18433,39367,52489,65537,139969,
    147457,209953,331777,472393,629857,746497,786433,839809,995329,1179649,1492993 };
  return ranges::lower_bound( prime, y ) - ranges::lower_bound( prime, x );
}
