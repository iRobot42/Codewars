bool feast( std::string beast, std::string dish ) {
  return beast[ 0 ] == dish[ 0 ] && beast.back() == dish.back();
}
