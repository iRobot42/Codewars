#include <unordered_set>
using S = std::string;
struct Rotations {
  static bool containAllRots( S s, std::vector< S >& a ) {
    std::unordered_set< S > r;
    for ( size_t i{}; i < s.size(); ++i )
      rotate( s.begin(), ++s.begin(), s.end() ), r.insert( s );
    for ( const auto& e : a )
      if ( r.find( e ) != r.cend() ) r.erase( e );
    return r.empty();
  }
};
