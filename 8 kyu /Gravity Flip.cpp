std::vector<int> flip( const char dir, const std::vector< int >& arr ) {
  std::vector< int > v( arr );
  dir == 'R' ? sort( v.begin(), v.end() ) : sort( v.rbegin(), v.rend() );
  return v;
}
