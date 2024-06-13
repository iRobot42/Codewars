namespace Solution {
  std::string toLocString( i64 n ) {
    std::string s{ n < 0 ? "-" : "" };
    for ( int i{}; n; ++i, n /= 2 )
      if ( n & 1 ) s += i + ( i < 26 ? 97 : 39 );
    return s;
  }
  i64 toInt( std::string s ) {
    i64 n{};
    for ( const char c : s ) if ( isalpha( c ))
      n += 1l << ( c - ( islower( c ) ? 97 : 39 ));
    return s.find( '-' ) == s.npos ? n : -n;
  }
}
