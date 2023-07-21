int solve( std::string s ) {
  int length{};
  for ( size_t l{ 1 }, r{ s.size()-1 }; l <= r; ++l, --r )
    if ( s.substr( 0, l ) == s.substr( r )) length = l;
  return length;
}
