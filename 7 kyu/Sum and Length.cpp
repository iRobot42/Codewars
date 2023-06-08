std::string sumLength( std::vector< int > input ) {
  int pos{}, neg{}, nul{ 1 };
  for ( const int n : input ) n > 0 ? pos += n : n < 0 ? neg++ : nul++;
  return std::to_string( pos ) + ' ' + std::to_string( neg + nul / 2 );
}
