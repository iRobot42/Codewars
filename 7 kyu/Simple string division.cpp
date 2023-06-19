long long solve( std::string s, int k ) {
  long long x{};
  for ( int i{}, d = s.size() - k; i <= k; ++i )
    x = std::max( x, stoll( s.substr( i, d )));
  return x;
}
