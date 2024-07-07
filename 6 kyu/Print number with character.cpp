#include <fmt/format.h>
std::string print_number( unsigned num, char ch ) {
  const std::string number{ fmt::format( "{:05}", num ) }, numbers{
    " .... ..  ....  ....  ....  .. ....   ..   ...  . ..    ..    ..  ......"
    " .... ..  ..   ..   ..   ..   ...... .... ..  ..   ..    .. ..  .. .... "
    "..  ....  ....  .. .....    ..    ..........    .....     ..    ....... "
    "   ..   ..   .... ..  ....  .. .... ........  ..   ..   ..   ..    ..   "
    " .... ..  .. ....  .... ..  .. ....  .... ..  ....  .. ....   ..   ..   " },
    out{ std::string( 40, ch ) }, inn{ ch + std::string( 38, ' ' ) + ch + '\n' };
  std::string result{ out + '\n' + inn };
  for ( size_t i{}; i < 6; ++i ) {
    result += ".  ";
    for ( const char c : number )
      result += numbers.substr(( c-'0' ) * 36 + i * 6, 6 ) + ' ';
    result += " .\n";
  }
  replace( result.begin(), result.end(), '.', ch );
  return result + inn + out;
}
