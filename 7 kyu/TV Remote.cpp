int tv_remote( const std::string& word ) {
  const std::string layout{ "abcde123fghij456klmno789pqrst.@0uvwxyz_/" };
  std::unordered_map< char, std::pair< int, int >> keyboard;
  for ( size_t i{}; i < layout.size(); ++i )
    keyboard[ layout[ i ]] = std::make_pair( i/8, i%8 );
  int presses{};
  std::pair< int, int > cursor;
  for ( const char c : word ) // TC: O(n), keyboard[ c ]: O(1)
    presses += abs( keyboard[ c ].first - cursor.first )
      + abs( keyboard[ c ].second - cursor.second ) + 1,
    cursor = keyboard[ c ];
  return presses;
}
