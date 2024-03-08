#include <numeric>
namespace GpsSpeed {
  static int gps( int s, std::vector< double >& x ) {
    return static_cast< int >( 3600 * *max_element( x.begin(),
      adjacent_difference( x.cbegin(), x.cend(), x.begin() )) / s );
  }
};
