struct Opstrings {
  static std::string vertMirror( const std::string& str ) {
    std::string mirror, line;
    std::istringstream iss( str );
    while ( iss >> line )
      mirror += std::string( line.crbegin(), line.crend() ) + '\n';
    return mirror.pop_back(), mirror;
  }
  static std::string horMirror( const std::string& str ) {
    return vertMirror( std::string( str.crbegin(), str.crend() ));
  }
  template< typename Func >
  static std::string oper( const Func fname, const std::string& str ) {
    return fname( str );
  }
};
