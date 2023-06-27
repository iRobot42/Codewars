bool solve( std::string s ) {
  int c{};
  for ( size_t i{}, m{ s.size()/2 }; i < m; ++i )
    if (( c += s[ i ] != s[ s.size()-1 - i ] ) > 1 )
      return false;
  return c || s.size() & 1;
}
