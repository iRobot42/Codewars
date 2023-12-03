int solve( std::string s ) {
  int l{}, t{};
  const std::string v{ "aeiou" };
  for ( const char c : s )
    if ( v.find( c ) != v.npos ) ++t;
    else l = std::max( l, t ), t = 0;
  return std::max( l, t );
}
