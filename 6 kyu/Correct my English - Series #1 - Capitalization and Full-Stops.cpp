std::string correct_it( std::string str ) {
  size_t i{ str.find_first_not_of( ' ' )};
  std::string res{ char( toupper( str[ i ] ))};
  for ( ++i; i < str.size(); ++i )
    if ( isupper( str[ i ] )) {
      if ( res.back() != '.' ) res += '.';
      res += ' ', res += str[ i ];
    } else if ( islower( str[ i ] )) {
      if ( res.back() == '.' ) str[ i ] -= 32, res += ' ';
      else if ( str[ i-1 ] == ' ' ) res += ' ';
      res += str[ i ];
    } else if ( str[ i ] == '.' ) res += '.';
  return res.back() == '.' ? res : res + '.';
}
