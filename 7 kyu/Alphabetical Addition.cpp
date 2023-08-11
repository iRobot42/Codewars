char add_letters( std::vector< char > v ) {
  int i{ 25 };
  for ( char c : v ) i += c - 96;
  return 'a' + i % 26;
}
