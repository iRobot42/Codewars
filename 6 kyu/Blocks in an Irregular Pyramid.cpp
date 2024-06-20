unsigned long long num_blocks( long w, long l, long h ) {
  return h * w * l
    + h * ( h - 1 ) * ( w + l ) / 2
    + h * ( h - 1 ) * ( 2 * h - 1 ) / 6;
}
