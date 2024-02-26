char trilingual_democracy( const std::string& group ) {
  return group[ 0 ] xor group[ 1 ] xor group[ 2 ];
}
