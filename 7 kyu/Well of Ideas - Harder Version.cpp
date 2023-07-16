std::string well( const std::vector< std::vector< std::string >>& a ) {
  unsigned c{};
  for ( const auto& v : a )
    for ( const auto& s : v )
      c += tolower( s.front() ) == 'g';
  return c > 2 ? "I smell a series!" : c ? "Publish!" : "Fail!";
}
