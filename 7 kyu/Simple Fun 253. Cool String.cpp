bool cool_string( const std::string& s ) {
  for ( size_t i{ 1 }; i < s.size(); ++i )
    if ( isupper( s[ i ] ) == isupper( s[ i-1 ] )) return false;
  return isalpha( s.front() );
}
