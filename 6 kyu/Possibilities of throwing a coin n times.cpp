#include <bitset>
std::string coin( int n ) {
  std::string s;
  for ( int i{}, total{ 1 << n }; i < total; ++i )
    s += std::bitset< 20 >( i ).to_string( 'H','T' ).substr( 20 - n ) + ',';
  return s.pop_back(), s;
}
