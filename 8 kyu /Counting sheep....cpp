int count_sheep( std::vector< bool > v ) {
  return count( v.cbegin(), v.cend(), true );
}
