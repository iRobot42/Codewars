#include <numeric>
std::string meanVsMedian( std::vector< int > v ) {
  sort( v.begin(), v.end() );
  const int median{ v[ v.size() / 2 ] },
            mean( accumulate( v.cbegin(), v.cend(), 0.0 ) / v.size() );
  return median == mean ? "same" : median > mean ? "median" : "mean";
}
