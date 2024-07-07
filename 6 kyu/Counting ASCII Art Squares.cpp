unsigned count_squares( const std::vector< std::string >& lines ) {
  size_t rows{ lines.size() }, cols{};
  for ( const auto& line : lines ) cols = std::max( cols, line.size() );
  std::vector< std::string > picture( lines );
  for ( auto& line : picture ) line += std::string( cols - line.size(), ' ' );
  auto vrt{ []( const char c ){ return c == '+' || c == '|'; }};
  auto hrz{ []( const char c ){ return c == '+' || c == '-'; }};
  unsigned squares{};
  for ( size_t row{}; row < rows-1; ++row )
    for ( size_t col{}; col < cols-1; ++col ) {
      if ( picture[ row ][ col ] != '+' ) continue;
      const size_t lim{ std::min( rows - row, cols - col ) };
      for ( size_t i{ 1 }, f{ 1 }; i < lim; ++i, f = 1 ) {
        for ( size_t r{ row }; f && r <= row + i; ++r )
          f = vrt( picture[ r ][ col ] ) && vrt( picture[ r ][ col + i ] );
        for ( size_t c{ col }; f && c <= col + i; ++c )
          f = hrz( picture[ row ][ c ] ) && hrz( picture[ row + i ][ c ] );
        squares += f;
      }
    }
  return squares;
}
