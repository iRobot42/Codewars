#include <fmt/format.h>
std::string print_number( unsigned num, char ch ) {
  const std::string
    number{ fmt::format( "{:05}", num ) },
    ssolid{ std::string( 40, ch ) },
    sempty{ ch + std::string( 38, ' ' ) + ch + '\n' };
  const std::vector< std::vector< std::string >> numbers{
    { " .... ", "..  ..", "..  ..", "..  ..", "..  ..", " .... " },
    { "  ..  ", " ...  ", ". ..  ", "  ..  ", "  ..  ", "......" },
    { " .... ", "..  ..", "   .. ", "  ..  ", " ..   ", "......" },
    { " .... ", "..  ..", "   .. ", "   .. ", "..  ..", " .... " },
    { "..  ..", "..  ..", "..  ..", " .....", "    ..", "    .." },
    { "......", "..    ", "..... ", "    ..", "    ..", "..... " },
    { "   .. ", "  ..  ", " .... ", "..  ..", "..  ..", " .... " },
    { "......", "..  ..", "   .. ", "  ..  ", " ..   ", " ..   " },
    { " .... ", "..  ..", " .... ", " .... ", "..  ..", " .... " },
    { " .... ", "..  ..", "..  ..", " .... ", "  ..  ", " ..   " }};
  std::string result{ ssolid + '\n' + sempty };
  for ( size_t i{}; i < 6; ++i ) {
    result += ".  ";
    for ( const char c : number )
      result += numbers[ c-'0' ][ i ] + ' ';
    result += " .\n";
  }
  replace( result.begin(), result.end(), '.', ch );
  return result + sempty + ssolid;
}
