struct Kata {
  static std::string Decode( std::vector< int > code, int n ) {
    std::string decoded, key{ std::to_string( n ) };
    decoded.reserve( code.size() );
    size_t i{}, s{ key.size() };
    for ( const int number : code )
      decoded += 144 + number - key[ i++ % s ];
    return decoded;
  }
};
