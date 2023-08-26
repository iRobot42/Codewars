bool tidyNumber( int n ) {
  const std::string s{ std::to_string( n )};
  return is_sorted( s.cbegin(), s.cend() );
}
