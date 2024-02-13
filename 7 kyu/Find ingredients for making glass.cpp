#include <fmt/format.h>
std::string createIngredients( double sn = 0, double sw = 0, double ch = 0 ) {
  if ( sn < 0 || sw < 0 || ch < 0 ) return {};
  const double x{ ch ? ch : sw ? sw / 36 : sn ? sn / 12 : 5 };
  return fmt::format( "[{:.2f};{:.2f};{:.2f}]", x * 12, x * 36, x );
}
