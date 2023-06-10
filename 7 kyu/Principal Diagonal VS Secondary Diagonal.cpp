std::string diagonal( const std::vector< std::vector< int >>& m ) {
  long s{};
  for ( size_t i{}, n{ m.size() }; i < n; ++i )
    s += m[ i ][ i ] - m[ i ][ n - 1 - i ];
  return !s ? "Draw!" : ( s > 0 ? "Principal" : "Secondary" ) +
    std::string( " Diagonal win!" );
}
