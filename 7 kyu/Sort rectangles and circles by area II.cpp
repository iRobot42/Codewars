using VP_t = std::vector< std::pair< double, double >>;
VP_t sort_by_area( VP_t v ) {
  return sort( v.begin(), v.end(), [ & ]( const auto& a, const auto& b ) {
    return a.first * ( a.second ? a.second : a.first * 3.14 ) // or M_PI
         < b.first * ( b.second ? b.second : b.first * 3.14 ); }), v;
}
