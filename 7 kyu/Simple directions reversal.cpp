using Vs = std::vector< std::string >;
Vs solve( Vs v ) {
  Vs r{ "Begin" }; r.reserve( v.size() );
  for ( size_t i{ v.size()-1 }, j{}; i; --i, ++j )
    r[ j ] += v[ i ].substr( v[ i ].find( ' ' )),
    r.push_back( v[ i ][ 0 ] == 'L' ? "Right" : "Left" );
  return r.back() += v[ 0 ].substr( v[ 0 ].find( ' ' )), r;
}
