int squaredSpiral( int x, int y ) {
  const int n{ std::max( abs( x ), abs( y )) }, t{ 2 * n - 1 };
  return t * t - 1 + ( x == n ? y == -n ? 8 * n : abs( n + y )
    : y == n  ? abs( n - x ) + 2 * n
    : x == -n ? abs( n - y ) + 4 * n
              : abs( n + x ) + 6 * n );
} // TC: O(1)
