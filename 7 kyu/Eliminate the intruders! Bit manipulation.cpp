long eliminate_unset_bits( std::string s ) {
  return ( 1L << count( s.cbegin(), s.cend(), '1' )) - 1;
}
