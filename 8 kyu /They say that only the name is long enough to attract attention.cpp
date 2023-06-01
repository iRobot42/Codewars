bool isOpposite( const std::string& s1, const std::string& s2 ) {
  if ( s1.empty() || s1.size() != s2.size() ) return false;
  for ( size_t i{}; i < s1.size(); ++i )
    if ( abs( s1[ i ] - s2[ i ] ) != 32 ) return false;
  return true;
}
