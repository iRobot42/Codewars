std::string switcheroo( const std::string& s ) {
  std::string r{ s };
  for ( char& c : r )
    switch ( c ) {
      case 'a': ++c; break;
      case 'b': --c; break;
    }
  return r;
}
