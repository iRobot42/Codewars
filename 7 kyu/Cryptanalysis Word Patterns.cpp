std::string wordPattern( const std::string& word ) {
  if ( word.empty() ) return {};
  int code{ -1 };
  std::vector codes( 26, code );
  std::string pattern;
  for ( const char c : word ) {
    const int i{ tolower( c ) - 'a' };
    if ( codes[ i ] < 0 ) codes[ i ] = ++code;
    pattern += std::to_string( codes[ i ] ) + '.';
  } pattern.pop_back();
  return pattern;
}
