int findSmallest( std::vector< int > v ) {
  return *min_element( v.begin(), v.end() );
}
