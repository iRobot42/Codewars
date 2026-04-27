#include <string>
std::string neutralise( const std::string& s1, const std::string& s2 ) {
  std::string s;
  for ( size_t i{}; i < s1.size(); ++i )
    s += s1[ i ] == s2[ i ] ? s1[ i ] : '0';
  return s;
}
