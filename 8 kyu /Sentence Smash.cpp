std::string smash( const std::vector< std::string >& words ) {
  if ( words.empty() ) return {};
  std::string sentence;
  for ( const auto& word : words ) sentence += word + ' ';
  return sentence.pop_back(), sentence;
}
