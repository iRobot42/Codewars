std::vector<unsigned> missNumsFinder( const std::vector< unsigned >& arr ) {
  std::vector< bool > a( 1 + *max_element( arr.cbegin(), arr.cend() ));
  for ( const unsigned i : arr ) a[ i ] = true;
  std::vector< unsigned > v; v.reserve( a.size()-1 );
  for ( unsigned i{ 1 }; i < a.size(); ++i ) if ( !a[ i ] ) v.push_back( i );
  return v;
}
