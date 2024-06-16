int strongest_even( int n, int m ) {
  do if (( m & ( m-1 )) < n ) break;
  while ( m &= m-1 );
  return m;
}
