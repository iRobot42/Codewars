#include <fmt/format.h>
std::string alphabetWar( std::string fight ) {
  int power{};
  for ( const char letter : fight )
    switch( letter ) {
      case 'w': power += 4; break;
      case 'p': power += 3; break;
      case 'b': power += 2; break;
      case 's': power += 1; break;
      case 'm': power -= 4; break;
      case 'q': power -= 3; break;
      case 'd': power -= 2; break;
      case 'z': power -= 1; break;
    }
  return !power ? "Let's fight again!" :
    fmt::format( "{} side wins!", power > 0 ? "Left" : "Right" );
}
