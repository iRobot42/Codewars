bool valid_spacing( const std::string& s ) {
  return s.front() != ' ' && s.back() != ' ' && s.find( "  " ) == s.npos;
}
