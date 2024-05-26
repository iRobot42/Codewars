std::string remove_parentheses( const std::string& str ) {
  std::string s;
  for ( int p{}; const char c : str )
         if ( c == '(' ) ++p;
    else if ( c == ')' ) --p;
    else if ( !p ) s += c;
  return s;
}
