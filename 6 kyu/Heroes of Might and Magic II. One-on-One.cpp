#include <fmt/format.h>
std::string who_would_win( const std::tuple< std::string, int, int, int >& mon1,
                           const std::tuple< std::string, int, int, int >& mon2 ) {
  double hp1( std::get< 1 >( mon1 ) * std::get< 2 >( mon1 )),
         hp2( std::get< 1 >( mon2 ) * std::get< 2 >( mon2 ));
  bool group{};
  while ( hp1 > 0 && hp2 > 0 ) ( group = !group )
    ? hp2 -= ceil( hp1 / std::get< 1 >( mon1 )) * std::get< 3 >( mon1 )
    : hp1 -= ceil( hp2 / std::get< 1 >( mon2 )) * std::get< 3 >( mon2 );
  return group
    ? fmt::format( "{} {}(s) won", ceil( hp1 / std::get< 1 >( mon1 )), std::get< 0 >( mon1 ))
    : fmt::format( "{} {}(s) won", ceil( hp2 / std::get< 1 >( mon2 )), std::get< 0 >( mon2 ));
}
