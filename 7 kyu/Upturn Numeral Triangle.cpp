std::string pattern( int number ) {
  if ( !number ) return {};
  std::string triangle;
  for ( int row{ 1 }; row <= number; ++row ) {
    triangle += std::string( row - 1, ' ' );
    const std::string pattern{ ' ' + std::to_string( row % 10 )};
    for ( int i{ row }; i <= number; ++i ) triangle += pattern;
    triangle += '\n';
  }
  return triangle.pop_back(), triangle;
}
