struct MaxRotate {
  static long long maxRot( long long n ) {
    std::string s{ std::to_string( n ) }, r{ s };
    for ( size_t i{}; i < s.size(); ++i, r = max( r, s ))
      rotate( s.begin() + i, s.begin() + i + 1, s.end() );
    return stoll( r );
  }
};
