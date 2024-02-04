bool compare( std::string s1, std::string s2 ) {
  auto sum{ [ & ]( const auto& str ) {
    int s{};
    for ( const auto& c : str )
      if ( !isalpha( c )) return 0;
      else s += toupper( c );
    return s;
  }};
  return sum( s1 ) == sum( s2 );
}
