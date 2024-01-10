struct Kata {
  static std::vector< int > Encode( std::string str, int n ) {
    std::vector< int > encoded;
    encoded.reserve( str.size() );
    std::string key{ std::to_string( n ) };
    size_t i{}, s{ key.size() };
    for ( const char letter : str )
      encoded.push_back( letter + key[ i++ % s ] - 144 );
    return encoded;
  }
};
