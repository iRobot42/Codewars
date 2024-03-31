int largest_five_digits( const std::string& d ) {
  constexpr size_t S{ 5 };
  std::string s{ d.substr( 0, S ) };
  for ( size_t i{ 1 }, l{ d.size() - S }; i <= l; ++i )
    s = max( s, d.substr( i, S ));
  return stoi( s );
}
