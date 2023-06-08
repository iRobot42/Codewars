std::vector<int> seqToOne( int n ) {
  std::vector< int > v;
  while ( n != 1 ) v.push_back( n > 1 ? n-- : n++ );
  return v.push_back( 1 ), v;
}
