int sum_of_a_beach( std::string s ) {
  for ( char& c : s ) c = tolower( c );
  int c{};
  for ( const auto& e : { "sand", "water", "fish", "sun" }) {
    size_t i{};
    while (( i = s.find( e, i )) != s.npos ) ++c, ++i;
  }
  return c;
}
