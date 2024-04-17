std::string blockPrint( const std::string& input ) {
  const auto l{ input.find_first_not_of( " " ) };
  if ( l == input.npos ) return {};
  const auto r{ input.find_last_not_of( " " ) };
  std::string ascii;
  for ( size_t line{}; line < 7; ++line ) {
    for ( size_t i{ l }; i <= r; ++i )
      ascii += alpha[ tolower( input[ i ] ) ][ line ] + ' ';
    while ( ascii.back() == ' ' ) ascii.pop_back();
    ascii += '\n';
  } ascii.pop_back();
  return ascii;
}
