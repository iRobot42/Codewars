long long shiftLeft( std::string s, std::string t ) {
  const auto [ is, it ]{ mismatch( s.crbegin(), s.crend(), t.crbegin() ) };
  return distance( is, s.crend() ) + distance( it, t.crend() );
}
