#include <bitset>
std::string fp32_to_ieee754( float num ) {
  std::string s{ std::bitset< 32 >( *( uint32_t* )&num ).to_string() };
  return s.insert( 1, " " ), s.insert( 10, " " ), s;
}
std::string fp64_to_ieee754( double num ) {
  std::string s{ std::bitset< 64 >( *( uint64_t* )&num ).to_string() };
  return s.insert( 1, " " ), s.insert( 13, " " ), s;
}
