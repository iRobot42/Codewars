#include <cmath>
int solve( std::vector< int > numbers ) {
  int sum{};
  for ( size_t index{ 2 }; index < numbers.size(); ++index ) {
    bool is_prime_index{ true };
    const int limit( sqrt( index ));
    for ( int factor{ 2 }; is_prime_index && factor <= limit; ++factor )
      if (!( index % factor )) is_prime_index = false;
    if ( is_prime_index ) sum += numbers[ index ];
  }
  return sum;
}
