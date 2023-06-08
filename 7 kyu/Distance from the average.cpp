#include <numeric>
std::vector<double> distancesFromAverage( std::vector< int > input ) {
  double avg( accumulate( input.cbegin(), input.cend(), 0.0 ) / input.size() );
  std::vector< double > v;
  for ( const int n : input ) v.push_back( round( ( avg - n ) * 100 ) / 100 );
  return v;
}
