#include <numeric>
#include <fmt/format.h>
std::string midEndian( long long n ) {
  std::string big{ fmt::format( "{:X}", n ) };
  if ( big.size() & 1 ) big = '0' + big;
  std::deque< std::string > mid;
  for ( size_t i{}; i < big.size(); i += 2 )
    if ( i % 4 ) mid.push_front( big.substr( i, 2 ));
    else mid.push_back( big.substr( i, 2 ));
  return reduce( mid.cbegin(), mid.cend() );
}
