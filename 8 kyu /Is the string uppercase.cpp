bool is_uppercase( const std::string& s ) {
  return none_of( s.cbegin(), s.cend(), islower );
}
