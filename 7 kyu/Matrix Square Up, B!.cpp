using namespace std;
vector< vector<string>> matrixSquareUp( int b ) {
  vector< vector< string >> m( b, vector< string >( b, "x" ) );
  for ( int r{}; r < b; ++r )
    for ( int c{}, n{ b }; c < b; n = b - ++c )
      if ( n <= r + 1 ) m[ r ][ c ] = to_string( n );
  return m;
}
