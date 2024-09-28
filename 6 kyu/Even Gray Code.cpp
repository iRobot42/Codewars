#include <bitset>
#include <fmt/format.h>
std::string even_gray_code( int size, int position ) {
  if ( !position ) return std::string( size, '0' );
  const auto bit{ std::bitset< sizeof position * 8 >( position )};
  const auto bin{ bit.to_string() + std::to_string( bit.count() & 1 )};
  return fmt::format( "{:0>{}}", bin.substr( bin.find( '1' )), size );
}
