#include <fmt/format.h>
#include <range/v3/algorithm/count.hpp>

std::string hist( const std::string& control ) {
  std::string histogram;
  auto add{ [ & ]( const char error ){
    const auto count{ ranges::count( control, error )};
    if ( count )
      histogram += fmt::format( "{:<2} {:<6}{}\\r",
        error, count, std::string( count, '*' )); }};
  add( 'u' ), add( 'w' ), add( 'x' ), add( 'z' );
  if ( !histogram.empty() )
    histogram.erase( histogram.size() - 2 );
  return histogram;
}
