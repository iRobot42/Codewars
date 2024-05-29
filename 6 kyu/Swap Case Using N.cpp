#include <bitset>
std::string swap( std::string s, int n ) {
  if ( !n ) return s;
  std::string b{ std::bitset< 32 >( n ).to_string() };
  b.erase( 0, b.find( '1' ));
  for ( size_t i{}, l{ b.size() }; char& c : s )
    if ( isalpha( c ) && b[ i++ % l ] == '1' ) c ^= 32;
  return s;
}
