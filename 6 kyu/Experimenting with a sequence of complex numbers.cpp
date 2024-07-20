#include <complex>
int f( std::complex< double > z, double eps ) {
  return std::max( -1.0, log( eps ) / log( abs( z )));
}
