#include <regex>
std::string replace( const std::string& s ) {
  return regex_replace( s, std::regex( "[aeiouAEIOU]" ), "!" );
}
