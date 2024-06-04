#include <bitset>
namespace UnaryMessage {
  std::string send( const std::string& text ) {
    std::string unary, binary;
    for ( const char c : text ) binary += std::bitset< 7 >( c ).to_string();
    for ( size_t n{ 1 }; const char& c : binary )
      if ( c == *std::next( &c )) ++n;
      else unary += ( c == '0' ? "00 " : "0 " ) + std::string( n, '0' ) + ' ', n = 1;
    return unary.pop_back(), unary;
  }
  std::string receive( const std::string& text ) {
    std::istringstream ss{ text };
    std::string z, n, binary, decoded;
    while ( ss >> z >> n ) binary += std::string( n.size(), '0' + z.size() % 2 );
    for ( size_t i{}; i < binary.size(); i += 7 )
      decoded += stoi( binary.substr( i, 7 ), nullptr, 2 );
    return decoded;
  }
}
