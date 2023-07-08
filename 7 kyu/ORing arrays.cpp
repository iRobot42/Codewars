typedef std::vector< int > Vi;
Vi orArrays( const Vi& a1, const Vi& a2, const int d = 0 ) {
  const Vi& v1{ a1.size() < a2.size() ? a1 : a2 };
  const Vi& v2{ a1.size() < a2.size() ? a2 : a1 };
  Vi v( v2.size() );
  size_t i{};
  while ( i < v1.size() ) v[ i ] = v1[ i ] | v2[ i ], ++i;
  while ( i < v2.size() ) v[ i ] = v2[ i ] | d, ++i;
  return v;
}
