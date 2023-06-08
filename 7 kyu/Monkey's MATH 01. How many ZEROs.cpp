int countZero( std::string s ) {
  int 🐒{};
  const std::string s1{ "abdegopq069DOPQR" }, s2{ "%&B8" };
  for ( size_t i{}; i < s.size(); ++i )
    🐒 += ( s[ i ] == '(' && s[ i + 1 ] == ')' ) ||
           s1.find( s[ i ] ) != std::string::npos ? 1 :
           s2.find( s[ i ] ) != std::string::npos ? 2 : 0;
  return 🐒;
}
