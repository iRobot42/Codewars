#include <cmath>
int buses( const int kids, const int adults, const int places ) {
  return !places || ( kids && kids > adults / 2 * ( places - 2 ))
    ? 0 : ceil(( double( kids ) + adults ) / places );
}
