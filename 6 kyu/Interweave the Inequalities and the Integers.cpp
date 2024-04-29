std::vector<int> interweave( const std::string& ineqs, const std::vector< int >& ints ) {
  std::vector< int > sorted{ ints }, result( ints.size() );
  sort( sorted.begin(), sorted.end() );
  size_t i{}, l{}, r{ sorted.size()-1 };
  for ( const char sign : ineqs )
    result[ i++ ] = sorted[ sign == '<' ? l++ : r-- ];
  return result[ i ] = sorted[ l ], result;
}
