class Crisis {
public:
  static std::string helpZoom( std::vector< int > key ) {
    return equal( key.cbegin(), key.cend() - key.size() / 2, key.crbegin() )
      && sqrt( key.size() ) == int( sqrt( key.size() ) ) ? "Yes" : "No";
  }
};
