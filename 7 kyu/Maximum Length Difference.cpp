struct MaxDiffLength {
  static int mxdiflg( std::vector< std::string >& a1, std::vector< std::string >& a2 ) {
    if ( a1.empty() || a2.empty() ) return -1;
    auto comp{ []( const auto& a, const auto& b ) { return a.size() < b.size(); }};
    const auto m1{ minmax_element( a1.cbegin(), a1.cend(), comp )},
               m2{ minmax_element( a2.cbegin(), a2.cend(), comp )};
    return std::max( abs( static_cast< int >( m1.second->size() - m2.first->size() )),
                     abs( static_cast< int >( m2.second->size() - m1.first->size() )));
  }
};
