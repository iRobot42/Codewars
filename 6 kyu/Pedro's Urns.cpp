double get_probability( int n, const std::vector< int >& b,
                               const std::vector< int >& r ) {
  auto red{ r.front() / double( r.front() + b.front() ) };
  for ( int i{ 1 }; i < n; ++i )
    ( red += r[ i ] ) /= 1 + r[ i ] + b[ i ];
  return red;
}
