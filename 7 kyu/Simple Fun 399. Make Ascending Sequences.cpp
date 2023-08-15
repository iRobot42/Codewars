int make_sequence( int n ) {
  int a[ 1001 ]{ 0, 1 };
  for ( int i{ 2 }; i <= n; ++a[ i++ ])
    for ( int j{ 1 }, t{ i/2 }; j <= t; ++j )
      a[ i ] += a[ j ];
  return a[ n ];
}
