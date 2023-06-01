std::string rps( const std::string& p1, const std::string& p2 ) {
  switch ( p1.front() - p2.front() ) {
    case 0: return "Draw!";
    case -1: case -2: case 3: return "Player 1 won!";
  }
  return "Player 2 won!";
}
