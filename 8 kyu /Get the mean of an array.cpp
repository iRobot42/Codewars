#include <numeric>
int get_average( std::vector< int > marks ) {
  return accumulate( marks.cbegin(), marks.cend(), 0 ) / marks.size();
}
