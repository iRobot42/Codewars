std::vector<int> wordValue( std::vector< std::string > a ) {
  std::vector< int > v( a.size() );
  for ( size_t i{}; i < a.size(); ++i )
    for ( const char c : a[ i ] )
      if ( c != 32 ) v[ i ] += ( c-96 ) * ( i+1 );
  return v;
}
