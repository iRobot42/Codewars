std::string last_non_empty_string( const std::string& str ) {
  int freq[ 26 ]{}, max_freq{};
  for ( const char c : str )
    max_freq = std::max( max_freq, ++freq[ c-'a' ] );
  std::string res;
  for ( auto i{ str.crbegin() }; i != str.crend(); ++i )
    if ( freq[ *i-'a' ]-- == max_freq ) res += *i;
  return { res.crbegin(), res.crend() };
}
