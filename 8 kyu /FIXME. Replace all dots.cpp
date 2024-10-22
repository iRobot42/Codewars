#include <regex>
std::string replace_dots( const std::string& s ) {
  return regex_replace( s, std::regex{ "\\." }, "-" );
}
