#include <iomanip>
std::string communicationModule( std::string p ) {
  const int d1{ stoi( p.substr( 8, 4 ) ) }, d2{ stoi( p.substr( 12, 4 ) ) },
    r{ p[ 4 ] == '0' ? d1 + d2 : p[ 4 ] == 'B' ? d1 - d2 : d1 * d2 };
  std::ostringstream out;
  out << std::setw( 4 ) << std::setfill( '0' ) << ( r < 0 ? 0 : r > 9999 ? 9999 : r );
  return p.replace( 4, 12, "FFFF" + out.str() + "0000" ), p;
}
