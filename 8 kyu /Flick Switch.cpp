std::vector<bool> flick_switch( const std::vector< std::string >& a ) {
  std::vector< bool > v; v.reserve( a.size() );
  for ( bool f{ true }; const auto& e : a )
    v.push_back( e == "flick" ? f = !f : f );
  return v;
}
