std::string switcher( const std::vector< std::string >& v ) {
  std::string result, set{ " zyxwvutsrqponmlkjihgfedcba!? " };
  for ( const auto& s : v ) result += set[ stoi( s ) ];
  return result;
}
