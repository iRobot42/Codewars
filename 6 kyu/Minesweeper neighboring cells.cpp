void compute_number_mines( char** board, const int rows, const int cols ) {
  for ( int row{}; row < rows; ++row )
    for ( int col{}; col < cols; ++col )
      if ( board[ row ][ col ] == 'R' ) {
        int mines{};
        const int R{ std::min( rows, row + 2 )};
        const int C{ std::min( cols, col + 2 )};
        for ( int r{ std::max( 0, row - 1 )}; r < R; ++r )
          for ( int c{ std::max( 0, col - 1 )}; c < C; ++c )
            mines += board[ r ][ c ] == 'o';
        board[ row ][ col ] = mines + '0';
      }
}
