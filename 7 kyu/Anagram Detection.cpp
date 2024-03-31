#include <unordered_map>
bool isAnagram( std::string s1, std::string s2 ) {
  std::unordered_map< char, int > m;
  for ( const auto e : s1 ) ++m[ tolower( e ) ];
  for ( const auto e : s2 ) --m[ tolower( e ) ];
  for ( const auto& e : m ) if ( e.second ) return false;
  return true;
}
