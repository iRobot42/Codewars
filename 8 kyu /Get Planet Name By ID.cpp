std::string get_planet_name( int id ) {
  const std::string planets[]{ "", "Mercury", "Venus", "Earth",
    "Mars", "Jupiter", "Saturn", "Uranus", "Neptune", "Pluto" };
  return planets[ id ];
}
