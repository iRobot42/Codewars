std::vector<double> averages( std::vector< int > n ) {
  if ( n.size() < 2 ) return {};
  std::vector< double > v( n.size()-1 );
  for ( size_t i{}; i < v.size(); ++i )
    v[ i ] = ( n[ i ] + n[ i+1 ] ) / 2.;
  return v;
}
