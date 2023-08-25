std::vector<int> productArray( std::vector< int > numbers ) {
  int product{ 1 };
  for ( const int number : numbers ) product *= number;
  for ( int& number : numbers ) number = product / number;
  return numbers;
}
