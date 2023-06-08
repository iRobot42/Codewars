using std::vector;
vector< vector<int>> getMatrix( const int n ) {
  vector< vector< int >> v( n, vector< int >( n ) );
  for ( int i{}; i < n; ++i ) v[ i ][ i ] = 1;
  return v;
}
