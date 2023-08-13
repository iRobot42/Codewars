bool is_sator_square( std::vector< std::vector< char >> t ) {
  for ( size_t i{ 1 }, s{ t.size() }, l{ s-1 }; i < s; ++i )
    for ( size_t j{ i }; j; --j )
      if ( size_t k{ i-j }; t[ i ][ k ] != t[ k ][ i ]
        || t[ l-i ][ k ] != t[ l-k ][ i ] ) return false;
  return true;
}
