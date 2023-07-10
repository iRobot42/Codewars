std::vector<int> solve( std::vector<int> v ) {
  for ( auto i{ v.begin() }; i < v.end()-1; ++i )
    std::swap( *i, *max_element( i, v.end() )),
    std::swap( *++i, *min_element( i, v.end() ));
  return v;
}
