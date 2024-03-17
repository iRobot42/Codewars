#include <cmath>
std::vector<int> eqSumPowdig( const int hMax, const int exp ) {
  std::vector< int > v;
  for ( int i{ 2 }; i <= hMax; ++i ) {
    int t{ i }, s{};
    do s += pow( t % 10, exp );
    while ( t /= 10 );
    if ( s == i ) v.push_back( s );
  }
  return v;
}
