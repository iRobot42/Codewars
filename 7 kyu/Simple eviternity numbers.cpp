int solve( int a, int b ) {
  int n{};
  for ( int i{ a }; i < b; ++i ) {
    int t{ i }, c3{}, c5{}, c8{}, f{ 1 };
    do switch ( t % 10 ) {
      case 3: ++c3; break;
      case 5: ++c5; break;
      case 8: ++c8; break;
      default: f = 0;
    } while ( f && ( t /= 10 ));
    if ( f && c3 <= c5 && c5 <= c8 ) ++n;
  }
  return n;
}
