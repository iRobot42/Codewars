double posAverage( const std::string& s ) {
  const size_t digits{ s.find( ',' )}, block{ digits + 2 };
  const size_t ssize{ s.size() }, n{( ssize + 2 ) / block };
  int common{};
  for ( size_t i1{}; i1 < ssize; i1 += block )
    for ( size_t i2{ i1 + block }; i2 < ssize; i2 += block )
      for ( size_t i{}; i < digits; ++i )
        common += s[ i1 + i ] == s[ i2 + i ];
  return common * 200. / ( n * ( n-1 ) * digits );
}
