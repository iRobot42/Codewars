#include <fmt/format.h>
std::string zombie_shootout( unsigned zombies, unsigned distance, unsigned ammo ){
  const bool empty{ ammo < ( distance *= 2 )};
  return zombies < distance && zombies < ammo ?
    fmt::format( "You shot all {} zombies.", zombies ) :
    fmt::format( "You shot {} zombies before being eaten: {}.",
      empty ? ammo : distance, empty ? "ran out of ammo" : "overwhelmed" );
}
