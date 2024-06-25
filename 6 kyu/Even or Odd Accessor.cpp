struct Accessor {
  auto operator()( int n ) { return n & 1 ? "Odd" : "Even"; }
  auto operator[]( int n ) { return operator()( n ); }
} evenOrOdd;
