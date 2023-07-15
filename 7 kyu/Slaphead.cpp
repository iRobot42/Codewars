std::pair< std::string, std::string> bald( const std::string& s ) {
  const long c{ count( s.cbegin(), s.cend(), '/' )};
  return make_pair( std::string( s.size(), '-' ),
    c > 5 ? "Hobo!" : c > 2 ? "Careless!" : c > 1 ? "Homer!" : c ? "Unicorn!" : "Clean!" );
}
