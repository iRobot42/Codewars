long parse_bank_account( const std::string& acc ) {
  std::unordered_map< std::string, int > m{ { " _ | ||_|", 0 },
    { "     |  |", 1 }, { " _  _||_ ", 2 }, { " _  _| _|", 3 },
    { "   |_|  |", 4 }, { " _ |_  _|", 5 }, { " _ |_ |_|", 6 },
    { " _   |  |", 7 }, { " _ |_||_|", 8 }, { " _ |_| _|", 9 }};
  long number{};
  for ( size_t i{}, n{ acc.find( '\n' )}; i < n; i += 3 )
    number = number * 10 + m.at({ acc.substr( i, 3 ) +
      acc.substr( i + n + 1, 3 ) + acc.substr( i + 2 * n + 2, 3 )});
  return number;
}
