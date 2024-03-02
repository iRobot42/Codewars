unsigned nextPal( const unsigned val ) {
  unsigned num{ val };
  while ( ++num ) {
    unsigned rev{}, tmp{ num };
    do ( rev *= 10 ) += tmp % 10;
    while ( tmp /= 10 );
    if ( rev == num ) return rev;
  }
  return num;
}
