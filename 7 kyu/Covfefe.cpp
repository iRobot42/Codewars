std::string covfefe( std::string s ) {
  auto i{ s.find( "coverage" )};
  if ( i == s.npos ) return s + " covfefe";
  do s.replace( i+3, 4, "fef" );
  while (( i = s.find( "coverage", i+7 )) != s.npos );
  return s;
}
