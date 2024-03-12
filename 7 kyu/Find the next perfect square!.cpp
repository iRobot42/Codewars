#include <cmath>
long findNextSquare( long sq ) {
  const long rt( sqrt( sq ));
  return rt * rt == sq ? pow( rt + 1, 2 ) : -1;
}
