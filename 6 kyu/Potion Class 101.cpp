#include <cmath>
using RGB_t = std::array< unsigned char, 3 >;
struct Potion {
  RGB_t color;
  unsigned volume;
  Potion( const RGB_t& col, unsigned vol )
    : color( col ), volume( vol ) {};
  Potion mix( const Potion& other ) const {
    Potion mixed{ RGB_t(), volume + other.volume };
    for ( size_t i{}; i < color.size(); ++i )
      mixed.color[ i ] = ceil( double( color[ i ] * volume
        + other.color[ i ] * other.volume ) / mixed.volume );
    return mixed;
  }
};
