#include <bitset>
std::vector< std::string > coin_flips( int flips ) {
  std::vector< std::string > combinations( 1 << flips );
  for ( size_t i{}; i < combinations.size(); ++i )
    combinations[ i ] = std::bitset< 10 >( i ).to_string( 'H','T' ).substr( 10 - flips );
  return combinations;
}
