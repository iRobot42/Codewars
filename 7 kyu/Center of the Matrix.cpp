using oi_t = std::optional< int >;
oi_t center( const std::vector< std::vector< int >>& m ) {
  const size_t r{ m.size() }, c{ r ? m.front().size() : 0 };
  return r&1 && c&1 ? oi_t( m[ r/2 ][ c/2 ] ) : std::nullopt;
}
