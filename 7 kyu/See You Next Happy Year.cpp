#include <unordered_set>
unsigned short nextHappyYear( unsigned short year ) {
  while ( 1 ) if ( const std::string s{ std::to_string( ++year )};
    std::unordered_set( s.cbegin(), s.cend() ).size() > 3 ) break;
  return year;
}
