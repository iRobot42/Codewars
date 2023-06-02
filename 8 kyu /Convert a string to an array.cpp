std::vector<std::string> string_to_array( const std::string& s ) {
  if ( s.empty() ) return { "" };
  std::vector< std::string > vec;
  std::istringstream iss( s );
  std::string wrd;
  while ( iss >> wrd ) vec.push_back( wrd );
  return vec;
}
