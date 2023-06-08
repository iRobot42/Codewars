std::string calculateArray( std::string s ) {
  std::istringstream ss( s );
  int avg{}, cnt{}, num{}, sum{};
  while ( getline( ss, s, ';' ) ) {
    for ( const char c : s ) if ( isalpha( c ) ) s.clear();
    if ( std::istringstream( s ) >> num ) avg += num, ++cnt;
  }
  avg = double( avg ) / cnt + 0.5;
  for ( const char c : std::to_string( avg ) ) sum += c - 48;
  return { std::to_string( avg ) + ','
         + std::to_string( sum ) + ','
         + ( sum % 5 ? "FALSE" : "TRUE" ) };
}
