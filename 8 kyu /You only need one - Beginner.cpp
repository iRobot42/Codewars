bool check( const std::vector< std::string >& seq, const std::string& elem ) {
  for ( const auto& s : seq )
    if ( s == elem ) return true;
  return false;
}
