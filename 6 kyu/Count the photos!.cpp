unsigned long long countPhotos( const std::string& road ) {
  long long rc{}, lc{ count( road.cbegin(), road.cend(), '<' ) }, ph{};
  for ( const auto c : road ) c == '>' ? ++rc : c == '<' ? --lc : ph += rc + lc;
  return ph;
}
