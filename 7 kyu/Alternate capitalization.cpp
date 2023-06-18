typedef std::string S;
std::pair<S,S> capitalize( const S& s ) {
  S a( s ), b( s );
  for ( size_t i{}; i < s.size(); ++i )
    ( i & 1 ? b : a )[ i ] -= 32;
  return { a, b };
}
