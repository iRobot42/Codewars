#include <fmt/format.h>
std::string encode( std::string_view txt ) {
  std::string tmp, bin;
  for ( const char c : txt ) tmp += fmt::format( "{:08b}", c ); // or: std::bitset< 8 >( c ).to_string();
  for ( const char c : tmp ) bin += std::string( 3, c );
  return bin;
}
std::string decode( std::string_view bin ) {
  std::string tmp, txt;
  for ( size_t i{}; i < bin.size(); i += 3 ) tmp += std::to_string( bin[ i ] + bin[ i+1 ] + bin[ i+2 ] > 145 );
  for ( size_t i{}; i < tmp.size(); i += 8 ) txt += stoi( tmp.substr( i, 8 ), nullptr, 2 );
  return txt;
}
