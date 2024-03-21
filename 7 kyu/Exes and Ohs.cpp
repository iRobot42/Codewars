bool XO( const std::string& s ) {
  int i{};
  for ( auto c : s )
         if ( toupper( c ) == 'X' ) ++i;
    else if ( toupper( c ) == 'O' ) --i;
  return !i;
}
