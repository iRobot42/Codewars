#include <queue>
#include <fmt/format.h>
class Dinglemouse {
  std::string name;
  int age{};
  char sex{};
  std::queue< char > order;
public:
  Dinglemouse() {}
  Dinglemouse& setName( const std::string& n ) {
    if ( name.empty() ) order.push( 'n' );
    return name = n, *this;
  }
  Dinglemouse& setAge( int a ) {
    if ( !age ) order.push( 'a' );
    return age = a, *this;
  }
  Dinglemouse& setSex( char s ) {
    if ( !sex ) order.push( 's' );
    return sex = s, *this;
  }
  std::string hello() {
    std::string s{ "Hello." };
    while ( !order.empty() )
      s += order.front() == 'n' ? fmt::format( " My name is {}.", name )
         : order.front() == 'a' ? fmt::format( " I am {}.", age )
         : fmt::format( " I am {}male.", sex == 'F' ? "fe" : "" ),
      order.pop();
    return s;
  }
};
