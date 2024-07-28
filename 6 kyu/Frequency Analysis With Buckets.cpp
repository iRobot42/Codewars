std::vector< std::vector< int >*> bucketize( const std::vector< int >& a ) {
  std::map< int, int > fr;
  for ( const int i : a ) ++fr[ i ];
  std::vector< std::vector< int >* > v( a.size() + 1 );
  for ( const auto& [ n, f ] : fr )
    if ( v[ f ] ) v[ f ]->push_back( n );
    else v[ f ] = new std::vector{ n };
  return v;
}
