namespace coding {
  const std::string BIN[]{
    "10", "11", "0110", "0111", "001100", "001101",
    "001110", "001111", "00011000", "00011001" };
  std::string code( const std::string& str ) {
    std::string s;
    for ( const char c : str ) s += BIN[ c - '0' ];
    return s;
  }
  std::string decode( const std::string& str ) {
    std::string s;
    for ( size_t i{}; i < str.size(); )
      for ( int d{}; d < 10; ++d )
        if ( str.find( BIN[ d ], i ) == i ) {
          s += d + '0', i += BIN[ d ].size();
          break;
        }
    return s;
  }
}
