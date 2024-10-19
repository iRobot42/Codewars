#include <numeric>
#include <unordered_map>
unsigned longestPalindrome( const std::string& s ) {
  std::unordered_map< char, int > f; for ( const char c : s ) if ( isalnum( c )) ++f[ toupper( c )];
  return accumulate( f.cbegin(), f.cend(), 0, []( auto a, const auto& p ){ return a + p.second / 2; }) * 2
           + any_of( f.cbegin(), f.cend(), []( const auto& p ){ return p.second & 1; });
}
