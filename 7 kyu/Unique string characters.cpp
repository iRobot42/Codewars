#include <unordered_set>
std::string solve( std::string a, std::string b ) {
  std::string r;
  std::unordered_set< char > s( b.cbegin(), b.cend() );
  for ( const char c : a ) if ( s.find( c ) == s.cend() ) r += c;
  s = { a.cbegin(), a.cend() };
  for ( const char c : b ) if ( s.find( c ) == s.cend() ) r += c;
  return r;
}
