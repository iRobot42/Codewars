#include <cmath>
#include <numeric>
struct NewAverage {
  static long long newAvg( std::vector< double >& donations, double average ) {
    const long long donation( ceil( average * ( donations.size() + 1 )
                            - reduce( donations.cbegin(), donations.cend() )));
    return donation > 0 ? donation
      : throw std::invalid_argument( "Donation must be positive!" );
  }
};
