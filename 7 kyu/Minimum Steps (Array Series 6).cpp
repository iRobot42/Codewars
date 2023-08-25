int minimumSteps( std::vector< int > numbers, int input ) {
  sort( numbers.begin(), numbers.end() );
  int sum{ numbers.front() }, steps{};
  while ( sum < input ) sum += numbers[ ++steps ];
  return steps;
}
