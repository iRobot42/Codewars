std::array<int,2> two_oldest_ages( std::vector< int > a ) {
  int y{}, z{};
  for ( const int i : a )
    if ( i > z ) std::swap( y = i, z );
    else if ( i > y ) y = i;
  return { y, z };
} // O(n)
