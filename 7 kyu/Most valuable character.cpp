char solve( std::string s ) {
  std::vector< int > v( 26 + 'a' );
  for ( const char c : s ) if ( !v[ c - 'a' ] )
    v[ c - 'a' ] = 1, v[ c ] = s.find_last_of( c ) - s.find_first_of( c );
  return std::max( max_element( v.cbegin() + 'a', v.cend() ) - v.cbegin(),
    max_element( v.cbegin(), v.cbegin() + 26 ) - v.cbegin() + 'a' );
}
