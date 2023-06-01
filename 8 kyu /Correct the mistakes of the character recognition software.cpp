std::string correct( std::string str ) {
  for ( auto& c : str )
    switch ( c ) {
      case '5': c = 'S'; break;
      case '0': c = 'O'; break;
      case '1': c = 'I';
    }
  return str;
}
