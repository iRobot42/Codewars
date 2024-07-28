#include <bitset>
using State_t = std::bitset< 9 >;
State_t solve( State_t board ) {
  constexpr int S[]{ 229, 464, 397, 308, 186, 89, 355, 23, 334 };
  State_t solution;
  for ( int i{}; i < 9; ++i ) if ( !board[ i ] ) solution ^= S[ i ];
  return solution;
}
