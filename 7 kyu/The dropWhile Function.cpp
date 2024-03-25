template< class Predicate >
std::vector<int> dropWhile( std::vector< int > v, Predicate p ) {
  return { find_if_not( v.cbegin(), v.cend(), p ), v.cend() };
}
