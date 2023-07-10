std::string get_planet_name( int id ) {
  return std::vector{ "", "Mercury", "Venus", "Earth", "Mars",
    "Jupiter", "Saturn", "Uranus", "Neptune", "Pluto" }[ id ];
}
