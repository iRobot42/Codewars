std::vector<int> bubbleSortOnce( const std::vector< int >& input ) {
  std::vector< int > output( input );
  for ( size_t i{ 1 }, s{ output.size() }; i < s; ++i )
    if ( output[ i-1 ] > output[ i ] )
      std::swap( output[ i-1 ], output[ i ] );
  return output;
}
