#include <cmath>
#include <numeric>
int minimumNumber( std::vector< int > numbers ) {
  int sum{ reduce( numbers.cbegin(), numbers.cend() )}, prime{ sum };
  for ( int factor( sqrt( prime )); factor > 1; --factor )
    if (!( prime % factor )) factor = ceil( sqrt( ++prime ));
  return prime - sum;
}
