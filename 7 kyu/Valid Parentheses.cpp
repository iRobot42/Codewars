bool validParentheses( const std::string& str ) {
  std::stack< char > s;
  for ( const char c : str )
    if ( c == '(' ) s.push( c );
    else if ( !s.empty() && s.top() == '(' ) s.pop();
         else return false;
  return s.empty();
}
