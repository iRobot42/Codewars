#include <numeric>
#include <fmt/format.h>
std::string wood_length( const std::array< std::string, 3 >& dim ) {
  constexpr auto parse{ []( std::string_view s ) {
    int fcount{}; // count of 1/32" fractions
    for ( size_t i{}, num{}; i < s.size(); ++i )
      if ( s[ i ] == '/' ) return fcount += 32 / atoi( s.substr( ++i ).data() ) * num;
      else if ( isdigit( s[ i ] )) num = num * 10 + s[ i ] - '0';
      else if ( s[ i ] == '\'' ) fcount += num * 384, num = 0, ++i;
      else fcount += num * 32, num = 0;
    return fcount; }};
  const int t{ ( parse( dim[ 0 ] ) + parse( dim[ 1 ] ) + parse( dim[ 2 ] ) * 4 ) * 2 };
  const int ft{ t / 384 }, in{ t % 384 / 32 }, fr{ t % 32 }, g{ std::gcd( fr, 32 ) };
  return ( ft ? fmt::format( "{}\'{}", ft, in || fr ? " " : "" ) : "" )
       + ( in ? fmt::format( "{}{}", in, fr ? " " : "\"" ) : "" )
       + ( fr ? fmt::format( "{}/{}\"", fr / g, 32 / g ) : "" );
}
