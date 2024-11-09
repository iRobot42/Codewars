#include <fmt/format.h>
std::string amort( double rate, int balance, int term, int numPayments ) {
  rate /= 1200;
  double b( balance ), c{ rate * b / ( 1 - pow( 1 + rate, -term ))}, p, i;
  for ( int payment{}; payment < numPayments; ++payment )
    i = rate * b, b -= ( p = c - i );
  return fmt::format( "num_payment {} c {} princ {} int {} balance {}",
    numPayments, round( c ), round( p ), round( i ), round( b ));
}
