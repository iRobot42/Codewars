#include <cmath>
std::vector<int> squareOrSquareRoot( const std::vector< int >& a ) {
  std::vector< int > v( a.size() );
  return { v.begin(), transform( a.cbegin(), a.cend(), v.begin(),
    []( int i ){ auto r{ sqrt( i )}; return fmod( r, 1 ) ? i * i : r; })};
}
