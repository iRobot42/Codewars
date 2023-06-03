int sumOfDifferences( const std::vector< int >& arr ) {
  if ( arr.size() < 2 ) return 0;
  std::pair minmax{ minmax_element( arr.cbegin(), arr.cend() ) };
  return *minmax.second - *minmax.first;
}
