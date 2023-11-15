std::vector<int> showBits( int n ) {
  int b{ 32 };
  std::vector< int > bin( b );
  while ( b-- ) bin[ b ] = n & 1, n >>= 1;
  return bin;
}
