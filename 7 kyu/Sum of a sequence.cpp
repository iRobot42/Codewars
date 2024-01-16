int sequenceSum( int start, int end, int step ) {
  const int n{( end - start ) / step };
  return end < start ? 0 : ( 2 * start + n * step ) * ( n + 1 ) / 2;
}
