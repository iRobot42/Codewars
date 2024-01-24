std::string bumps( std::string road ) {
  for ( int n{}; const char c : road )
    if ( c == 'n' && ++n > 15 ) return "Car Dead";
  return "Woohoo!";
}
