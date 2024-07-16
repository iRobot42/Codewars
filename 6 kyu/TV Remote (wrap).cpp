int tv_remote( const std::string& word ) {
  const std::string layout{ "abcde123fghij456klmno789pqrst.@0uvwxyz_/^ " };
  std::unordered_map< char, std::pair< int, int >> keyboard; // O(1) search
  for ( size_t i{}; i < layout.size(); ++i )
    keyboard[ layout[ i ]] = std::make_pair( i % 8, i / 8 );
  int presses{}, caps{};
  std::pair< int, int > cursor;
  auto distance{ [ & ]( const char c ) {
    const int dx{ abs( keyboard[ c ].first - cursor.first )};
    const int dy{ abs( keyboard[ c ].second - cursor.second )};
    return std::min( 8 - dx, dx ) + std::min( 6 - dy, dy ) + 1 /*OK*/; }};
  for ( char c : word ) { // TC: O(n)
    if ( isalpha( c ) && caps == !isupper( c ))
      presses += distance( '^' ), cursor = keyboard[ '^' ], caps = !caps;
    presses += distance( c = tolower( c )), cursor = keyboard[ c ];
  }
  return presses;
}
