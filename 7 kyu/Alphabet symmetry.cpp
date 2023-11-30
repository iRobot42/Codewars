std::vector<int> solve( const std::vector< std::string >& a ) {
  std::vector< int > result( a.size() );
  for ( int w{}, words( a.size() ); w < words; ++w )
    for ( int l{}, letters( a[ w ].size() ); l < letters; ++l )
      if ( l == tolower( a[ w ][ l ] )-'a' ) ++result[ w ];
  return result;
}
