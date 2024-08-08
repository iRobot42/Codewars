int solve( std::string s ) {
  if ( s.size() % 2 ) return -1;
  int cnt{}, rev{};
  for ( const char c : s )
    if ( c == '(' ) ++cnt; // (
    else if ( cnt ) --cnt; // ) and (...
    else ++cnt, ++rev;     // ) and 0
  return cnt / 2 + rev;
}
