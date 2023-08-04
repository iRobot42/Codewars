int MaxSumBetweenTwoNegatives( std::vector< int > a ) {
  size_t i{};
  while ( i < a.size() && a[ i ] >= 0 ) ++i;
  int sum{}, result{ -1 };
  while ( ++i < a.size() )
    if ( a[ i ] >= 0 ) sum += a[ i ];
    else result = std::max( result, sum ), sum = 0;
  return result;
}
