std::string calculate( std::string s ) {
  int n{ stoi( s )};
  for ( size_t i{ s.find_first_of( "pm" )}, j; i != s.npos; i = s.find_first_of( "pm", j ))
    n += ( s[ i ] == 'p' ? 1 : -1 ) * stoi( s.substr( j = s.find_first_of( "0123456789", i )));
  return std::to_string( n );
}
