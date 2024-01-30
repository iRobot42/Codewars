int betweenExtremes( const std::vector< int >& n ) {
  const auto m{ minmax_element( n.cbegin(), n.cend() )};
  return *m.second - *m.first;
}
