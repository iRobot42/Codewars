std::string solve( std::string eq ) {
  std::stack< std::string > s;
  std::string t;
  for ( const char c : eq )
    if ( isalnum( c )) t += c;
    else s.push( t ), s.push({ c }), t.clear();
  s.push( t ), eq.clear();
  while ( !s.empty() ) eq += s.top(), s.pop();
  return eq;
}
