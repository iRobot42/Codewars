std::unordered_map< std::string, std::vector<std::string>>
conjugate( std::string verb ) {
  std::vector< std::string > conjugations( 6 );
  const auto base{ verb.substr( 0, verb.size()-2 )};
  const std::vector< std::vector< std::string >> suffix{
    { "o", "as", "a", "amos", "áis", "an" },
    { "o", "es", "e", "emos", "éis", "en" },
    { "o", "es", "e", "imos",  "ís", "en" }};
  const char s{ verb[ verb.size()-2 ]};
  const int iform{ s == 'a' ? 0 : s == 'e' ? 1 : 2 };
  for ( int i{}; i < 6; ++i )
    conjugations[ i ] = base + suffix[ iform ][ i ];
  return {{ verb, conjugations }};
}
