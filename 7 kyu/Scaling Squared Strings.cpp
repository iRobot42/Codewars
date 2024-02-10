struct ScalingSqStrings {
  static std::string scale( const std::string& s, int h, int v ) {
    if ( s.empty() ) return {};
    std::istringstream ss{ s };
    std::string line, scaled;
    while ( ss >> line )
      for ( int i{}; i < v; ++i, scaled += '\n' )
        for ( const char c : line )
          scaled += std::string( h, c );
    return scaled.pop_back(), scaled;
  }
};
