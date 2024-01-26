bool small_enough( std::vector< int > values, int limit ) {
  for ( const int value : values )
    if ( value > limit ) return false;
  return true;
}
