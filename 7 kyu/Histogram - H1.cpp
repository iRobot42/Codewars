std::string histogram( std::vector< int > results ) {
  std::string histogram;
  for ( int die{ 5 }; die >= 0; --die )
    histogram += std::to_string( die + 1 ) + '|' +
      ( results[ die ] ? std::string( results[ die ], '#' ) +
        ' ' + std::to_string( results[ die ] ) : "" ) + '\n';
  return histogram;
}
