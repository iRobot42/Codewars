#include <unordered_map>
unsigned most_frequent_item_count( const std::vector< int >& collection ) {
  if ( collection.empty() ) return 0;
  std::unordered_map< int, unsigned > frequency;
  for ( const int number : collection ) ++frequency[ number ];
  return max_element( frequency.cbegin(), frequency.cend(),
    []( const auto& a, const auto& b ){ return a.second < b.second; })->second;
}
