using std::vector;
template< typename T >
vector<T> find_array( vector< T > a, vector< int > b ) {
  vector< T > v;
  for ( size_t i : b ) if ( i < a.size() ) v.push_back( a[ i ] );
  return v;
}
