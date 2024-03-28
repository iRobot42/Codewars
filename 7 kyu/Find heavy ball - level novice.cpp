unsigned findBall( Scales s ) {
  for ( int i{ 1 }; i < 8; i += 2 )
    switch ( s.getWeight({ i-1 }, { i })) {
      case -1: return i-1;
      case  1: return i;
    }
  throw;
}
