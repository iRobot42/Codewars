int get_section_id( int n, std::vector< int > a ) {
  for ( size_t i{}; i < a.size(); ++i )
    if (( n -= a[ i ]) < 0 ) return i;
  return -1;
}
