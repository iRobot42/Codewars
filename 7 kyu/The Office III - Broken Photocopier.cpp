std::string broken( const std::string& s ) {
  std::string r{ s };
  for ( char& c : r ) c ^= 1;
  return r;
}
