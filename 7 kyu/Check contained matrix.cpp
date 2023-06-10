void check_is_contained( int** m1, const int m2[ 3 ][ 3 ],
                         const int rr, const int cc, int& row, int& col ) {
  for ( row = rr - 3; row >= 0; --row )
    for ( col = cc - 3; col >= 0; --col ) {
      bool f{ true };
      for ( int r{}; r < 3 && f; ++r )
        for ( int c{}; c < 3 && f; ++c )
          if ( m1[ r + row ][ c + col ] != m2[ r ][ c ] ) f = false;
      if ( f ) return;
    }
  row = col = -1;
}
