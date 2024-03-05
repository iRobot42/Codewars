using Words_t = std::vector< std::string >;
Words_t filter_long_words( const std::string& sentence, int n ) {
  Words_t long_words; std::string word;
  for ( std::istringstream ss{ sentence }; ss >> word; )
    if ( word.size() > n ) long_words.push_back( word );
  return long_words;
}
