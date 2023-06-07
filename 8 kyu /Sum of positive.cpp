int positive_sum( const std::vector< int > v ) {
  int s{};
  for ( const int n : v ) if ( n > 0 ) s += n;
  return s;
}
