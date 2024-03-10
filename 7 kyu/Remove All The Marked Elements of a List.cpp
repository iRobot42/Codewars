#include <unordered_set>
std::vector<int> remove_values( std::vector< int > integers, std::vector< int > values ) {
  std::unordered_set< int > extra( values.cbegin(), values.cend() );
  std::vector< int > result;
  for ( const int number : integers )
    if ( extra.find( number ) == extra.cend() )
      result.push_back( number );
  return result;
}
