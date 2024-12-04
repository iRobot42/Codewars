#include <numeric>
std::string alphabetized( const std::string& str ) {
  std::array< std::string, 'z'+1 > a;
  for ( const char c : str ) a[ tolower( c ) ] += c;
  return accumulate( a.cbegin() + 'a', a.cend(), std::string() );
} // TC: O(n)
