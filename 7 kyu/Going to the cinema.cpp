#include <cmath>
namespace Movie {
  static int movie( int card, int ticket, double perc ) {
    double bprice( card ), visits{};
    do bprice += ticket * pow( perc, ++visits );
    while ( ceil( bprice ) >= ticket * visits );
    return visits;
  }
}
