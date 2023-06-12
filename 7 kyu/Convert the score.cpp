std::vector<int> scoreboard( const std::string& s ) {
  size_t b{ s.find_last_of( ' ' ) + 1 };
  size_t a{ s.find_last_of( ' ', b - 2 ) + 1 };
  if ( a == std::string::npos ) a = 0;
  const std::string n{ "nilonetwothrfoufivsixseveignin" };
  return { int( n.find( s.substr( a, 3 ))) / 3,
           int( n.find( s.substr( b, 3 ))) / 3 };
}
