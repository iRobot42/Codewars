std::string arithmeticSequenceElements( int a, int d, int n ) {
  std::string s{ std::to_string( a ) };
  while ( --n ) s += ", " + std::to_string( a += d );
  return s;
}
