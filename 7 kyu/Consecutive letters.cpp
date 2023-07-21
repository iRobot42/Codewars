bool solve( std::string s ) {
  std::vector< int > v( 26 );
  for ( const char c : s ) if ( v[ c-'a' ]++ ) return false;
  const auto l{ find( v.cbegin(), v.cend(), 1 )}, r{ find( l, v.cend(), 0 )};
  return size_t( r - l ) == s.size();
} // O(n)
