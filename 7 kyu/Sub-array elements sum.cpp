long elementsSum( const std::vector< std::vector< int >>& a, int d = 0 ) {
  size_t i{ a.size() }, s{};
  for ( const auto& r : a )
    s += r.size() < i-- ? d : r[ i ];
  return s;
}
