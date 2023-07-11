std::vector<int> solve( std::vector< std::string > a,
                        std::vector< std::string > b ) {
  std::unordered_map< std::string, int > h;
  for ( const auto& s : a ) ++h[ s ];              // O(|a|)
  std::vector< int > v; v.reserve( b.size() );
  for ( const auto& s : b ) v.push_back( h[ s ] ); // O(|b|)
  return v;
}
