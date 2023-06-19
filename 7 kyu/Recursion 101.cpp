std::pair<int, int> solve( int a, int b ) {
  return b && a >= 2 * b ? solve( a - 2 * b, b )
       : a && b >= 2 * a ? solve( a, b - 2 * a )
       : std::make_pair( a, b );
}
