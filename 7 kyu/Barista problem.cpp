int barista( const std::vector< int >& v ) {
  std::vector< int > s( v );
  sort( s.begin(), s.end() );
  int total{};
  for ( int t{}; const int i : s )
    total += ( t += i + 2 ) - 2;
  return total;
}
