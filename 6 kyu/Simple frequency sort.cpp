std::vector<int> solve( const std::vector< int >& vec ) {
  std::unordered_map< int, int > fr;
  for ( const int i : vec ) ++fr[ i ];
  std::vector res{ vec };
  sort( res.begin(), res.end(), [ &fr ]( int a, int b ) {
    return fr[ a ] == fr[ b ] ? a < b : fr[ a ] > fr[ b ]; });
  return res;
}
