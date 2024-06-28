#include <range/v3/algorithm/partition.hpp>
using namespace std;
vector<long long> wheatFromChaff( vector<long long> v ) {
  return ranges::partition( v, []( auto n ){ return n < 0; }), v;
}
