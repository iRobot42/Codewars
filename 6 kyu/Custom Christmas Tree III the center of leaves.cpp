std::string centerOf( std::string chars ) {
  std::string res;
  for ( size_t i{}, j{}; j < chars.size(); i += ++j * 4 )
    res += chars[ i % chars.size() ];
  return res.substr( 0, ( res + res ).find( res, 1 ));
}
