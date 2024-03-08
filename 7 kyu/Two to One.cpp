#include <set>
namespace TwoToOne {
  static std::string longest( const std::string& s1, const std::string& s2 ) {
    std::set< char > s( s1.cbegin(), s1.cend() );
    for ( const char c : s2 ) s.insert( c );
    return { s.cbegin(), s.cend() };
  }
};
