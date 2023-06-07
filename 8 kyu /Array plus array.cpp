int arrayPlusArray( std::vector< int > a, std::vector< int > b ) {
  int sum{};
  for ( const auto& n : a ) sum += n;
  for ( const auto& n : b ) sum += n;
  return sum;
}
