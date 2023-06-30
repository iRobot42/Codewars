int repeats( std::vector< int > v ) {
  std::unordered_map< int, int > m; for ( const int i : v ) ++m[ i ];
  int s{}; for ( const auto [ k, v ] : m ) if ( v == 1 ) s += k;
  return s;
}
