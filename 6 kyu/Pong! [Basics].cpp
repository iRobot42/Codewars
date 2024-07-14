#include <fmt/format.h>
struct Pong {
  int player, lives[ 2 ];
  Pong( int max_score ) : player( 1 ), lives{ max_score, max_score } {}
  std::string play( int ball_pos, int player_pos ) {
    std::string outcome{ "Game Over!" };
    if ( !lives[ player ] || !lives[ player = !player ] ) return outcome;
    if ( abs( player_pos - ball_pos ) < 4 ) outcome = "hit the ball";
    else if ( --lives[ !player ] ) outcome = "missed the ball";
    else player = !player, outcome = "won the game";
    return fmt::format( "Player {} has {}!", 1 + player, outcome );
  }
};
