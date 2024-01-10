std::vector<int> incrementer( std::vector< int > nums ) {
  for ( int i{}; int& n : nums ) ( n += ++i ) %= 10;
  return nums;
}
