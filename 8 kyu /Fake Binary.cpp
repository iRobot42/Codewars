std::string fakeBin( std::string s ) {
  for ( auto& c : s )
    c = '0' + ( c >= '5' );
  return s;
}
