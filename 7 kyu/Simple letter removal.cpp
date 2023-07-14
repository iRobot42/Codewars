std::string solve( const std::string& s, unsigned k ) {
  std::array< unsigned, 26 > h{};
  for ( const char c : s ) ++h[ c-'a' ];
  for ( unsigned& i : h )
    if ( i > k ) { i -= k; break; }
    else k -= i, i = 0;
  std::string r; r.reserve( s.size() );              // SC: O(n)
  for ( auto i{ s.crbegin() }; i != s.crend(); ++i ) // TC: O(n)
    if ( h[ *i-'a' ] ) r += *i, --h[ *i-'a' ];
  return { r.crbegin(), r.crend() };
}
