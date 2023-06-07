std::vector<int> reverseSeq( int n ) {
  std::vector< int > v;
  while ( n ) v.push_back( n-- );
  return v;
}
