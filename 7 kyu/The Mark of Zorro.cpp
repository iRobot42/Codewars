template< typename T >
std::vector<T> zorro( const std::vector< std::vector< T >> matrix ) {
  const size_t size{ matrix.size() }, s{ size - 1 };
  std::vector< T > z;
  z.reserve( size ? size * 3 - 2 : 0 );
  for ( size_t row{}; row < size; ++row )
    for ( size_t col{}; col < size; ++col )
      if ( !row || row == s || row + col == s )
        z.push_back( matrix[ row ][ col ]);
  return z;
}
