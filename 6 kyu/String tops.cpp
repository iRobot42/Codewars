std::string tops( const std::string& msg ) {
  std::string s;
  for ( size_t i{ 1 }, top{ 1 }; i < msg.size(); ++top )
    s += msg[ i ], i += 4 * top + 1;
  return { s.crbegin(), s.crend() };
}
