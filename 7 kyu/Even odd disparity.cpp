int solve( std::vector< std::string > v ) {
  int c{};
  for ( const auto& s : v )
    if ( isdigit( s.front() ))
      stoi( s ) & 1 ? --c : ++c;
  return c;
}
