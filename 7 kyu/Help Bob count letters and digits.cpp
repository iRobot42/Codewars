int countLettersAndDigits( std::string s ) {
  return count_if( s.cbegin(), s.cend(), ::isalnum );
}
