int solve( std::vector< std::vector< int >> v ) {
  int l{ 1 }, r{ 1 };
  for ( const auto& i : v ) {
    const auto [ f, s ]{ minmax_element( i.cbegin(), i.cend() )};
    const std::array a{ *f * l, *f * r, *s * l, *s * r };
    const auto p{ std::minmax_element( a.cbegin(), a.cend() )};
    l = *p.first, r = *p.second;
  }
  return r;
}
