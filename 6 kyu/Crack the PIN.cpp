#include <openssl/md5.h>
#include <fmt/format.h>
std::string crack( const std::string& hash ) {
  for ( int p{}; p < 1e5; ++p ) {
    std::string md5, pin{ fmt::format( "{:>05d}", p ) };
    uint8_t digest[ MD5_DIGEST_LENGTH ];
    MD5( reinterpret_cast< uint8_t* >( pin.data() ), pin.size(), digest );
    for ( const auto n : digest ) md5 += fmt::format( "{:>02x}", n );
    if ( md5 == hash ) return pin;
  } return {};
}
