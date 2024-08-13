std::string solve( std::string s ) {
  constexpr auto is_palindrome{ []( std::string_view sv ) {
    return std::string( sv.crbegin(), sv.crend() ) == sv; }};
  if ( is_palindrome( s )) return "OK";
  for ( size_t i{}; i < s.size(); ++i )
    if ( is_palindrome( s.substr( 0, i ) + s.substr( i+1 )))
      return "remove one";
  return "not possible";
}
