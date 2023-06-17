#include <bitset>
int testit( int n ) {
  return std::bitset< 14 >( n ).count();
}
