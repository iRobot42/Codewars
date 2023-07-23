#include <cmath>
std::string disariumNumber( int number ) {
  int sum{}, d = ceil( log10( number ));
  for ( int n{ number }; n; n /= 10 )
    sum += pow( n % 10, d-- );
  return sum == number ? "Disarium !!" : "Not !!";
}
