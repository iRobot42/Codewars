typedef std::string st;
st pyramid( int n ) {
  st s;
  for ( int i{ 1 }; i < n; ++i )
    s += st( n - i, ' ' ) + '/' + st( 2 * i - 2, ' ' ) + "\\\n";
  return n ? s += '/' + st( 2 * n - 2, '_' ) + "\\\n" : "\n";
}
