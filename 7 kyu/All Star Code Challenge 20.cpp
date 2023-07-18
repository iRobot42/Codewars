template< typename T >
std::vector<T> add_arrays( const std::vector<T>& a, const std::vector<T>& b ) {
  std::vector<T> v( a.size() );
  for ( size_t i{}; i < a.size(); ++i ) v.at( i ) = a.at( i ) + b.at( i );
  return v;
}
