unsigned jumpTo( unsigned x, unsigned y ) {
  unsigned dbl{ y / 2 }, fwd{ y % 2 };
  return dbl < x ? y - x : ++fwd + jumpTo( x, dbl );
}
