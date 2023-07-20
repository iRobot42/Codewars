std::vector<int> oddOnesOut( const std::vector< int >& n ) {
  std::unordered_map< int, int > m;
  for ( const int i : n ) ++m[ i ];
  std::vector< int > v; v.reserve( n.size() );
  for ( const int i : n ) if ( !( m[ i ] & 1 )) v.push_back( i );
  return v;
}
