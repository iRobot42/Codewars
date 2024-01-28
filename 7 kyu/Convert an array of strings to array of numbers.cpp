std::vector<float> to_float_array( const std::vector< std::string >& strings ) {
  int n( strings.size() );
  std::vector< float > floats( n );
  while ( n-- ) floats[ n ] = stof( strings[ n ] );
  return floats;
}
