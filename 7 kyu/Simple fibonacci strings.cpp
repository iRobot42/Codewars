std::string solve( int n ) {
  std::string p{ "0" }, s{ "01" };
  for ( int i{ 2 }; i <= n; ++i )
    p.swap( s ), s = p + s;
  return n ? s : p;
}
