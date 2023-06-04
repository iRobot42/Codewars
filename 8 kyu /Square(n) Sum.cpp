int square_sum( const std::vector<int>& numbers ) {
  int sum{};
  for ( const auto& number : numbers )
    sum += number * number;
  return sum;
}
