#include <fmt/format.h>
using str = std::string;
str cookingTime( const str& n, int m, int s, const str& p ) {
  const int sec( ceil(( 60 * m + s ) * stod( n ) / stod( p )));
  return fmt::format( "{} minutes {} seconds", sec / 60, sec % 60 );
}
