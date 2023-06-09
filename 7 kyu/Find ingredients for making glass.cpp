#include <iomanip>
std::string createIngredients( double sn = 0, double sw = 0, double ch = 0 ) {
  if ( sn < 0 || sw < 0 || ch < 0 ) return {};
  double x{ ch ? ch : sw ? sw / 36 : sn ? sn / 12 : 5 };
  std::ostringstream oss;
  oss << std::fixed << std::setprecision( 2 )
    << '[' << x * 12 << ';' << x * 36 << ';' << x << ']';
  return oss.str();
}
