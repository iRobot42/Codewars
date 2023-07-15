#define V2

#ifdef V1
#include <numeric>
int findDeletedNumber( std::list< int > s, std::list< int > m ) {
  return s.back() * ++s.back() / 2 - accumulate( m.cbegin(), m.cend(), 0 );
}

#elif defined( V2 )
#include <numeric>
int findDeletedNumber( std::list< int > s, std::list< int > m ) {
  s.splice( s.cend(), m );
  return accumulate( s.cbegin(), s.cend(), 0, std::bit_xor() );
}

#endif
