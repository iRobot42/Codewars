#include <sstream>
std::string multi_table( int number ) {
  std::ostringstream ss;
  for ( int i{ 1 }; i < 10; ++i )
    ss << i << " * " << number << " = " << i * number << '\n';
  ss << "10 * " << number << " = " << 10 * number;
  return ss.str();
}
