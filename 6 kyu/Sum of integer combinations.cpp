int find( const std::vector< int >& vec, int n ) {
  int comb{};
  const std::function< void( const int, const size_t, const size_t )> run{
    [ & ]( const int num, const size_t pos, const size_t len ) {
      if ( len < vec.size() ) for ( size_t i{ pos }; i < vec.size(); ++i )
        comb += num == vec[ i ], run( num - vec[ i ], i, len + 1 ); }};
  return run( n, 0, 0 ), comb;
}
