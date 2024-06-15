std::string get_order( const std::string& order ) {
  const std::string m[]{ "Burger", "Fries", "Chicken",
    "Pizza", "Sandwich", "Onionrings", "Milkshake", "Coke" };
  constexpr int M_SIZE{ sizeof( m ) / sizeof( *m ) };
  int q[ M_SIZE ]{};
  for ( size_t i{}; i < order.size(); )
    switch ( order[ i ] ) {
      case 'b': ++q[ 0 ], i += 6; break;
      case 'f': ++q[ 1 ], i += 5; break;
      case 'p': ++q[ 3 ], i += 5; break;
      case 's': ++q[ 4 ], i += 8; break;
      case 'o': ++q[ 5 ], i += 10; break;
      case 'm': ++q[ 6 ], i += 9; break;
      case 'c': order[ i+1 ] == 'h'
            ? ( ++q[ 2 ], i += 7 )
            : ( ++q[ 7 ], i += 4 );
    }
  std::string s;
  for ( int i{}; i < M_SIZE; ++i )
    while ( q[ i ]-- ) s += m[ i ] + ' ';
  return s.pop_back(), s;
}
