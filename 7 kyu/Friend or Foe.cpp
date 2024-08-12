using Names_t = std::vector< std::string >;
Names_t friendOrFoe( const Names_t& input ) {
  Names_t friends;
  for ( const auto& name : input )
    if ( name.size() == 4 ) friends.push_back( name );
  return friends;
}
