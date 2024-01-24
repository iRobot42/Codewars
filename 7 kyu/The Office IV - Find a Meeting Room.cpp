int meeting( const std::vector< char >& rooms ) {
  const auto empty{ find( rooms.cbegin(), rooms.cend(), 'O' )};
  return empty == rooms.cend() ? -1 : empty - rooms.cbegin();
}
