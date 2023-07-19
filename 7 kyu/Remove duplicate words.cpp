#include <sstream>
#include <unordered_set>
std::string removeDuplicateWords( const std::string& str ) {
  if ( str.empty() ) return {};
  std::istringstream ss( str );
  std::string word, result;
  std::unordered_set< std::string > unique;
  while ( ss >> word ) {
    if ( unique.find( word ) == unique.cend() )
      result += word + ' ';
    unique.insert( std::move( word ));
  }
  return result.pop_back(), result;
}
