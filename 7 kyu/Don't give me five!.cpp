#include <string>
int dontGiveMeFive( int start, int end ) {
  int count{};
  do count += std::to_string( start ).find( '5' ) == std::string::npos;
  while ( ++start <= end );
  return count;
}
