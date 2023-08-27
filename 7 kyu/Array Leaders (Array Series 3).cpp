std::vector<int> arrayLeaders( const std::vector< int >& numbers ) {
  std::vector< int > leaders;
  for ( int i( numbers.size()-1 ), sum{}; i >= 0; sum += numbers[ i-- ] )
    if ( numbers[ i ] > sum ) leaders.push_back( numbers[ i ] );
  return { leaders.crbegin(), leaders.crend() };
}
