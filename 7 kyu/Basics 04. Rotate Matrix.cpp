using Matrix = std::vector< std::vector< int >>;
Matrix rotateMatrixLeft( Matrix matrix ) {
  const auto X{ matrix.front().size() }, Y{ matrix.size() };
  Matrix result( X, std::vector< int >( Y ));
  for ( size_t x{}; x < X; ++x )
    for ( size_t y{}; y < Y; ++y )
      result[ x ][ y ] = matrix[ y ][ x ];
  return reverse( result.begin(), result.end() ), result;
}
