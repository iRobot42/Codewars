std::string sortMyString( const std::string& s ) {
  std::string even, odd;
  for ( size_t i{}; i < s.size(); ++i )
    ( i & 1 ? odd : even ) += s[ i ];
  return even + ' ' + odd;
}
