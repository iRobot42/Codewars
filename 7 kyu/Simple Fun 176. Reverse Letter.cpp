std::string reverse_letter( const std::string& s ) {
  std::string r;
  copy_if( s.crbegin(), s.crend(), back_inserter( r ), isalpha );
  return r;
}
