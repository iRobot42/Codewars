#include <bitset>
std::vector<std::string> word_to_bin( std::string word ) {
  std::vector< std::string > binary;
  binary.reserve( word.size() );
  for ( const char c : word )
    binary.push_back( std::bitset< 8 >( c ).to_string() );
  return binary;
}
