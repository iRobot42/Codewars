std::string get_planet_name( int id ) {
  return std::array{ "Mercury", "Venus", "Earth", "Mars",
    "Jupiter", "Saturn", "Uranus", "Neptune", "Pluto" }[ --id ];
}
