bool possibly_perfect( const std::vector< char >& key,
                       const std::vector< char >& ans ) {
  for ( size_t i{}, c{}, w{}; i < key.size(); ++i )
    if ( key[ i ] != '_' ) {
      ans[ i ] == key[ i ] ? ++c : ++w;
      if ( c && w ) return false;
    }
  return true;
}
