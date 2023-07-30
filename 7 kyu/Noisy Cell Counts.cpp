std::vector<int> cleaned_counts( const std::vector< int >& data ) {
  std::vector< int > correct;
  correct.reserve( data.size() );
  for ( const int sample : data )
    correct.push_back( std::max( sample, correct.back() ));
  return correct;
}
