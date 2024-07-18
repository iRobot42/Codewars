int solve( long n ) {
  const std::string s{ std::to_string( n )};
  const auto moves{ [ &s ]( const char a, const char b ) {
    size_t i1{ s.find_last_of( a )}, i2{ s.find_last_of( b )};
    if ( a == '0' ) i1 = s.find_last_of( a, --i1 );
    if ( i1 == s.npos || i2 == s.npos ) return SIZE_MAX;
    size_t i{ !i1 || !i2 }, zcount{};
    if ( i ) i += i1 == 1 || i2 == 1;
    while ( s[ i++ ] == '0' ) ++zcount;
    return 2 * s.size() - 2 - i1 - i2 - ( i1 < i2 ) + zcount; }};
  return std::min( std::min( moves( '2','5' ), moves( '5','0' )),
                   std::min( moves( '7','5' ), moves( '0','0' )));
}
