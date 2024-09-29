std::string restore_brackets( const std::string& s ) {
  std::string restored;
  std::vector brackets{ true };
  for ( char c : s )
    if ( restored += c, c == '[' )
      brackets.push_back( true );
    else {
      while ( !brackets.back() )
        restored += ']', brackets.pop_back();
      brackets.back() = false;
    }
  return restored;
}
