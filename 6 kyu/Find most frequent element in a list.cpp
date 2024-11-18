#include <forward_list>
std::pair<int, int> findMostFrequent( std::forward_list< int > l ) {
  std::pair< int, int > out;
  std::unordered_map< int, int > freq; for ( const int i : l ) ++freq[ i ];
  for ( const int i : l ) if ( freq[ i ] > out.second ) out = { i, freq[ i ] };
  return out;
}
