#include <queue>
std::string lemmings_battle( int b, const std::vector< int >& sg,
                                    const std::vector< int >& sb ) {
  std::priority_queue green{ std::less{}, sg }, blue{ std::less{}, sb };
  while ( !green.empty() && !blue.empty() ) {
    std::stack< int > bf;
    while ( !green.empty() && !blue.empty() && bf.size() < size_t( b ))
      bf.push( green.top() - blue.top() ), green.pop(), blue.pop();
    while ( !bf.empty() ) if ( !bf.top() ) bf.pop();
      else ( bf.top() > 0 ? green : blue ).push( abs( bf.top() )), bf.pop();
  }
  constexpr auto survivors{ []( auto& q ){ std::string s;
    while ( !q.empty() ) s += ' ' + std::to_string( q.top() ), q.pop();
    return s; }};
  return green.empty() ? blue.empty() ? "Green and Blue died"
    : "Blue wins:" + survivors( blue ) : "Green wins:" + survivors( green );
}
