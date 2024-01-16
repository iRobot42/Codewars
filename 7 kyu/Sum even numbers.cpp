#include <cmath>
int sum_even_numbers( const std::vector< double >& seq ) {
  int sum{};
  for ( const auto& num : seq )
    if ( !fmod( num, 2 ))
      sum += num;
  return sum;
}
