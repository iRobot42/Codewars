std::string speedify( const std::string& input ) {
  std::string s( input.size()+25, ' ' );
  for ( size_t i{}; i < input.size(); ++i )
    s[ i + input[ i ]-'A' ] = input[ i ];
  return s.erase( s.find_last_not_of( ' ' )+1 ), s;
}
