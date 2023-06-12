#include <fmt/format.h> // C++20: <format>
using namespace std; // bad idea, but good idea
string driver( const array< string, 5 >& data ) {
  const string months{ "JanFebMarAprMayJunJulAugSepOctNovDec" };
  enum d: size_t { fname, mname, sname, bdate, gender };
  string name{ data[ sname ].substr( 0, 5 ) };
  transform( name.cbegin(), name.cend(), name.begin(), ::toupper );
  return fmt::format( "{:9<5}{}{:0>2}{:0>2}{}{}{}9AA",
    name, *( data[ bdate ].crbegin() + 1 ),
    months.find( data[ bdate ].substr( 3, 3 ) ) / 3 + 1
      + 50 * ( data[ gender ] == "F" ),
    data[ bdate ].substr( 0, 2 ),
    data[ bdate ].back(), data[ fname ].front(),
    data[ mname ].empty() ? '9' : data[ mname ].front() );
}
