#include <unordered_set>
bool isConsecutive( std::string s ) {
  std::unordered_set< char > us;
  for ( size_t i{}, n{ s.size()-1 }; i < n; ++i )
    if ( us.find( s[ i ] ) != us.cend() ) return false;
    else if ( s[ i ] != s[ i+1 ] ) us.insert( s[ i ] );
  return true;
}
