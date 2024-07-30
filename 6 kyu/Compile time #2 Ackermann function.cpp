template< int m, int n >
struct ackermann {
  static constexpr int A( int M, int N ) {
    return M ? N ? A( M-1, A( M, N-1 )) : A( M-1, 1 ) : N+1; }
  static constexpr int value{ A( m, n ) };
};
