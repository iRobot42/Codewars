#include <fmt/format.h>
std::string solution( int n ) {
  return fmt::format( "Value is {:05}", n );
}
