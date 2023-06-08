std::string itinerary( std::vector< Route > travel ) {
  std::string route{ travel[ 0 ].in + '-' + travel[ 0 ].out };
  for ( size_t i{ 1 }; i < travel.size(); ++i )
    route += ( travel[ i ].in != travel[ i - 1 ].out ?
      '-' + travel[ i ].in : "" ) + '-' + travel[ i ].out;
  return route;
}
