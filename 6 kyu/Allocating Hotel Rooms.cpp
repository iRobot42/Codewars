std::vector< int > allocateRooms( std::vector< std::vector< int >>& customers ) {
  sort( customers.begin(), customers.end() );
  std::vector< int > rooms, hotel( customers.size() );
  for ( const auto& customer : customers )
    for ( size_t room{}; room < hotel.size(); ++room )
      if ( hotel[ room ] < customer.front() ) {
        hotel[ room ] = customer.back();
        rooms.push_back( ++room );
        break;
      }
  return rooms;
}
