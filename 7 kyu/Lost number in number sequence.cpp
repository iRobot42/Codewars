#include <numeric>
int findDeletedNumber( std::list< int > s, std::list< int > m ) {
  return s.back() * ++s.back() / 2 - accumulate( m.cbegin(), m.cend(), 0 );
}
