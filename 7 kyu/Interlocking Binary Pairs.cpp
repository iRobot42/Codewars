bool interlockable( unsigned long long a, unsigned long long b ) {
  return !( a & b );
}
