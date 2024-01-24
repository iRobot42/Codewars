int stray( std::vector< int > numbers ) {
  int common{ numbers[ 0 ] == numbers[ 1 ] ? numbers[ 0 ] : numbers[ 2 ] };
  for ( const int number : numbers ) if ( number != common ) return number;
  throw;
};
