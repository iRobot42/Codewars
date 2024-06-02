#include <unordered_set>
using Msv_t = std::map< std::string, std::vector< char >>;
Msv_t remove_duplicate_ids( const Msv_t& obj ) {
  std::map< int, std::vector< char >> sorted;
  for ( const auto& [ key, val ] : obj ) sorted[ stoi( key ) ] = val;
  std::unordered_set< char > unique;
  Msv_t result;
  for ( auto it{ sorted.crbegin() }; it != sorted.crend(); ++it ) {
    std::vector< char > letters;
    for ( const char letter : it->second )
      if ( unique.insert( letter ).second )
        letters.push_back( letter );
    result[ std::to_string( it->first ) ] = letters;
  }
  return result;
}
