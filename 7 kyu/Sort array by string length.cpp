std::vector< std::string> sortByLength( std::vector< std::string > v ) {
  sort( v.begin(), v.end(), []( auto& a, auto& b ){ return a.size() < b.size(); });
  return v;
}
