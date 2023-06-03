std::vector<int> maps( std::vector< int > v ) {
  for ( int& n : v ) n *= 2;
  return v;
}
