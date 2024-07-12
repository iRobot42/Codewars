bool generationLoss( const std::string& orig, const std::string& copy ) {
  return copy.size() == orig.size() &&
    equal( copy.cbegin(), copy.cend(), orig.cbegin(), []( char a, char b ) {
      const static std::string s{ "#+:. " };
      const size_t i_deg{ s.find( a ) };
      return a == b || a == tolower( b ) || !isalpha( a ) && isalpha( b )
          || i_deg != s.npos && i_deg >= s.find( b ); });
}
