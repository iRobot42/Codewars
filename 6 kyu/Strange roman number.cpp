int solve( int n ) {
  return n > 10 ? 49 * n - 247 : std::array{ 0,4,10,20,35,56,83,116,155,198,244 }[ n ];
}
