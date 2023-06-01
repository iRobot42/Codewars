std::vector<int> pipe_fix( const std::vector< int >& nums) {
  std::vector< int > v;
  auto [ min, max ]{ minmax_element( nums.cbegin(), nums.cend() ) };
  for ( int i{ *min }; i <= *max; ++i ) v.push_back( i );
  return v;
}
