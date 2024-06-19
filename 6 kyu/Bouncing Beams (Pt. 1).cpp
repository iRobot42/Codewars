using Board = std::vector< std::string >;
using Result = std::pair< std::pair< int, int >, size_t >;
Result exit_from_maze( const Board& model ) {
  size_t x, y, dx, dy, distance( -1 );
  for ( size_t r{}, R{ model.size() }; r < R; ++r )
    for ( size_t c{}, C{ model.back().size() }; c < C; ++c )
      if ( model[ r ][ c ] == '*' )
        x = c, dx = c == C-1 ? -1 : !c ? 1 : 0,
        y = r, dy = r == R-1 ? -1 : !r ? 1 : 0;
  do if ( model[ y += dy ][ x += dx ] == '\\' ) std::swap( dx, dy );
    else if ( model[ y ][ x ] == '/' ) std::swap( dx = -dx, dy = -dy );
  while ( ++distance, model[ y ][ x ] != '#' );
  return {{ x, y }, distance };
}
