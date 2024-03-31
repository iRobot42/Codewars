bool solution( const std::string& s, const std::string& e ) {
  return equal( e.crbegin(), e.crend(), s.crbegin() );
}
