std::string flyBy( std::string lamp, std::string drone ) {
  return lamp.replace( 0, drone.size(), drone.size(), 'o' );
}
