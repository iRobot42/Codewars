std::string arbitrate( const std::string& s, int n ) {
  const size_t i{ s.find( '1' ) + 1 };
  return s.substr( 0, i ) + std::string( n - i, '0' );
}
