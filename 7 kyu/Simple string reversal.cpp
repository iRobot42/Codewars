std::string solve( std::string s ) {
  for ( size_t l{}, r{ s.size()-1 }; l < r; )
    if ( s[ l ] == ' ' ) ++l;
    else if ( s[ r ] == ' ' ) --r;
    else std::swap( s[ l++ ], s[ r-- ] );
  return s;
}
