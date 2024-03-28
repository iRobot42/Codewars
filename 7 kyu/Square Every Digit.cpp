int square_digits( int num ) {
  std::string s;
  for ( const char c : std::to_string( num ))
    s += std::to_string(( c-'0') * ( c-'0'));
  return stoi( s );
}
