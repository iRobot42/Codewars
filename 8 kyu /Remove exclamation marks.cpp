std::string removeExclamationMarks( std::string str ) {
  str.erase( remove( str.begin(), str.end(), '!' ), str.end() );
  return str;
}
