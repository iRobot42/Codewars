std::vector<std::string> solve( int a, int b ) {
  tm t{}; t.tm_mday = 1;
  const std::array M{ 0, 2, 4, 6, 7, 9, 11 };
  int c{}, f{ -1 }, l{ -1 };
  a -= 1900, b -= 1900;
  for ( int y{ a }; y <= b; ++y ) {
    t.tm_year = y;
    for ( size_t m{}; m < M.size(); ++m ) {
      t.tm_mon = M[ m ];
      mktime( &t );
      if ( t.tm_wday == 5 ) ++c, ( f == -1 ? f : l ) = m;
    }
  }
  const std::array m{ "Jan","Mar","May","Jul","Aug","Oct","Dec" };
  return { m.at( f ), m.at( l ), std::to_string( c ) };
}
