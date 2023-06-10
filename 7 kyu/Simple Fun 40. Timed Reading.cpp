#include <chrono>
#define MW w += l && l <= maxLength
int timed_reading( int maxLength, const std::string& text ) {
  int w{}, l{};
  for ( char c : text )
    if ( !isalpha( c ) ) MW, l = 0;
    else ++l;
  return MW;
}
