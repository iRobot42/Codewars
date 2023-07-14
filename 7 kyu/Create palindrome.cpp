bool solve( std::string s ) {
  for ( size_t l{}, r{ s.size()-1 }; l < r; ++l, --r )
    if ( s[ l ] != s[ r ] && abs( s[ l ] - s[ r ] ) != 2 )
      return false;
  return true;
}
