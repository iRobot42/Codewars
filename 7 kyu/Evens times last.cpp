int even_last( std::vector< int > v ) {
  int s{};
  for ( size_t i{}; i < v.size(); i += 2 ) s += v[ i ];
  return v.empty() ? 0 : s * v.back();
}
