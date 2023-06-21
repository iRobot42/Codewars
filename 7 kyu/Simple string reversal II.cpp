std::string solve( std::string s, int a, int b ) {
  return reverse( s.begin() + a,
    s.begin() + std::min( ++b, int( s.size() ))), s;
}
