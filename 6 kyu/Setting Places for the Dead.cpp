std::vector<std::string> set_table( const std::vector< std::string >& the_dead ) {
# define CHECK( seat ) if ( the_hall[ seat ][ 0 ] == '_' ){ the_hall[ seat ] = the_dead[ name ]; break; }
  std::vector< std::string > the_hall( 12, "_____" );
  for ( size_t name{}; name < std::min( the_dead.size(), the_hall.size() ); ++name ) {
    if ( the_dead[ name ][ 0 ] == '_' ) continue;
    const size_t initial{ std::vector< size_t >{ 18,18,12,12,15,18,15,12,15,18,18,
      18,12,15,15,18,12,12,21,12,12,15,15,15,18,12 }[ the_dead[ name ][ 0 ]-'A' ] }; // O(1)
    for ( size_t offset{}; offset < 7; ++offset ) {
      CHECK(( initial - offset ) % 12 ); // ccw
      CHECK(( initial + offset ) % 12 ); // cw
    }
  }
  return the_hall;
}
