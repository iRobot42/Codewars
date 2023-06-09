bool is_dd( int n ) {
  int d[ 10 ]{};
  do d[ n % 10 ]++; while ( n /= 10 );
  for ( int i{ 1 }; i < 10; ++i )
    if ( d[ i ] == i ) return true;
  return false;
}
