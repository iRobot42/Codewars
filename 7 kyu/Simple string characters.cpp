std::vector<int> solve( std::string s ) {
  std::vector< int > v( 4 );
  for ( const char c : s )
    ++v[ isalpha( c ) ? !isupper( c ) : !isdigit( c ) + 2 ];
  return v;
}
