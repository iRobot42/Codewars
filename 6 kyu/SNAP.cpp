#include <deque>
int snap( std::vector< std::string > flash_pile,
          std::vector< std::string > turtle_pile ) {
  std::deque< std::string > middle,
    flash( flash_pile.cbegin(), flash_pile.cend() ),
    turtle( turtle_pile.cbegin(), turtle_pile.cend() );
  int turn{}, snaps{};
  while ( !turtle.empty() ) {
    std::deque< std::string >& deck(( turn = !turn ) ? flash : turtle );
    const std::string card{ middle.empty() ? "" : middle.back() };
    middle.push_back( deck.front() ), deck.pop_front();
    if ( middle.back() == card ) {
      turn = 0, ++snaps;
      while ( !middle.empty() )
        flash.push_back( middle.front() ), middle.pop_front();
    }
  }
  return snaps;
}
