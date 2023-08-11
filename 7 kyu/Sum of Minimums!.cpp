int sum_of_minimums( const std::vector< std::vector< int >>& numbers ) {
  int sum{};
  for ( const auto& row : numbers )
    sum += *min_element( row.cbegin(), row.cend() );
  return sum;
}
