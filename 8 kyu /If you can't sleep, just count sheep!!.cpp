std::string countSheep( int number ) {
  std::string s;
  for ( int i{ 1 }; i <= number; ++i )
    s += std::to_string( i ) + " sheep...";
  return s;
}
