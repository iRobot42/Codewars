#include <cmath>
using std::string;
int square_pi( int d ) {
  long s{};
  const string PD{ "3141592653589793238462643383279502884197169"
    "3993751058209749445923078164062862089986280348253421170679" };
  while ( d-- ) s += pow( PD[ d ] - '0', 2 );
  return ceil( sqrt( s ) );
}
