int solve( const std::string& s ) {
  int max{}, cur{};
  for ( const char c : s ) switch ( c ) {
    case 'a': case 'e': case 'i': case 'o': case 'u':
      max = std::max( max, cur ), cur = 0; break;
    default: cur += c - 96;
  }
  return std::max( max, cur );
}
