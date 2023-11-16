int nthSmallest( std::vector< int > v, int n ) {
  return nth_element( v.begin(), v.begin() + --n, v.end() ), v[ n ];
}
