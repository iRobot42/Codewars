struct CountDig {
  static int nbDig( int n, int d ) {
    int c{};
    do { int t{ n * n };
      do if ( t % 10 == d ) ++c;
      while ( t /= 10 );
    } while ( n-- );
    return c;
  }
};
