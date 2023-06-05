std::vector<int> invert( std::vector<int> v ) {
  return transform( v.cbegin(), v.cend(), v.begin(), std::negate<>() ), v;
}
