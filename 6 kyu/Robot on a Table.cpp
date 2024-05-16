std::array<int,2> robot( int n, int m, const std::string s ) {
  int r0{ 1 }, c0{ 1 }, r{ 1 }, c{ 1 }, x{ 1 }, y{ 1 };
  for ( const char direction : s ) switch ( direction ) {
    case 'L': if ( c > 1 ) --c; else if ( x++ < m ) ++c0; else return { r0, c0 }; break;
    case 'U': if ( r > 1 ) --r; else if ( y++ < n ) ++r0; else return { r0, c0 }; break;
    case 'R': if ( c < m ) x = std::max( x, ++c ); else return { r0, c0 }; break;
    case 'D': if ( r < n ) y = std::max( y, ++r ); else return { r0, c0 }; break; }
  return { r0, c0 };
}
