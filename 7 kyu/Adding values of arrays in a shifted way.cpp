using Vi = std::vector< int >;
Vi addingShifted( std::vector< Vi > arrays, int shift ) {
  const size_t rows{ arrays.size() }, cols{ arrays.back().size() };
  Vi result( cols + shift * ( rows - 1 ));
  for ( size_t row{}; row < rows; ++row )
    for ( size_t col{}, i{ shift * row }; col < cols; ++col )
      result[ i++ ] += arrays[ row ][ col ];
  return result;
}
