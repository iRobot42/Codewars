std::vector<int> get_even_numbers( const std::vector< int >& numbers ) {
  std::vector< int > even_numbers;
  for ( const int number : numbers )
    if (!( number & 1 )) even_numbers.push_back( number );
  return even_numbers;
}
