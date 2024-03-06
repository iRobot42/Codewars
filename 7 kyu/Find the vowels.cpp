std::vector<int> vowelIndices( const std::string& word ) {
  std::vector< int > indices;
  const std::string vowels{ "aeiouyAEIOUY" };
  for ( size_t i{}; i < word.size(); ++i )
    if ( vowels.find( word[ i ] ) != vowels.npos )
      indices.push_back( i + 1 );
  return indices;
}
