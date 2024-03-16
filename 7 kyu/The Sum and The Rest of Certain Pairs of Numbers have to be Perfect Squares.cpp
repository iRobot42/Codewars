#include <cmath>
std::array<unsigned,2> closestPairToNum( const unsigned lim ) {
  for ( auto m{ lim - 1 }; m > 1; --m )
    for ( auto n{ m - 1 }; n > 0; --n ) {
      const auto rs{ sqrt( m + n ) };
      const auto rd{ sqrt( m - n ) };
      if ( rs == floor( rs ) &&
           rd == floor( rd ))
        return { m, n };
    }
  return {}; // or throw;
}
