std::string nextLetter( std::string s ) {
  for ( char& c : s ) if ( isalpha( c ))
    c == 'z' || c == 'Z' ? c -= 25 : ++c;
  return s;
}
