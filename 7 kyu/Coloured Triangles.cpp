std::string triangle( std::string s ) {
  while ( s.size() > 1 ) {
    for ( auto& c : s ) {
      const auto n{ *std::next( &c )};
      if ( c != n ) c = 219 - c - n;
    }
    s.pop_back();
  }
  return s;
}
