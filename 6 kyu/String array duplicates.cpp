std::vector<std::string> dup( std::vector< std::string > arr ) {
  for ( auto& s : arr ) {
    std::string t;
    for ( const char c : s ) if ( c != t.back() ) t += c;
    s = t;
  }
  return arr;
}
