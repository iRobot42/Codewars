#include <regex>
std::string disemvowel( const std::string& troll ) {
  const std::regex vowels{ "[aeiou]", std::regex_constants::icase };
  return regex_replace( troll, vowels, "" );
}
