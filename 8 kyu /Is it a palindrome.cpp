bool isPalindrom( const std::string& str ) {
  auto l{ &str.front() }, r{ &str.back() };
  while ( l < r ) if ( tolower( *l++ ) != tolower( *r-- ) ) return false;
  return true;
}
