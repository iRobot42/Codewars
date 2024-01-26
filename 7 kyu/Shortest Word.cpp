int find_short( std::string s ) {
  auto x{ SIZE_MAX };
  std::istringstream ss{ s };
  while ( ss >> s ) x = std::min( x, s.size() );
  return x;
}
