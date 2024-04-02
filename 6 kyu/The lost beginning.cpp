int find( const std::string& str ) {
  for ( size_t dig{ 1 }; dig < str.size(); ++dig ) {
    std::string tmp;
    int num{ stoi( str.substr( 0, dig )) }, n{ num };
    do tmp += std::to_string( n++ );
    while ( tmp.size() < str.size() );
    if ( tmp == str ) return num;
  }
  return stoi( str );
}
