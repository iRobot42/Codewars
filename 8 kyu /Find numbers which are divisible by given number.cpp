std::vector<int> divisible_by( std::vector< int > numbers, int divisor ) {
  std::vector< int > v;
  for ( const auto number : numbers )
    if ( !( number % divisor ) ) v.push_back( number );
  return v;
}
