#include <unordered_set>
bool isAllPossibilities( std::vector< int > a ) {
  if ( a.empty() ) return false;
  std::unordered_set< int > s;
  for ( const size_t i : a ) // O(n)
    if ( s.find( i ) == s.cend() && i < a.size() )
      s.insert( i );
    else return false;
  return true;
}
