#include <cmath>
unsigned long findNextPower( unsigned v, unsigned p ) {
  return pow( ceil( pow( ++v, 1. / p )), p );
}
