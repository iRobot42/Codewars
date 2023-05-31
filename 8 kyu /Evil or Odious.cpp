#include <bitset>
std::string evil( int n ) {
  return std::bitset< 8 >( n ).count() & 1 ? "It's Odious!" : "It's Evil!";
}
