std::string pofi( unsigned n ) {
  return std::array{ "1", "i", "-1", "-i" }[ n % 4 ];
}
