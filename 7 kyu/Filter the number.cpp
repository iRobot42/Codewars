long long filter_string( const std::string& s ) {
  long long n{};
  for ( const char c : s )
    if ( isdigit( c ))
      ( n *= 10 ) += c-'0';
  return n;
}
