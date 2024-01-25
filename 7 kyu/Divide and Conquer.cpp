#include <variant>
int divCon( const std::vector< std::variant< int, char >>& mixed ) {
  int result{};
  for ( const auto element : mixed ) element.index()
    ? result -= std::get< char >( element )-'0'
    : result += std::get< int >( element );
  return result;
}
