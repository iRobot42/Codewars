std::pair<int, int> minimum_amount( const std::vector< int >& moves ) {
  std::array< int, 2 > boxes{}, limit{};
  for ( size_t move{}, side{}; move < moves.size(); side = ++move & 1 )
    boxes[ side ] += moves[ move ], boxes[ !side ] -= moves[ move ],
    limit[ side ] = std::max( limit[ side ], boxes[ side ] );
  return std::make_pair( limit.front(), limit.back() );
}
