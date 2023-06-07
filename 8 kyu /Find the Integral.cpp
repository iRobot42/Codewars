#include <string>
std::string integrate( const int& coefficient, const int& exponent ) {
  const int e{ exponent + 1 }, c{ coefficient / e };
  return std::to_string( c ) + "x^" + std::to_string( e );
}
