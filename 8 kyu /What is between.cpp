std::vector<int> between( int start, int end ) {
  std::vector< int > v;
  while ( start <= end ) v.push_back( start++ );
  return v;
}
