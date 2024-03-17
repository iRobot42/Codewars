#include <bitset>
int flip_bit( int value, size_t index ) {
  // return value xor 1 << --index;
  return std::bitset< sizeof( int ) * 8 >( value ).flip( --index ).to_ulong();
}
