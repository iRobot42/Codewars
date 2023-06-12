double cog_rpm( const std::vector< int >& c ) {
  return ( c.size() & 1 ? 1. : -1 ) * c.front() / c.back();
}
