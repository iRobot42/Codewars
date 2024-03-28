std::vector<std::string> number( const std::vector< std::string >& lines ) {
  std::vector< std::string > num_lines( lines.size() );
  for ( size_t i{}, s{ lines.size() }; i < s; ++i )
    num_lines[ i ] = std::to_string( i+1 ) + ": " + lines[ i ];
  return num_lines;
}
