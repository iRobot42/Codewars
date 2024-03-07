std::string get_middle( std::string input ) {
  const auto s{ input.size() - 1 };
  return input.substr( s / 2, 1 + s % 2 );
}
