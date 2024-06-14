#include <set>
std::string clique_of_3( const std::string& friends ) {
  std::unordered_map< std::string, std::set< std::string >> friends_of;
  std::istringstream ss{ friends };
  std::string s;
  while ( getline( ss, s )) {
    const auto a{ s.substr( 0, s.find( '/' )) };
    const auto b{ s.substr( a.size() + 1 ) };
    if ( a == b ) continue;
    for ( const auto& c : friends_of[ b ] )
      if ( friends_of[ c ].find( a ) != friends_of[ c ].cend() )
        return a + '/' + b + '/' + c;
    friends_of[ a ].insert( b );
    friends_of[ b ].insert( a );
  }
  return {};
}
