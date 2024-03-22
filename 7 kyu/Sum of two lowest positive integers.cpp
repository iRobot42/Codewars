#include <climits>
long sumTwoSmallestNumbers( std::vector< int > numbers ) {
  int min1{ INT_MAX }, min2{ INT_MAX };
  for ( const int number : numbers )
    if ( number < min1 ) min2 = min1, min1 = number;
    else if ( number < min2 ) min2 = number;
  return static_cast< long >( min1 ) + min2;
}
