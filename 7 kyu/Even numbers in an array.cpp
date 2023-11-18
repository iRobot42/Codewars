std::vector<int> evenNumbers( std::vector< int > a, int n ) {
  std::vector< int > v( n );
  for ( auto i{ a.size()-1 }; n; --i )
    if (!( a[ i ] & 1 )) v[ --n ] = a[ i ];
  return v;
}
