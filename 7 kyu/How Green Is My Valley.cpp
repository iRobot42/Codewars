struct Valley {
  static std::vector< int > makeValley( std::vector< int >& v ) {
    auto l{ v.begin() }, r{ v.end() };
    while ( r - l > 1 )
      std::swap( *max_element( l, r ), *l++ ),
      std::swap( *max_element( l, r ), *--r );
    return v;
  }
};
