int minSum( std::vector< int > v ) {
  sort( v.begin(), v.end() );
  size_t l{}, r{ v.size()-1 }, sum{};
  while ( l < r ) sum += v[ l++ ] * v[ r-- ];
  return sum;
}
