std::vector< int > countPositivesSumNegatives( std::vector< int > i ) {
  if ( i.empty() ) return {};
  std::vector r{ 0, 0 };
  for ( const auto& e : i )
    if ( e > 0 ) r[ 0 ]++;
    else if ( e < 0 ) r[ 1 ] += e;
  return r;
}
