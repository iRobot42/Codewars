int content_weight( int b, std::string s ) {
  int t{ stoi( s )};
  return ( s[ s.size()-6 ] == 'l' ? b * t : b ) / ++t;
}
