#include <cmath>
double DetermineBase( std::function< double( double )> f ) {
  return exp( 1 / f( M_E ) );
}
